#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//girilen degerin e tabanli üstel degeri geri döndürülür.Program, exp() fonksiyonu ile arg degisken degerinin e tabanli üstel degerini hesaplayarak ekrana yazar.

int main(int argc, const char * argv[])
{

	
	printf("********EXP FONKSIYONU********\n\n\n");
	

	
    /* gecici degiskenleri tanimlama */
    double sayi;
    double sonuc;

    /* exp`i istenen sayi kullanicidan istenir*/
    printf("lutfen bir deger giriniz:\n");
    scanf("%lf",&sayi);

    /* Girilen sayinin ustel fonskiyonunu hesaplayan fonskiyon*/
    sonuc = exp(sayi);

    /* Hesaplanan sonucu ekrana yazdir */
    printf("Girilen sayinin exp fonksiyonu  %f icin %f\n", sayi, sonuc);

    return 0;
}
