#include<stdio.h>
#include <stdbool.h>

bool isprime(int a){
    for(int i=2;i * i <=a;i++){
        if(a%i == 0)
            return false;
    }
    return true;
}

int main(){
    //题目理解错了：请输出PM到PN的所有素数，M，N是素数位数。
    int M,N,count = 0;
    scanf("%d %d",&M,&N);
   // printf("%d %d",M,N);
    for(int i = M+1; i< N;i++){
        if(isprime(i)){
            printf("%d ",i);
            count = count + 1;
            if(count == 10){
                printf("\n");
                count = 0;
            }
        }
    }
}