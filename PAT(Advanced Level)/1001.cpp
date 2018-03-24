/*
1001. A+B Format (20)

Calculate a + b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input

Each input file contains one test case. Each case contains a pair of integers a and b where -1000000 <= a, b <= 1000000. The numbers are separated by a space.

Output

For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input
-1000000 9
Sample Output
-999,991

*/

#include <cstdio>

char ans[5][5];

int main(void)
{
	int a, b;
	int j, k;
	int res;
	bool flag = true;
	bool first = true;

	scanf("%d %d", &a, &b);

	res = a + b;

	if (res < 0) {
		flag = false;
		res = -res;
	}

	j = k = 0;
	while (res != 0) {
		if (res / 1000 == 0)
			sprintf(ans[j++], "%d", res % 1000);
		else
			sprintf(ans[j++], "%03d", res % 1000);
		res /= 1000;
	}

	if (j == 0)
		printf("0\n");
	else {
		j--;
		if (!flag) 
			printf("-");
		for (; j >= 0; j--) {
			if (first) {
				printf("%s", ans[j]);
				first = false;
			} else {
				printf(",%s", ans[j]);
			}
		}
		printf("\n");
	}
}