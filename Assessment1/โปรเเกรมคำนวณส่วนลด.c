
#include <stdio.h>

int main() {

   float price, dismount;
   printf("กรอกราคาสินค้า : ");
   scanf("%f", &price);
   printf("เปอร์เซ็นต์ส่วนลด : ");
   scanf("%f", &dismount);
    
   printf("----------------------------\n");
   
   float calculate = price * (dismount/100);
   float totalPrice = price - calculate;
    
   printf("ได้รับส่วนลด = %2.f บาท\n",calculate);
   printf("ราคาสินค้าหักส่วนลด = %2.f บาท\n",totalPrice);
   
   printf("---------คำนวณเสร็จสิ้น---------");
   return 0;
}