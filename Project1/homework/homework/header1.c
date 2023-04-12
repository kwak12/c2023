#include <stdio.h>

int FindLCM(int a, int b)
{
    int lcm;
    if (a > b)//a가 b보다 크면
    {
        //두 수를 교환
        int temp = a;
        a = b;
        b = temp;
    }
    for (lcm = b; ; lcm += b)
    {
        if (lcm % a == 0)
        {
            return lcm;
        }
    }
    return -1;
}

int FindGCD(int a, int b)
{
    int gcd;
    if (a > b)//a가 b보다 크면
    {
        //두 수를 교환
        int temp = a;
        a = b;
        b = temp;
    }
    for (gcd = a; ; gcd--)
    {
        if ((a % gcd == 0) && (b % gcd == 0))
        {
            return gcd;
        }
    }
    return -1;
}
int IsPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int FindLCM2(void)
{
    int lcm, a, b;
    scanf_s("%d %d", &a, &b);
    if (a > b)//a가 b보다 크면
    {
        //두 수를 교환
        int temp = a;
        a = b;
        b = temp;
    }
    for (lcm = b; ; lcm += b)
    {
        if (lcm % a == 0)
        {
            return lcm;
        }
    }
    return -1;
}
int FindGCD2(void)
{
    int gcd, a, b;
    scanf_s("%d %d", &a, &b);

    if (a > b)//a가 b보다 크면
    {
        //두 수를 교환
        int temp = a;
        a = b;
        b = temp;
    }
    for (gcd = a; ; gcd--)
    {
        if ((a % gcd == 0) && (b % gcd == 0))
        {
            return gcd;
        }
    }
    return -1;
}
int IsPrime2(void)
{
    int i, n;
    scanf_s("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
