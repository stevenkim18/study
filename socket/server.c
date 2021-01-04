#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void    error_handling(char *message)
{
    fputs(message, stderr); // stderr에 message 출
    fputc('\n', stderr);
    exit(1);
}

int main(int argc, char const *argv[])
{   
    int                 server_socket;
    int                 client_socket;

    struct  sockaddr_in server_addr;
    struct  sockaddr_in client_addr;
    socklen_t           client_addr_len;

    if (argc != 2)
        error_handling("wrong argument");

    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1)
        error_handling("socket error");
    printf("server socket = %d\n", server_socket);

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;                   // ipv4
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);    // ip
    server_addr.sin_port = htons(atoi(argv[1]));        // port
    // printf("server_addr ip = %d\n", server_addr.sin_addr.s_addr);

    if (bind(server_socket, (struct sockaddr*) &server_addr, sizeof(server_addr)) ==  -1)
        error_handling("bind error");

    if (listen(server_socket, 5) == -1)
        error_handling("listen error");
    
    client_addr_len = sizeof(client_addr);
    printf("client_addr len = %d\n", client_addr_len);
    client_socket = accept(server_socket, (struct sockaddr*) &client_addr, &client_addr_len);
    printf("client_socket = %d\n", client_socket);
    if (client_socket == -1)
        error_handling("accpet error");
    
    char msg[] = "Hello this is server\n";
    write(client_socket, msg, sizeof(msg));

    close(client_socket);
    close(server_socket);

    return (0);
}