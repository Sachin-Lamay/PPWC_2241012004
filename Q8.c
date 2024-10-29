#include<stdio.h>
int main(){
    int x;
    int zero_count,minus_sum,plus_sum;

    printf("Enter value of x:");
    scanf("%d",&x);

    if(x==0){
        zero_count+=1;
    }else if(x<0){
        minus_sum+=x;
    }else{
        plus_sum+=x;
    }
    printf("Zero Count : %d\n",zero_count);
    printf("Minus Sum : %d\n",minus_sum);
    printf("Plus Sum :%d\n",plus_sum);
    
    return 0;
    }
