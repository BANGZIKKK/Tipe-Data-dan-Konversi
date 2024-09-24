#include <stdio.h>

int main()
{
	int X;                                // bilangan bulat
	float Y;                              // bilangan pecahan
	printf("Masukan bilangan bulat :");   // Keterangan untuk X
	scanf("%d", &X);                      // Memasukan nilai X
	printf("Masukan bilangan pecahan :"); // Keterangan untuk Y
	scanf("%f", &Y);                      // Memasukan nilai nilai Y
	float Hasil = X + Y;                  // Penjumlah X dengan Y
	printf("Jumlah : %.1f\n",Hasil);      // Hasil penjumlah X dengan Y
	return 0;
}