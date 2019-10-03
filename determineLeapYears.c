/**
 * Author : Maulidan Nashuha
 * Date : 3 Oktober 2019
 * IG & Github : @maulidandev
 */

#include <stdio.h>

int checkLeabYear(int *);

int main(int argc, char const *argv[])
{
    int n, year;

    printf("Masukkan banyaknya tahun (n) : ");
    scanf(" %d", &n);

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Masukkan tahun ke-%d : ", (i+1));
            scanf(" %d", &year);

            if (year < 1000 || year >= 10000)
                printf("Tahun haruslah 4 digit angka.\n\n");
            
        } while (year < 1000 || year >= 10000);
        // lakukan selama bukan 4 digit angka
        
        // cek tahun kabisat
        if (checkLeabYear(&year))
            printf("Tahun %d adalah TAHUN KABISAT\n\n", year);
        else
            printf("Tahun %d adalah BUKAN TAHUN KABISAT\n\n", year);
    }
    
    return 0;
}

/**
 * cek apakah tahun kabisat
 * 
 * return 1 jika tahun kabisat
 * return 0 jika bukan tahun kabisat
 */
int checkLeabYear(int *year){
    if (*year % 400 == 0){
        // jika habis dibagi 400
        return 1;
    }else{
        if(*year % 100 == 0){
            // jika tidak habis dibagi 400 dan habis dibagi 100
            return 0; 
        }else{
            if(*year % 4 == 0){
                // jika tidak habis dibagi 400, tidak habis dibagi 100, dan habis dibagi 4
                return 1;
            }else{
                // jika tidak habis dibagi 400, tidak habis dibagi 100, dan tidak habis dibagi 4
                return 0;
            }
        }
    }
}