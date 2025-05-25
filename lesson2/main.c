#include <stdio.h>
void xep_loai() {
	float diem = 0;
	printf("nhap diem: ");
	scanf_s("%f", &diem);
	while (diem > 10.0 || diem < 0.0) {
		printf("nhap lai diem: ");
		scanf_s("%f", &diem);
	}
	if (diem >= 8.0) printf("gioi");
	else if (diem >= 6.5 && diem < 8.0) printf("kha");
	else if (diem >= 5.0 && diem < 6.5) printf("trung binh");
	else printf("yeu");
}
void main(void) {
	xep_loai();
}

