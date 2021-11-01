#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ingridient[]={1,3,4,5,7,8,9,45,11,65,2,6};
    int num,i,p,c=0;
    int n=sizeof(ingridient)/sizeof(ingridient[0]);
    printf("Enter a value :\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(ingridient[i]==num)
        {
            p=i;
            printf("index of ingridient is %d",p);
            c=1;
            break;
        }
        else
        {
            c=0;
        }
        if(c==0)
        {
           // printf("Number is not in Array: \n");
        }
    }
}