#include <stdio.h>
#include "toan.h"
int cong(int a, int b) {
	int tong = a + b;
	return tong;
}
int nhan(int a, int b) {
	int tich = 0;
		for (int i = 0; i < b; i++) {
			tich = cong(tich, a);
		}
	return tich;
}