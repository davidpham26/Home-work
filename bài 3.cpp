#include <stdio.h>

int main() {
    // Khai bao khoi tao hai bien so nguyen 
    int a = 10;
    //bien thu nhat 
    int b = 5;
    //bien thu hai 

    // Tinh tong , hieu , tich , va thuong 
    int tong = a + b;     // Tong 
    int hieu = a - b;     // Hieu 
    int tich = a * b;     // T�ch
    float thuong = (float)a / b;
	// Thuong dung lenh float de ra ket qua chinh xac 

    // hien thi ket qua 
    printf("Tong cua %d v� %d l�: %d\n", a, b, tong);
    printf("Hieu cua %d v� %d l�: %d\n", a, b, hieu);
    printf("T�ch cua %d v� %d l�: %d\n", a, b, tich);
    printf("Thuong cua %d v� %d l�: %.2f\n", a, b, thuong);

    return 0;
}
