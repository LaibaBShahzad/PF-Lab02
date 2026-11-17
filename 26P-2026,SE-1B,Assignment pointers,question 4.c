#include <stdio.h>

void convertTime(int totalSeconds, int *h, int *m, int *s);
void addSeconds(int *h, int *m, int *s, int extra);

int main()
{
    int totalSeconds, h, m, s, extra;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    convertTime(totalSeconds, &h, &m, &s);

    printf("Time: ");

    if (h < 10)
        printf("0%d:", h);
    else
        printf("%d:", h);

    if (m < 10)
        printf("0%d:", m);
    else
        printf("%d:", m);

    if (s < 10)
        printf("0%d\n", s);
    else
        printf("%d\n", s);

    printf("Enter seconds to add: ");
    scanf("%d", &extra);

    addSeconds(&h, &m, &s, extra);

    printf("New time: ");

    if (h < 10)
        printf("0%d:", h);
    else
        printf("%d:", h);

    if (m < 10)
        printf("0%d:", m);
    else
        printf("%d:", m);

    if (s < 10)
        printf("0%d\n", s);
    else
        printf("%d\n", s);

    return 0;
}

void convertTime(int totalSeconds, int *h, int *m, int *s)
{
    *h = totalSeconds / 3600;
    *m = (totalSeconds % 3600) / 60;
    *s = totalSeconds % 60;
}

void addSeconds(int *h, int *m, int *s, int extra)
{
    int totalSeconds;

    totalSeconds = (*h * 3600) + (*m * 60) + *s;

    totalSeconds = totalSeconds + extra;

    convertTime(totalSeconds, h, m, s);
}
