#include <stdio.h>
int main() {
    // Khoi tao hai bien chieu dai v� chieu rong
    int chieudai = 30; // Chieu d�i hinh chu nhat
    int chieurong = 15; // Chieu rong hinh chu nhat
    // T�nh chu vi v� dien t�ch hinh chu nhat
    int chuvi = 2 * (chieudai + chieurong);
	// Chu vi = 2 * (dai + rong)
    int dientich = chieudai * chieurong;       
	// Dien t�ch = dai * rong
    // Hien thi ket qua
    printf("Chieu dai hinh chu nhat: %d\n", chieudai);
    printf("Chieu rong hinh chu nhat: %d\n", chieurong);
    printf("Chu vi hinh chu nhat: %d\n", chuvi);
    printf("Dien t�ch hinh chu nhat: %d\n", dientich);
}

