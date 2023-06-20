#include <stdio.h>

int main(){


    int n;
    int a[50] = {0};
    int b[50] = {0};
    int input,temp;
    int sum=0;
    scanf("%d",&n); // 입력값 받기
    for (int i= 0; i< n; i++){
        scanf("%d",&input);
        a[i] = input;
    }
    for (int i= 0; i< n; i++){
        scanf("%d",&input);
        b[i] = input;

    }

     for (int i= 0; i< n-1; i++)
     {

        for (int j =0; j < n-1;j++)
        {
            if (a[j]< a[j+1])
            {
                temp = a[j+1];
                a[j+1] =a[j];
                a[j] = temp;

            } 
        }
        
    }

    for (int i= 0; i< n-1; i++)
     {

        for (int j =0; j < n-1;j++)
        {
            if (b[j+1]< b[j])
            {
                temp = b[j+1];
                b[j+1] =b[j];
                b[j] = temp;

            }
        }
        
    
    }
    for (int i =0; i< n; i++){
        //printf("%d %d \n ", a[i],b[i]);
        sum += a[i]* b[i];
    }
    printf("%d", sum);
}