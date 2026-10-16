
#include <stdio.h>
#include <string.h>

int main() {
    char username[50],password[50];
    printf("Username : ");
    scanf("%s",&username);
    printf("Password : ");
    scanf("%s",&password);

    if(strcmp(username,"admin") ==0 && strcmp(password, "12345") ==0) {
        printf("เข้าสู่ระบบสำเร็จ\n");
    }
    else if(strcmp(username,"admin") ==0 || strcmp(password,"12345") ==0) {
        printf("ชื่อผู้ใช้หรือรหัสผ่านไม่ถูกต้อง\n");
    }
    else{
        printf("ชื่อผู้ใช้เเละรหัสผ่านไม่ถูกต้อง");
    }
    
    return 0;
}