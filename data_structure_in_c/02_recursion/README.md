# 하노이 탑
## 하노이 탑 게임 링크
https://www.novelgames.com/ko/tower/

## 최소 횟수
2개 -> 3번
3개 -> 7번
4개 -> 15번
5개 -> 31번
...
n개 -> (2^n - 1)번

## 하노이 타워 문제 해결
1. 작은 원반 n-1개를 A에서 B로 이동
2. 큰 원반 1개를 A에서 C로 이동
3. 작은 원반 n-1개를 B에서 C로 이동

## 코드 구현
- 5_hanoi_tower.c 참고
~~~bash
$./a.out 3
circle1 move A to C
circle2 move A to B
circle1 move C to B
circle3 move A to C
circle1 move B to A
circle2 move B to C
circle1 move A to C
count = 7
~~~
