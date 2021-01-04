#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void    error_handling(char *msg)
{
    fputs(msg, stderr);
    fputc('\n', stderr);
    exit(1);
}

int main(int argc, char **argv)
{
    int                 client_socket;
    struct  sockaddr_in server_addr;
    char                message[1024] = {0x00, };

    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1)
        error_handling("socket error");
    printf("client_socket = %d\n", client_socket);

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(argv[1]);
    server_addr.sin_port = htons(atoi(argv[2]));

    if (connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1)
        error_handling("connect error");
    
    if (read(client_socket, message, sizeof(message)-1) == -1)
        error_handling("read error");
    printf("Message from server : %s\n", message);

    close(client_socket);
    return 0;
}