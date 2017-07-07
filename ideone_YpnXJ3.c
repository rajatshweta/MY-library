#include <stdio.h>
 
int main()
{   
    long x,n,i;
    long a[1001]={0};
 
    scanf("%li",&n);
    for(i=0;i<n;i++)
    {
        scanf("%li",&x);
        a[x]++;
    }
    scanf("%li",&n);
    while(n--)
    {
        scanf("%li",&x);
        if(a[x]>0)
            printf("%li\n",a[x]);
        else
            printf("NOT PRESENT\n");
    }
    
    return 0;
}