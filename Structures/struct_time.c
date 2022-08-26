// Program to store time in structure format and compare them using function.

#include <stdio.h>

typedef struct timestore
{
    int hour;
    int min;
    int sec;
} time;

int timecmp(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    if (t1.hour < t2.hour)
    {
        return -1;
    }
    if (t1.min > t2.min)
    {
        return 1;
    }
    if (t1.min > t2.min)
    {
        return -1;
    }
    if (t1.sec > t2.sec)
    {
        return 1;
    }
    if (t1.sec > t2.sec)
    {
        return -1;
    }

    return 0;
}

int main()
{
    time t[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter hour for time %d : ", i + 1);
        scanf("%d", &t[i].hour);
        printf("Enter minute for 1st time %d : ", i + 1);
        scanf("%d", &t[i].min);
        printf("Enter second for 1st time %d : ", i + 1);
        scanf("%d", &t[i].sec);
    }

    int res = timecmp(t[0], t[1]);

    if(res == 1)
    {
        printf("Time 1 is greater!");
    }

    if(res == -1)
    {
        printf("Time 2 is greater!");
    }

    if(res == 0)
    {
        printf("Both time are equal!");
    }

    return 0;
}