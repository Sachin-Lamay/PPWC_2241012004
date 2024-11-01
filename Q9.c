#include<stdio.h>
int main(){
    int num,digit,result=0,place=1;
    printf("Enter a number:");
    scanf("%d",num);

    while(num>0){
        digit=num%10;
        if(digit==0){
            digit=1;
        }else if(digit==1){
            digit=0;
        }
        result+=digit*place;
        place*=10;
        num/=10;
    }
    printf("Number after replace: %d\n",result);
    return 0;
        }
        
        
    
