#include <stdio.h>
int main() {
    // Khai bao hang so PI
    const float PI = 3.14;
    // Khai b�o v� g�n gi� tri b�n k�nh
    float bankinh = 5.0; 
	// ban kinh hinh tron 
    // T�nh chu vi v� dien tich hinh tron 
    float chuvi = 2 * PI * bankinh;          
	 // Chu vi = 2 * PI * r
    float dientich = PI * bankinh * bankinh; 
	 // Dien tich = PI * r^2 ( R binh phuong ) 
    // hien thi ket qua 
    printf("ban kinh hinh tron: %.2f\n", bankinh);
    printf("chu vi hinh tron: %.2f\n", chuvi);
    printf("dien tich hinh tron: %.2f\n", dientich);
}

