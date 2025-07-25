# include <stdio.h>

int main() {
    int a, b, c, d;

    printf("첫 번째 계산할 값을 입력하세요 ==>\n");
    scanf("%d", &a);
    printf("두 번째 계산할 값을 입력하세요 ==>\n");
    scanf("%d", &b);
    printf("세 번째 계산할 값을 입력하세요 ==>\n");
    scanf("%d", &c);
    printf("네 번째 계산할 값을 입력하세요 ==>\n");
    scanf("%d", &d);2

    printf("%d + %d + %d + %d = %d\n", a, b, c, d, a + b + c + d);

    return 0;
}