#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void isPalindrome(int number) {
	int r, sum = 0, temp;

	temp = number;
	while (temp > 0)
	{
		r = temp % 10;
		sum = (sum * 10) + r;
		temp = temp / 10;
	}
	if (number == sum)
		printf("%d is palindrome\n", number);
	else
		printf("%d is not palindrome\n", number);

}

void swipNums() {
	int x, y;

	printf("enter 2 number:");
	scanf("%d%d", &x, &y);
	
	x = abs(x);
	y = abs(y);
	while (x > 0) {
		if (x < y) {
			x += y;
			y = x - y;
			x = x - y;
		}
		x -= y;
	}
	printf("y=> %d\n", y);
}

void primeNumbers() {
	
	int i, j, flag;
	printf("All the prime numbers from 2 to 100 :");
	for (i = 2; i <= 100; i++){

		flag = 0;

		for (j = 2; j < i; j++){

			if (i%j == 0)
				break;
			
			else
				flag += 1;
		}

		if (flag > 0)
			printf("%d\n", i);
	}
}



int main(){
	
	int number;
	printf("enter number:");
	scanf("%d",&number);

	isPalindrome(number);
	swipNums();
	primeNumbers();
	

	getchar();
	getchar();
	return 0;
}

