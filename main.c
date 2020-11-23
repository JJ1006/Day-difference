#include<stdio.h>
#include<conio.h>

int main()
{
    int days,months,years,a,b,c,i,d=0,f,g,h,e;
    printf("Please enter the day of the month : \n");
    scanf("%d",&days);
    printf("\nPlease enter the month of the year : \n");
    scanf("%d",&months);
    printf("\nPlease enter the year : \n");
    scanf("%d",&years);

    a = years - 1900;
    b = months - 01;
    c = days - 01;
     g = a * 365;
    i=a/4;
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
       for(int i = b-1; i>=0; i--)
        {
          d+=arr[i];
       }
    e = d + c + i + g;
    printf("\nThe difference of days is : %d\n",e);

    h=(int)e%7;
    if(a%4==0){
    if(b==0 || b==1)
    {
    h=h-1;
    }
}
    if(h==0)
    {
        printf("\nThe day is Monday");
    }
       if(h==1)
    {
        printf("\nThe day is Tuesday");
    }
       if(h==2)
    {
        printf("\nThe day is Wednesday");
    }
       if(h==3)
    {
        printf("\nThe day is Thursday");
    }
       if(h==4)
    {
        printf("\nThe day is Friday");
    }
       if(h==5)
    {
        printf("\nThe day is Saturday");
    }
       if(h==6)
    {
        printf("\nThe day is Sunday");
    }
}
