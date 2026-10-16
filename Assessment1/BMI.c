
#include <stdio.h>

int main() {

   float weight, height,bmi;
   printf("น้ำหนัก (kg): ");
   scanf("%f",&weight);
   printf("ส่วนสูง (m): ");
   scanf("%f",&height);
   
   if(height>=3){
       height = height/100;
   }
    
   bmi = weight/(height * height);
   printf("--------------------\n");
   printf("BMI ของคุณคือ : %.2f\n",bmi);
   printf("--------เสร็จสิ้น--------");
  
    return 0;
}