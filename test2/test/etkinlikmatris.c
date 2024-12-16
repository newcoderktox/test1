#include <stdio.h>
#include <stdlib.h>

// Matris alma fonksiyonu
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrisin elemanlarini girin:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Matrisi yazdırma fonksiyonu
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Matris elemanlarını sıralama (Bubble Sort)
void bubbleSortMatrix(int rows, int cols, int matrix[rows][cols]) {
    int size = rows * cols;
    int temp[size];
    int index = 0;

    // Matrisi tek boyutlu diziye aktarma
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[index] = matrix[i][j];
	    index++;
        }
    }

    // Bubble Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    // Tek boyutlu diziyi matrise geri aktarma
    index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = temp[index++];
        }
    }
}

// Satır ve sütun toplamlarını hesaplama
void calculateRowColumnSums(int rows, int cols, int matrix[rows][cols]) {
    printf("— Toplamlar —\n");
    printf("Satır Toplamları: ");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("%d ", rowSum);
    }
    printf("\nSütun Toplamları: ");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("%d ", colSum);
    }
    printf("\n");
}

// Matris toplama ve çıkarma işlemleri
void addOrSubtractMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], char operation) {
    int result[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (operation == '+') {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            } else if (operation == '-') {
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
    }
    printf(operation == '+' ? "— Toplama —\n" : "— Çıkarma —\n");
    printMatrix(rows, cols, result);
}

int main() {
    int rows, cols;
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &rows);
    printf("Matrisin sutun sayisini girin: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    inputMatrix(rows, cols, matrix);

    int choice;
    do {
        printf("\nYapmak istediginiz islemi secin:\n");
        printf("1- Matrisi Bubble Sort ile sıralama\n");
        printf("2- Matriste Satır ve Sütun Toplamlarının Sıralanması\n");
        printf("3- Matrisi ikinci bir matris ile toplama veya çıkarma\n");
        printf("4- Cikis\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bubbleSortMatrix(rows, cols, matrix);
                printf("— Sıralanmış Matris —\n");
                printMatrix(rows, cols, matrix);
                break;

            case 2:
                calculateRowColumnSums(rows, cols, matrix);
                break;

            case 3: {
                int matrix2[rows][cols];
                printf("Ikinci matrisi girin:\n");
                inputMatrix(rows, cols, matrix2);
                char operation;
                printf("Toplama icin '+', cikarma icin '-' girin: ");
                scanf(" %c", &operation);
                addOrSubtractMatrices(rows, cols, matrix, matrix2, operation);
                break;
            }

            case 4:
                printf("Cikis yapiliyor...\n");
                break;

            default:
                printf("Gecersiz secim!\n");
        }
    } while (choice != 4);

    return 0;
}