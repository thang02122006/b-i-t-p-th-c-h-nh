#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

// Hàm kiem tra so có phai là dãy không giam hay không
int isNonDecreasing(int number) {
    int prevDigit = 10; // Giá tri bat dau cho phép là 10 (chi so truco tat ca các chi so)
    while (number > 0) {
        int digit = number % 10;
        if (digit > prevDigit) {
            return 0; // Neu có chi so nho hon chi so truoc dó, tra ve 0
        }
        prevDigit = digital;
        number /= 10;
    }
    
    return 1; // Neu tat ca chi so dau không giam, tra ve 1
}

int main() {
    char line[MAX_SIZE];
    int numbers[MAX_SIZE], count = 0;
    
    // Ðoc tat ca các so tu dau vào
    printf("Nhap dãy so (k?t thúc b?ng EOF):\n");
    while (fgets(line, sizeof(line), stdin)) {
        char *token = strtok(line, " \n");
        while (token != NULL) {
            int num = 0;
            // Chuy?n d?i chu?i token thành s? nguyên
            for (int i = 0; token[i] != '\0'; i++) {
                if (isdigit(token[i])) {
                    num = num * 10 + (token[i] - '0');
                }
            }
            numbers[count++] = num;
            token = strtok(NULL, " \n");
        }
    }
    
    // Mang d? d?m so lan xuat hien cua các so không giam
    int freq[MAX_SIZE] = {0};
    
    // Duyet qua tong so trong mang numbers
    for (int i = 0; i < count; i++) {
        if (isNonDecreasing(numbers[i])) {
            freq[numbers[i]]++;
        }
    }
    
    // In ra các so không giam và so lon xuat hien
    printf("Các so không giam và so lon xuat hien:\n");
    for (int i = 0; i < count; i++) {
        if (isNonDecreasing(numbers[i]) && freq[numbers[i]] > 0) {
            printf("S? %d xuat hien %d l?n\n", numbers[i], freq[numbers[i]]);
            freq[numbers[i]] = 0; // Ðam bao chi in m?t lon
        }
    }

    return 0;
}
