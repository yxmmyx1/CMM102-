
#include <stdio.h>

int main() {
    int score;
    printf("กรอกคะเเนน : ");
    scanf("%d",&score);

    if(score>=80 && score<=100){
        printf("เกรด A");
    }
    else if(score>=75 && score<=79){
        printf("เกรด B+");
    }
    else if(score>=70 && score<=74){
        printf("เกรด B");
    }
    else if(score>=65 && score<=69){
        printf("เกรด C+");
    }
    else if(score>=60 && score<=74){
        printf("เกรด C");
    }
    else if(score>=55 && score<=59){
        printf("เกรด D+");
    }
    else if(score>=50 && score<=54){
        printf("เกรด D");
    }
    else if(score>=0 && score<=49){
        printf("เกรด F");
    }
    else{
        printf("คะเเนนไม่ถูกต้อง");
    }
  
    return 0;
}