#include <stdio.h>

float luas_perpanjang(float p, float l)
{
	float luas; //deklarasiin dulu baru ke perhitungan
    luas = p*l;
    return luas;
}

float kll_perpanjang(float p, float l)
{
	float kll;
    kll= 2*(p+l);
	return kll;
}

int main()
{
	float p,l;
	printf("Masukkan panjang : ");
	scanf("%f", &p);
	printf("Masukkan lebar : ");
	scanf("%f", &l);
	printf("Luas persegipanjang : %.2f\n", luas_perpanjang(p, l));
	printf("Kll persegipanjang : %.2f\n", kll_perpanjang(p, l));
	return 0;
}

