# 예제 설명
## ex3
- 함수 템플릿 기본
- print 함수 만들기

## ex4
- 함수 템플릿의 명시적 타입 지정 후 호출

## ex5
- 매개변수가 2개인 함수 템플릿

### typename과 class
- 템플릿 안에 변수를 선언 할 때 표준화 이전에는 class를 사용 (template<class T>)
- 요즘 컴파일러는 둘다 지원하나 typename을 사용하는 것을 권장

## ex7
- 배열을 출력하는 함수 템플릿
- 함수 템플릿의 매개변수로 타입 뿐만 아니라 일반 변수 타입도 지정 가능
- template<typename T, int n>

## ex12
- 클래스 템플릿으로 Array 클래스 만들기
- ex13 -> 함수의 매개변수 처럼 템플릿도 defalut 값 사용 가능
~~~c++
template<typename T=int, int n=10>
~~~

## ex17
- 함수 템플릿으로 for_each 만들기

## ex18
- 명시적으로 for_each 호출
~~~c++
For_each<int*, void (*)(int)>(arr, arr+5, printInt);
~~~

## ex19
- 출력함수를 함수 템플릿으로 만들고 함수 포인터의 타입을 명시적으로 호출
~~~c++
For_each(arr, arr+5, print<int>);
~~~


