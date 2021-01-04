#include <iostream>
#include <vector>
#include <stack>

int main(void)
{
	// stack의 디폴드 컨테이너 어뎁터는 deque
	// deque 대신 명시적으로 vector를 이용해서 생성
	std::stack<int, std::vector<int> > s;

	s.push(1);
	s.push(2);
	s.push(3);

	std::cout << "top = " << s.top() << std::endl;
	s.pop();
	std::cout << "top = " << s.top() << std::endl;
	s.pop();
	std::cout << "top = " << s.top() << std::endl;
	s.pop();

	if (s.empty())
		std::cout << "stack is empty" << std::endl;
}
