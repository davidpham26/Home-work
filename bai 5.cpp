#include <stdio.h>
int main() {
    // Khoi tao hai bien chieu dai và chieu rong
    int chieudai = 30; // Chieu dài hinh chu nhat
    int chieurong = 15; // Chieu rong hinh chu nhat
    // Tính chu vi và dien tích hinh chu nhat
    int chuvi = 2 * (chieudai + chieurong);
	// Chu vi = 2 * (dai + rong)
    int dientich = chieudai * chieurong;       
	// Dien tích = dai * rong
    // Hien thi ket qua
    printf("Chieu dai hinh chu nhat: %d\n", chieudai);
    printf("Chieu rong hinh chu nhat: %d\n", chieurong);
    printf("Chu vi hinh chu nhat: %d\n", chuvi);
    printf("Dien tích hinh chu nhat: %d\n", dientich);
}

