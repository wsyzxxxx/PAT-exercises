/*
1002. A+B for Polynomials (25)

This time, you are supposed to find A+B where A and B are two polynomials.

Input

Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial: K N1 aN1 N2 aN2 ... NK aNK, where K is the number of nonzero terms in the polynomial, Ni and aNi (i=1, 2, ..., K) are the exponents and coefficients, respectively. It is given that 1 <= K <= 10，0 <= NK < ... < N2 < N1 <=1000.

Output

For each test case you should output the sum of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate to 1 decimal place.

Sample Input
2 1 2.4 0 3.2
2 2 1.5 1 0.5
Sample Output
3 2 1.5 1 2.9 0 3.2

*/

#include <cstdio>
#include <algorithm>

typedef struct {
    double coe;
    int exp;
}node;

node n1[1000];
node n2[1000];
node n[2000];

int main(void)
{
    int poly1, poly2;
    int i, j;
    int count;
    scanf("%d", &poly1);

    for (i = 0; i < poly1; i++) {
        scanf("%d %lf", &n1[i].exp, &n1[i].coe);
    }

    scanf("%d", &poly2);
    
    for (i = 0; i < poly2; i++) {
        scanf("%d %lf", &n2[i].exp, &n2[i].coe);
    }

    count = 0;
    for (i = 0, j = 0; i < poly1 && j < poly2;) {
        if (n1[i].exp > n2[j].exp) {
            n[count].exp = n1[i].exp;
            n[count].coe = n1[i].coe;
            i++;
            count++;
        } else if (n1[i].exp < n2[j].exp) {
            n[count].exp = n2[j].exp;
            n[count].coe = n2[j].coe;
            j++;
            count++;
        } else {
            if (n1[i].coe + n2[j].coe == 0.0) {
                i++;
                j++;
                continue;
            }
            n[count].exp = n1[i].exp;
            n[count].coe = n1[i].coe + n2[j].coe;
            i++;
            j++;
            count++;
        }
    }

    if (i < poly1) {
        for (; i < poly1; i++) {
            n[count].exp = n1[i].exp;
            n[count].coe = n1[i].coe;
            count++;
        }
    } else if (j < poly2) {
        for (; j < poly2; j++) {
            n[count].exp = n2[j].exp;
            n[count].coe = n2[j].coe;
            count++;
        }
    }

    printf("%d", count);
    for (i = 0; i < count; i++) {
        printf(" %d %.1f", n[i].exp, n[i].coe);
    }
    printf("\n");
}

/*!!!!!注意和可能为0!!!!!*/