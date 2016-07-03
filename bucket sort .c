#include <stdio.h>
#include <stdlib.h>
int main()
  {
    int a[10][100],temp;
    int i,j,rem,b[100],ele,count=0,n,c;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        count=i+1;
        while(count>0)
        {
        ele=b[i];
        rem=ele%10;
        ele=ele/10;
        count--;
        }
        j=1;
         while(a[rem][j]!=0 && a[rem][j-1]==0)
            j++;
         if(b[i]>a[rem][j-1])
         a[rem][j]=b[i];
         else
            {
                temp=a[rem][j-1];
                a[rem][j-1]=b[i];
                b[i]=a[rem][j];
            }
        }
        for(i=0;i<n;i++)
        {
            j=0;
            c=0;
            while(a[i][j]!=0)
            {
                b[c]=a[i][j];
                c++;
                j++;
            }
               printf("%d\n",b[i]);
        }
        return 0;
        getch();
    }
