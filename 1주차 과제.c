#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// A-완
#if 1
int main() {
	int n;
	int a[100];
	int b[100];

	scanf("%d", &n);

	for (int i=0; i < n; i++) {
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < n; i++) {
		if (b[i] <= 5) {
			printf("%d ", a[i]);
		}
	}

	return 0;
}
#endif 

// B-완
#if 1
int main() {
	unsigned long long a;
	int age, month, day;
	scanf("%llu", &a);
	
	int year = a / (100000000000); //년생 저장
	int c = (a / (1000000))%10;// 주민번호 7번째숫자

	month = (a / 1000000000) % 100;
	day = (a / 10000000) % 100;

	switch (c) {
		case 0:
		case 9:
			year = 1800 + year;
			break;

		case 1:
		case 2:
		case 5:
		case 6:
			year = 1900 + year;
			break;

		case 3:
		case 4:
		case 7:
		case 8:
			year = 2000 + year;
			break;

		default:
			break;
	}

	age = 2024 - year;
	
	if (year==2005&&(month > 9 || (month == 9 && day > 3))) {
		age--;
	}
		
	printf("%d ", age);

	if (age >= 19) {
		printf("yes");
	}

	else {
		printf("no");
	}

	return 0;
}
#endif 

// C-완
#if 1
int main() {
	int n;
	
	scanf("%d", &n);
	
	n = n & (~1);

	printf("%d", n);

	return 0;
}
#endif 

// D-완
#if 1
int main() {
	int arr[6][6];
	int blink = 5;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (j == blink) {
				printf("  ");
				blink--;
			}
			else {
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
#endif 

// E-완
#if 1
int main() {
	int arr[100][100];
	int row;
	int blink;

	scanf("%d", &row);
	blink = row - 1;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			if (j == blink) {
				printf("  ");
				blink--;
			}
			else {
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
#endif 

// F-완
#if 1
int main() {
	int n;
	unsigned int arr[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%u", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%u ", arr[i]);
	}

	return 0;
}
#endif 

// G-완
#if 1
int main() {
	unsigned int a;
	unsigned int b;
	unsigned int c, d, q;

	scanf("%u %u", &a, &b);
	c = ~(a & b);
	d = (a | b);
	q = (c & d);

	printf("%u %u %u", c, d, q);

	return 0;
}
#endif 

// H-완
#if 1
int main() {
	int n;
	scanf("%d", &n);
	printf("%X", n);
	return 0;
}
#endif

// I-완
#if 1
int main() {
	char s[100];
	int i = 0;
	gets(s);

	while(s[i] != NULL && i < 100) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			printf("%c", s[i]);
		}
		i++;
	}
	
	return 0;
}
#endif 

// J-완
#if 1
// 1~100까지 배열해놓고 입력받은 숫자 인덱스 값++
int main() {
	unsigned int n;
	int d;
	int arr[101] = { 0, };

	scanf("%u", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &d);
		arr[d]++;
	}

	for (int i = 1; i < 101; i++) {
		if (arr[i] != 0) {
			printf("%d:%d\n", i, arr[i]);
		}
	}

	return 0;
}
#endif 

// K-완
#if 1
int main() {
	unsigned int n;
	int d;
	int arr[101] = { 0, };
	int max = -1;
	int idx=0;

	scanf("%u", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &d);
		arr[d]++;
	}

	for (int i = 1; i < 101; i++) {
		// arr에는 각 인덱스 별 횟수 저장됨
		
		if (arr[i] > max) {
			max = arr[i];
			idx = i;
		}

		// 만약 횟수가 같을 경우
		// 인덱스값 중에서 작은 인덱스 출력
		else if (arr[i] == max) {
			if (i < idx) {
				idx = i;
			}
		}
	}

	printf("%d", idx);


	return 0;
}
#endif 

// L-완
#if 1
int compare(char _str[], char _word[],int idx) {
	// 첫 글자는 맞다는 설정 두번째 부터 하면 됨 
	for (int i = 1; i < _word[i] != NULL; i++) {
		if (i < 100) {
			if (_str[idx + i] != _word[i]) {
				return -1; // 안 맞음
			}
		}
	}
	return 1;
}

int main() {
	char str[100];
	char word[100];

	int i = 0;
	int ans=0;

	gets(str);

	gets(word);

	while (str[i] != NULL && i < 100) {
		if (str[i] == word[0]) {
			// 그 뒤로 word와 비교
			ans = compare(str, word, i);
			// 만약 똑같애 break
			if (ans == 1) {
				break;
			}
			// 안 똑같애 나와, 다음 넘어가 
		}		
		i++;		
	}

	if (ans == 1) {
		printf("%s!", word);
	}
	else {
		printf("%s?", word);
	}

	return 0;
}
#endif 

// M-완 ***
#if 1
// 4 4 4 4 4 4
// 4 5 5 5 5 4
// 4 5 6 6 5 4
// 4 5 6 6 5 4
// 4 5 5 5 5 4
// 4 4 4 4 4 4 

// 3 3 3 3 3
// 3 4 4 4 3
// 3 4 5 4 3
// 3 4 4 4 3
// 3 3 3 3 3

int min(int a, int b) {
	// 두 수 중 작은 값을 반환하는 함수
	return a < b ? a : b;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int min_dist = min(min(i, n - 1 - i), min(j, n - 1 - j));

			printf("%d ", ((n/2)+1)+ min_dist);
		}
		printf("\n");
	}

	return 0;
}
#endif 

// N-완
#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지
void deleteValue(unsigned int arr[], unsigned int index) {
	for (int i = index; i < 10; i++) {
		arr[i] = arr[i + 1];
	}
}
// 이 아래로 수정 금지

int main(void) {
	unsigned int arr[10];
	unsigned int index;

	for (int i = 0; i < 10; i++) {
		scanf("%u", &arr[i]);
	}

	scanf("%u", &index);

	deleteValue(arr, index);

	for (int i = 0; i < 9; i++) {
		printf("%u ", arr[i]);
	}

	return 0;
}
#endif 

// O-완
#if 1
int main() {
	unsigned int arr[20];
	unsigned int standard;
	unsigned int up[20];
	unsigned int down[20];
	int up_idx = 0;
	int down_idx = 0;

	for (int i = 0; i < 20; i++) {
		scanf("%u", &arr[i]);
	}

	scanf("%u", &standard);

	for (int i = 0; i < 20; i++) {
		if (arr[i] >= standard) {
			down[down_idx] = arr[i];
			down_idx++;
		}

		else if (arr[i] <= standard) {
			up[up_idx] = arr[i];
			up_idx++;
		}
	}
	
	for (int i = 0; i < up_idx; i++) {
		printf("%d ", up[i]);
	}
	printf("\n");
	for (int i = 0; i < down_idx; i++) {
		printf("%d ", down[i]);
	}

	return 0;
}
#endif 

// P-완
#if 1
int main() {
	int n;
	int arr[50][50];
	
	scanf("%d", &n);

	if (n % 2 != 0) { // 
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i % 2 == 0) {
					if (j % 2 == 0) {
						printf("1 ");
					}
					else {
						printf("0 ");
					}
				}
				else {
					if (j % 2 == 0) {
						printf("0 ");
					}
					else {
						printf("1 ");
					}
				}
			}
			printf("\n");
		}
	}

	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i % 2 == 0) {
					if (j % 2 == 0) {
						printf("0 ");
					}
					else {
						printf("1 ");
					}
				}
				else {
					if (j % 2 == 0) {
						printf("1 ");
					}
					else {
						printf("0 ");
					}
				}
			}
			printf("\n");
		}
	}

	return 0;
}
#endif 

// Q-완
#if 1
void turn_arr(unsigned int arr[5][5]) {
	unsigned int new_arr[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			// 이해하기 - 생각하기
			new_arr[j][5-1-i] = arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = new_arr[i][j];
		}
	}
	
	return;
}

int main() {
	unsigned int arr[5][5];
	unsigned int turn;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%u", &arr[i][j]);
		}
	}
	scanf("%u", &turn);

	turn = turn % 4;

	for (int i = 0; i < turn; i++) {
		turn_arr(arr);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%u ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif 

// R-완
#if 1
int main() {
	unsigned int arr[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%u", &arr[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				printf("0 ");
			}
			else {
				printf("%u ", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
#endif 

// S-완
#if 1
int main() {
	unsigned int arr[6][6];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%u", &arr[i][j]);
		}
	}

	for (int i = 0; i<6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%u ", arr[i][j]);
			if (j == 2) {
				printf(" ");
			}
		}
		if (i == 2) {
			printf("\n");
		}
		printf("\n");
	}
		
	return 0;
}
#endif

// T-완
#if 1
int main() {
	char s[101];
	char t;
	int i = 0;

	gets(s);
	scanf("%c", &t);

	while (s[i] != NULL && i < 100) {
		if (s[i] == t) {
			s[i] = '#';
		}
		i++;
	}

	printf("%s", s);
	return 0;
}
#endif 
