#include <stdio.h>

int main()
{
    char a[50],r[50];
    int i,j,b=0,e;
    printf("Enter the words : ");
    fgets(a,50,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='\0')
        {
            e=i-1;
            for(j=b;j<i;j++)
            {
                r[j]=a[e];
                e--;
            }
            r[j]='\0';
            b=j+1;
        }
        if(a[i+1]=='\0')
        {
            e=i;
            for(j=b;j<i+1;j++)
            {
                r[j]=a[e];
                e--;
            }
            r[j]='\0';
            break;
        }
    }
        printf("The Reverse order of the words :\n%s",r);
        return 0;

}
