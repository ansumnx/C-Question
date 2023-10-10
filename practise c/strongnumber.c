#include <stdio.h>

int main() {
    int num,temp, result = 0, i, j, factorial;

    printf("Enter an integer: ");
    scanf("%d", &num);


   while (num > 0) {
        temp = num % 10;

        factorial = 1;
        for (j = 1; j <=temp; j++) {
            factorial=factorial*j;
        }

        result=result+ factorial;

        num=num/10;
    }

    if (result == num) {
        printf("%d is a strong number.", num);
    } else {
        printf("%d is not a strong number.", num);
    }

    return 0;
}

