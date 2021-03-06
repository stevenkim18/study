# 자료구조의 정의
- 데이터의 표현 및 저장 방법

## 알고리즘의 정의
- 데이터를 대상으로 '문제의 해결 방법'

## 자료구조와 알고리즘의 관계
- 자료구조에 따라서 알고리즘은 달라진다.
- 알고리즘은 자료구조의 의존적이다.

## 본 책에서 강조하는 점
- 시중 서적에는 자료구조를 구현만 한 책이 많지만 이 책에서는 최대한 자료구조 모델 자체에 대한 이해를 강조하려 함.

# 알고리즘 성능 분석
## 시간 복잡도
- 속도에 해당하는 알고리즘 수행시간 분석결과
- **일반적으로 속도에 더 무게를 둔다**
## 공간 복잡도
- 메모리 사용량에 대한 분석결과

# 순차 탐색 알고리즘의 시간 복잡도 구하기
- 1_linear_search.c

## 알고리즘의 핵심이 되는 연산
- 위 코드의 주 된 연산은 비교 연산자(==) 이다.

## 알고리즘의 시간 복잡도1 - 최악의 경우
- 위 코드의 예시에서 찾고자 하는 값이 배열의 마지막에 있는 경우나 없는 경우는 5개 중 5개를 모두 검사해야 한다.
- 따라서 배열의 길이가 n이라면 n개를 모두 비교하는 경우가 **최악의 경우**
~~~
T(n) = n
~~~

## ~~알고리즘의 시간 복잡도2 - 평균적인 경우~~
- 이 단순한 알고리즘에서도 계산하는 것이 복잡함.
- 그래서 사용하지 않음.

# 이진탐색(Binary Search) 알고리즘의 소개
- 정렬된 데이터가 아니면 적용 불가
~~~
arr = {1, 2, 3, 7, 9, 12, 21, 23, 27}
~~~

## 예시
- 위의 배열에서 3을 찾고자 한다.

### 첫번쨰 시도
- 처음 인덱스와 끝 인덱스를 더해서 2로 나눈다(0 + 8 / 2 = 4)
- arr[4]의 값이 무엇인지 확인을 한다.
- arr[4] = 9 와 찾고자 하는 값 3을 비교한다. 3이 더 작으니 9 이후에 있는 숫자들은 버린다.
~~~
arr = {1, 2, 3, 7, 0, 0, 0, 0, 0} // 버린 것은 0으로 표시
~~~

### 두번째 시도
- 첫번째와 같은 방법을 반복한다.
- 0 + 3 / 2 = 1
- arr[1] = 2 < 3;
~~~
arr = {0, 0, 3, 7} // 버린 것은 0으로 표시
~~~

### 세번째 시도
- 2 + 3 / 2 = 2
- arr[2] = 3 == 3

## 이진탐색 구현
- 2_binary_search.c 참고

## 이진탐색의 시간 복잡도
- 계산식은 복잡하고 그냥 log 라는 것만 알고 넘어가자
~~~
T(n) = log2(n)
~~~

# 빅오 표기법(Big-Oh Noatation)
- 데이터의 수가 많아 질수록 최고 차항이 차수가 아닌 값들의 영향은 미미해진다.
~~~
T(n) = n^2 + 2n + 1 -> O(n^2)
T(n) = 3n^3 + 10n^2 -> 0(n^3)
~~~

## 최고 차항의 계수가 크면 어떻게 하나요?
~~~
T(n) = 9999n^2 -> O(n^2)
~~~
빅오 표기법의 핵심은 데이터의 증가에 따른 결과 값의 그래프 추이를 볼 수 있는 유용한 지표이다.
- O(n) -> 연산 횟수의 증가 폭이 **대각선** 그래프와 유사
- O(n^2) -> 연산 횟수의 증가 폭이 **n^2** 그래프와 유사
- O(log(n)) -> 연산 횟수의 증가 폭이 **로그 함수** 그래프와 유사

이 정도로만 집고 넘어가면 충분하다.

## 많이 쓰이는 표기법들
- **O(1)**(상수형 빅오)
- **O(log(n))**(로그형 빅오) - 데이터 수의 증가율에 따라 연산 횟수의 증가율이 휠씬 낮은 경우
- **O(n)(선형 빅오)** - 데이터 수와 연산 횟수가 비례
- **O(nlog(n))**(선형 로그형 빅오) - 데이터의 수가 2배로 증가 할때, 연산 횟수는 2배 조금 넘게 증가하는 경우
- O(n^2) - 주로 2중 반복문일때 좋은 시간복잡도는 아님.
- O(n^3) - 주로 3중 반복문, 그냥 사용하지마.
- O(2^n) - 비현실적인 알고리즘, 이것도 쓰지마.

## 성능 대소 비교
~~~
O(1) < O(log(n) < O(n) < O(nlog(n)) < O(n^2) ....
~~~

## 순차 탐색 알고리즘과 이진 탐색 알고리즘 비교
- 순차 탐색 -> O(n)
- 이진 탐색 -> O(log(n))
- 100, 1000, 10000, 100000 일때 비교
- 순차 탐색은 비례 하기 때문에 따로 계산 안함.
- 3_BS_count.c 참고

결과 값
~~~
len = 100, count = 7
len = 1000, count = 10
len = 10000, count = 14
len = 100000, count = 17
~~~
연산 횟수가 획기적으로 줄어들었음.
