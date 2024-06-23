#include <iostream>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%dx©÷+%dx+%d=0\n", a, b, c);
    printf("x=-%d¡¾sqrt(%d©÷-4*%d*%d)/2*%d\n", b, b, a, c, a);
    printf("x=-%d¡¾sqrt(%d©÷-%d)/%d", b, b, a * c * 4, a * 2);

    return 0;
}