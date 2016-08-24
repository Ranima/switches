#include <iostream>

int main() {
	int x = 0;
	int y = 0;
	int result = 0;

	char z = 'a';
	
	printf("Input two numbers. (Example: 5 5)\n");

	scanf_s("%d %d", &x, &y);

	//printf("%d %d", x, y);

	printf("Input function (+  -  *  /  \%) \n");
	getchar();
	scanf_s("%c", &z, 1);

	switch (z) {
	case ('+'):
		result = x + y;
		break;
	case ('-'):
		result = x - y;
		break;
	case ('*'):
		result = x * y;
		break;
	case ('/'):
		result = x / y;
		break;
	case ('%'):
		result = x % y;
		break;
	}
	
	
	
	printf("Your answer is %d", result);

	getchar();
	getchar();

}