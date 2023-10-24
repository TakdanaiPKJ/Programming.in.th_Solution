#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int n = a+b+c;
    if (n >= 80 && n <= 100)
        printf("A");
    else if (n >=75 && n <=79 )
        printf("B+");
    else if (n >=70 && n <=74)
        printf("B");
    else if (n >=65 && n <=69)
        printf("C+");
    else if (n >=60 && n <=64)
        printf("C");
    else if (n >=55 && n <= 59)
        printf("D+");
    else if (n >=50 && n <= 54)
        printf("D");
    else if (n >= 0 && n <=49)
        printf("F");
    return 0;
}
