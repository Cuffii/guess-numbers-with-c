#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    int sayi, tahmin, deneme_sayisi = 0;

    // Rastgele bir sayı üret
    srand(time(NULL));
    sayi = rand() % 100 + 1;

    printf("1 ile 100 arasinda bir sayi tahmin edin: ");

    // Kullanıcının doğru sayıyı tahmin etmesini bekle

    while (1)
    {
        scanf("%d", &tahmin);

        if (tahmin == sayi)
        {
            if (deneme_sayisi < 3)
                printf("Tebrikler, dogru sayiyi %d. denemede buldunuz!\n", deneme_sayisi); else if (deneme_sayisi < 7)

                    printf("Ortalama ama guzel.. %d. denemede buldunuz!\n", deneme_sayisi);

                        else printf("Daha iyi olabilirdi.. %d. denemede buldunuz!\n", deneme_sayisi);

            sleep(5);
            break;
        }
        else
        {

            deneme_sayisi++;

            if (tahmin > sayi)
            {
                printf("Daha kucuk bir sayi girin: ");
            }
            else if (tahmin < sayi)
            {
                printf("Daha buyuk bir sayi girin: ");
            }
        }
    }
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int sayi, tahmin, deneme_sayisi = 0;

//     // Rastgele bir sayı üret
//     srand(time(NULL));
//     sayi = rand() % 100 + 1;

//     printf("1 ile 100 arasinda bir sayi tahmin edin: ");

//     // Kullanıcının doğru sayıyı tahmin etmesini bekle
//     do
//     {
//         scanf("%d", &tahmin);
//         deneme_sayisi++;

//         if (tahmin > sayi)
//         {
//             printf("Daha kucuk bir sayi girin: ");
//         }
//         else if (tahmin < sayi)
//         {
//             printf("Daha buyuk bir sayi girin: ");
//         }
//     } while (tahmin != sayi);

//     printf("Tebrikler, doğru sayıyı %d. denemede buldunuz!\n", deneme_sayisi);

//     return printf("Tebrikler, doğru sayıyı %d. denemede buldunuz!\n", deneme_sayisi);
// }
