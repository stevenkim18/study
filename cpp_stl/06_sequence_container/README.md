# 예제설명
## ex1
- `vector` `push_back` 함수 사용하기
- `vector`는 배열 처럼 [] 로 원소 접근 가능
- `-Wall -Werror -Wextra` 로 컴파일 하면 컴파일 안됨.

## ex2
- `vector<int>::size_type` 으로 변경
- 책에는 `size_type`이 `unsigned int`로 나오는데 내가 출력하면 'm'이 나옴(뭐지)
- cplusplus 레퍼런스는 `size_t`라고 나옴.

## ex3
- `v.size()` -> 원소의 개수
- `v.capacity()` -> 할당 된 메모리
- `v.max_size()` -> 최대 저장 가능한 수
- `capacity`는 vector만 있음.

