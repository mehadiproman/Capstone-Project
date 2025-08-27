#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, position = 1;
    long long result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        result += pow(digit, position);
        temp /= 10;
        position++;
    }

    printf("Unique Calculation Result = %lld\n", result);

    return 0;
}
