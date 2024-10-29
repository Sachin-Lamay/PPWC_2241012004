#include<stdio.h>
int main(){
    int item,product=1;
    printf("Enter item value :");
    scanf("%d",&item);

    if(item!=0){
        product*=item;
    }
    printf("Product: %d",product);
    return 0;
}