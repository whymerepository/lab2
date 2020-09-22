#include <stdio.h>

int main()
{
    int x, y, a, b, length = 0;

    printf("Fill blanks in _x + _ = _: ");
    scanf_s("%d%d%d", &a, &b, &y);

    x = (y - b) / a;
    do
    {
        x /= 10;
        length++;
    } while (x >= 10);

    printf("%d", (y-b)/a);
    for (int i = 0; i < 15 - length; i++)
        printf("*");

    return 0;
}