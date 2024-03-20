#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Mở file input.txt để đọc
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Nguyen Van Son.txt\n");
        exit(1);
    }

    // Đọc một dòng từ file và lưu vào biến name
    char name[100];
    fgets(name, 100, fp);

    // Đóng file
    fclose(fp);

    // In thông tin ra màn hình
    printf("Tên của bạn là: %s\n", name);

    return 0;
}
