#include <stdio.h>
#include <math.h>

int main() {

//    printf("Hello, World!\n");

//pertemuan 2
//int bilangan1 = 0;
//bilangan1 = (3+4)*(5-3)+ ++bilangan1 * --bilangan1;
//    printf("Absolute bilangan: %d\n", bilangan1);
//
//int bilangan2 = 5;
//bilangan2 = bilangan2 + bilangan2 +-bilangan2;
//    printf("Absolute bilangan: %d\n", bilangan2);
//
//int bilangan3 = 100;
//printf("Absolute bilangan: %o\n", bilangan3); //%o, %x, %e
//
//float bilangan4 = 100;
//printf("Absolute bilangan: %o\n", bilangan4); //%o, %x, %e
//
//float bilangan5 = 100.5000;
//printf("Absolute bilangan: %8.2f\n", bilangan5); //%o, %x, %e


//    printf("Nama Saya Rengga Ferdiansa%d\n");
//   int asil = 0;
//    asil = 1024 + 4096;
//    printf("jumlah angka %d\n", asil );
//    //soal no 3
//    int angka1 = 10;
//    int angka2 = 10;
//    int hasil = angka1 + angka2;
//    printf("hasilnya adalah %d\n", hasil );
//
//    //soal no 4
//    float pecahan = 10.5;
//    int pecahan2 = 50;
//    float hasil2 = pecahan + pecahan2;
//    printf("hasilnya adalah %d\n",hasil2);
//
//    //soal no 5
//    float bilangan = 10.5;
//    printf("nilai bilangan fload %d\n", bilangan);
//
//    //soal no 6
//    int angka;
//    char karakter;
//    printf("Masukkan angka: ");
//    scanf("%s", &angka);
//    printf("Masukkan char: ");
//    scanf(" %c", &karakter);
//    printf("memasukkan angka: %d\n", angka);
//    printf("memasukkan karakter: %c\n", karakter);


    //C. PERCOBAAN

    //2.
    printf("In C, lowercase letters are significant.");
    printf("main is where program execution begins.");
    printf("Opening and closing braces enclose program statements in a\n"
           "routine.");
    printf("All program statements must be terminated by a semicolon.");

    //3.
    printf ("Testing...");
    printf ("....1");
    printf ("...2");
    printf ("..3");
    printf ("\n");
    //output : Testing.......1...2..3

    //4
//    int number1 = 87;
//    int number2 = 15;
//    int jumlah = number1 - number2;
//    printf("Hasil dari pengurangan %d dan %d adalah %d\n", number1, number2, jumlah);
    //output : Hasil dari pengurangan 87 dan 15 adalah 72

    //5
    //kode yang salah
//        int main (Void)
//     (
    //    INT sum;
    //    /* COMPUTE RESULT
    //    sum = 25 + 37 - 19
    //    /* DISPLAY RESULTS //
    //    printf ("The answer is %i\n" sum);
//    }

    //kode yang sudah diperbaiki
//    int sum;
//    sum = 25 + 37 - 19;
//    printf("The answer is %d\n", sum);

    //output
    //The answer is 43

    //kesalahan
    //Void = void
    //INT = int
    //sum = 25 + 37 - 19 = sum = 25 + 37 - 19;
    //("The answer is %i\n" sum); = ("The answer is %d\n", sum);

    //6
    int answer, result;
    answer = 100;
    result = answer - 10;
    printf ("The result is %i\n", result + 5);
    //output : 95


    //D. LAPORAN RESMI
        //a
    int jawab, hasil;
    jawab = 100;
    hasil = jawab - 10;
    printf("Jawabannya adalah %d\n", hasil + 6);
    //Jawabannya adalah 96

        //b
    int value1, value2, sum;
    value1 = 35;
    value2 = 18;
    sum = value1 + value2;
    printf("The sum of %d and %d is %d\n", value1,value2,sum);
    //output: The sum of 35 and 18 is 53

        //c
        //kode yang salah
//    INT jumlah;
//    JUMLAH= 25 + 37 - 19;
//
//    printf("Berapa hasil perhitungan 25 + 37 - 19 ?\n");
//    printf("Jawabannya adalah %d\n" jumlah);

    //kode yang benar
//    int jumlah;
//    jumlah = 25 + 37 - 19;
//
//    printf("Berapa hasil perhitungan 25 + 37 - 19 ?\n");
//    printf("Jawabannya adalah %d\n", jumlah);
    //output
    //Berapa hasil perhitungan 25 + 37 - 19 ?
    //Jawabannya adalah 43

    //kesalahan
    //INT = int
    //JUMLAH = jumlah
    //menambahkan , setelah %d

        //d
    double angka1, angka2;
    double jumlah, rata_rata, kuadrat1, kuadrat2;

    printf("angka pertama: ");
    scanf("%lf", &angka1);

    printf("angka kedua: ");
    scanf("%lf", &angka2);

    jumlah = angka1 + angka2;
    rata_rata = jumlah / 2;
    kuadrat1 = (angka1 * angka1);
    kuadrat2 = (angka2 * angka2);

    printf("jumlah: %.2lf\n", jumlah);
    printf("rata-rata: %.2lf\n", rata_rata);
    printf("kuadrat angka pertama: %.2lf\n", kuadrat1);
    printf("kuadrat angka kedua: %.2lf\n", kuadrat2);

        //e
    //program yang salah
//    float a, b, c;
//    a = 3;
//    b = 4.0;
//    c = a * a + b * b
//    printf("c * c = %d", c);

    //program yang sudah diperbaiki
    float a, b, c;
    a = 3;
    b = 4.0;
    c = a * a + b * b;
    printf("c * c = %f", c);
    //output : c * c = 25.000000

    //kesalahan
    //#include <stdio.h> = #include <Studio.h>
    //main = int main
    //c = a * a + b * b menjadi c = a * a + b * b;
    //menambahkan retrun 0; di akhir

    return 0;
}
