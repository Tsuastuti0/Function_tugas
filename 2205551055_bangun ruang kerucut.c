#include <stdio.h>
#define PI 3.14

float hit_volume(float jari2, float tinggi);
float hit_luas(float jari2, float tinggi);

int main (){
	
	float jari2_kerucut, tinggi_kerucut, volume, luas;
	
	printf("Menghitung volume kerucut \n");
	printf("Masukkan jari_jari kerucut : ");
	scanf("%f", &jari2_kerucut);
	
	printf("Masukkan tinggi kerucut : ");
	scanf("%f", &tinggi_kerucut);
	
	volume = hit_volume(jari2_kerucut, tinggi_kerucut);
	printf("Maka Volume kerucut adalah %f\n", volume);
	
	luas = hit_luas(jari2_kerucut, tinggi_kerucut);
	printf("Maka luas permukaan kerucut adalah %f", luas);
}

float hit_volume(float jari2, float tinggi){
    float volume;
    volume = (1.00/3.00) * PI * jari2 * tinggi;
    return volume;
}

float hit_luas(float jari2, float tinggi){
    float luas;
    luas = (PI * (jari2 + jari2 + tinggi));
    return luas;
}




