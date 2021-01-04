# 컨테이너의 종류
## 시퀀스 컨테이너
- 삽입 되는 순서에 따라 원소의 위치가 결정되고 바뀌지 않음.
- vector, deque, list
- list 와 나머지 연관 컨테이너는 노드 기반 컨테이너
- vector, deque는 배열 기반 컨테이너

## 연관 컨테이너
- 삽입 순서와 상관없이 정렬 기준에 따라 원소의 위치가 결정
- set, multiset, map, multimap
- 모든 컨테이너가 노드 기반 컨테이너

# 알고리즘의 범주
- 원소를 수정하지 않는 알고리즘
- 원소를 수정하는 알고리즘
- 제거 알고리즘
- 변경 알고리즘
- 정렬 알고리즘
- 정렬된 범위 알고리즘
- 수치 알고리즘

# 예제 설명
## ex5
- <algorithm> 에서 find 함수 사용해서 컨테이너 안에 값 찾기
- 반복자 필요

## ex6 (코드 없음)
- sort 알고리즘은 임의 접근 반복자를 요구 vector와 deque만 사용 가능
- list 등 다른 컨테이너를 넣으면 에러!
- list 같은 연관 컨테이너는 자체적으로 정렬 기준이 있음.

## ex7
- 함수 객체를 사용해서 정렬
- less<int>() 사용해서 오름 차순 정렬
- greater<int>() 사용해서 내림 차순 정렬

## ex9
- stack의 기본 컨테어더 어뎁터는 deque
- deque 대신 vector를 명시적으로 넣어줌.

## ex10
- std::reverse_iterator 사용

## ex11
- std::vector<int>::reverse_iterator 사용

## ex12
- iterator와 reverse_iterator가 가르키는 값의 차이
- reverse_iterator는 한개 앞의 값을 가르킴
### vector 값
~~~
0 10 20 30 40 50
~~~
~~~c++
std::vector<int>::iterator normal_iter = v.begin() + 3;
std::vector<int>::reverse_iterator r_iter(normal_iter);

std::cout << "normal_iter = v.begin() + 3 = " << *normal_iter << std::endl;
std::cout << "r_iter(v.begin()+3) = " << *r_iter << std::endl;
~~~
### 결과값
~~~
normal_iter = v.begin() + 3 = 30
r_iter(v.begin()+3) = 20
~~~
- 복사 생성자로 reverse_iterator를 만들었는데 바로 앞의 값을 출력(20) (30이 아닌)

