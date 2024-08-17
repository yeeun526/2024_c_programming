#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0
int main() {
	int i = 2000; // 2000을 가지고 있는 i만의 주소번지 존재
	int* p = NULL; // 아무 주소값도 가지지 않는 p가 있는 주소 번지 또한 존재
	p = &i; // i의 주소를 p에 저장 (p는 주소값 저장하는 변수)

	printf("i=%d\n", i); // i값 2000 출력
	printf("&i=%u\n\n", &i); // i의 주소값 출력
	printf("p=%u\n", p); // p에 저장되어 있는 주소값(i의 주소값) 출력
	printf("*p=%d\n\n", *p); // p에 저장되어 있는 주소에 들어있는 값 출력

	return 0;
}
#endif 

#if 0
int main() {
	int x = 10;
	int y = 20;
	int* p;
	
	p = &x; // x의 주소값 저장
	printf("p=%d\n", p); // x의 주소값 출력
	printf("*p=%d\n", *p); // x의 값 출력

	p = &y; // y의 주소값 저장 
	printf("p=%d\n", p); // y의 주소값 출력
	printf("*p=%d\n", *p); // y의 값 출력

	return 0;
}
#endif 

#if 0
int main() {
	int i = 10;
	int* p;

	p = &i; // i의 주소값 저장
	printf("i=%d\n", i); // i의 값 10 출력

	*p = 20; // i의 값을 20으로 변환
	printf("i=%d\n", i); // i의 값 20 출력

	return 0;
}
#endif 

/*
int형으로 활동하여 사용자에게 입력받은 후 
해당 값을 2배로 주는 함수(반환형태 : void)를 사용하여 
입력받은 수의 2배를 출력하시오
*/
#if 0
void Double(int *x) {
	// *x = &a
	// 
	*x *= 2;
}

int main() {
	int a;
	scanf("%d", &a);

	Double(&a);
	printf("%d", a);
	return 0;
}
#endif 

/*
숫자를 입력하여 해당 숫자를 표시하는 포인터를 만드십시오. 
해당 숫자의 값과 포인터의 값을 출력하고, 
두 주소 출력하여 같은 값을 사용하도록 확인하세요.
*/
#if 0
int main() {
	int a;
	int* ptr;
	
	scanf("%d", &a);

	ptr = &a;

	/*printf("ptr 값 = %u\n", ptr);
	printf("ptr 주소 = %u\n", &ptr);

	printf("a의 값 = %d\n", *ptr);
	printf("a의 주소 = %u\n", ptr);*/

	printf("a : %d \n *ptr : %d\n", a, *ptr); // 내용 가져옴 
	printf("&a : %d \n ptr : %d\n", &a, ptr); // 주소 가져옴 

	


	return 0;
}
#endif 

/*
숫자를 입력하여 해당 숫자를 제곱으로 돌려주는 함수를 만드세요. 
(반환형태가 void이고, 포인터 사용)
*/
#if 0
void Square(int *num) {
	*num = *num * *num;
}

int main() {
	int num;
	scanf("%d", &num);

	Square(&num);
	printf("%d", num);

	return 0;
}
#endif 

/*
숫자1, 숫자2 두 개의 숫자를 입력하여 
포인터가 두 개의 신뢰를 받는 것으로 
두 개의 숫자를 종료 후 프로그램을 작성하세요.
(숫자1을 출력하면 숫자2의 숫자가 있고, 
숫자2를 출력하면 숫자1이 하세요. 
함수에서 두 값을 로그 바꿈)
*/
#if 0
void change_number(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("바꾸기 전 값 | a : %d  b : %d\n", a, b);
	change_number(&a, &b);
	printf("바꾼 후 값   | a : %d  b : %d\n", a, b);


	return 0;
}
#endif 
