#include <stdio.h>

void countFrequencies(int arr[], int size) {
    int visited[size]; // Elemanların kontrol edilip edilmediğini işaretlemek için
    for (int i = 0; i < size; i++) {
        visited[i] = 0; // Başlangıçta tüm elemanlar işaretlenmemiş durumda
    }

    printf("Elemanlar ve tekrar sayilari:\n");
    for (int i = 0; i < size; i++) {
        if (visited[i]) { // Eleman zaten kontrol edildiyse, atla
            continue;
        }

        int count = 1; // Kendi tekrarını say
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Kontrol edilen elemanı işaretle
            }
        }

        printf("%d -> %d kez\n", arr[i], count);
    }
}

int main() {
    int n;
    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &n);

    int arr[n];
    printf("Dizinin elemanlarini girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countFrequencies(arr, n);

    return 0;
}