#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

// H�m kiem tra so c� phai l� d�y kh�ng giam hay kh�ng
int isNonDecreasing(int number) {
    int prevDigit = 10; // Gi� tri bat dau cho ph�p l� 10 (chi so truco tat ca c�c chi so)
    while (number > 0) {
        int digit = number % 10;
        if (digit > prevDigit) {
            return 0; // Neu c� chi so nho hon chi so truoc d�, tra ve 0
        }
        prevDigit = digital;
        number /= 10;
    }
    
    return 1; // Neu tat ca chi so dau kh�ng giam, tra ve 1
}

int main() {
    char line[MAX_SIZE];
    int numbers[MAX_SIZE], count = 0;
    
    // �oc tat ca c�c so tu dau v�o
    printf("Nhap d�y so (k?t th�c b?ng EOF):\n");
    while (fgets(line, sizeof(line), stdin)) {
        char *token = strtok(line, " \n");
        while (token != NULL) {
            int num = 0;
            // Chuy?n d?i chu?i token th�nh s? nguy�n
            for (int i = 0; token[i] != '\0'; i++) {
                if (isdigit(token[i])) {
                    num = num * 10 + (token[i] - '0');
                }
            }
            numbers[count++] = num;
            token = strtok(NULL, " \n");
        }
    }
    
    // Mang d? d?m so lan xuat hien cua c�c so kh�ng giam
    int freq[MAX_SIZE] = {0};
    
    // Duyet qua tong so trong mang numbers
    for (int i = 0; i < count; i++) {
        if (isNonDecreasing(numbers[i])) {
            freq[numbers[i]]++;
        }
    }
    
    // In ra c�c so kh�ng giam v� so lon xuat hien
    printf("C�c so kh�ng giam v� so lon xuat hien:\n");
    for (int i = 0; i < count; i++) {
        if (isNonDecreasing(numbers[i]) && freq[numbers[i]] > 0) {
            printf("S? %d xuat hien %d l?n\n", numbers[i], freq[numbers[i]]);
            freq[numbers[i]] = 0; // �am bao chi in m?t lon
        }
    }

    return 0;
}
