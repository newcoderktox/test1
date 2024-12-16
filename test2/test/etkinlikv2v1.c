#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    int size;
    printf("Maksimum karakter sayısını girin: ");
    scanf("%d", &size);

    char *string = (char *)malloc((size + 1) * sizeof(char)); // Dinamik string

    if (string == NULL) {
        printf("Bellek tahsisi başarısız.\n");
        return 1;
    }

    printf("Bir metin girin: ");
    scanf(" "); // Önceki girdi hatasını temizlemek için
    fgets(string, size + 1, stdin);

    // String'i ters çevir
    reverseString(string);
    printf("Ters çevrilmiş metin: %s\n", string);

    free(string); // Belleği serbest bırakma
    return 0;
}