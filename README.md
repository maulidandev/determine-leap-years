# Determine Leap Years
Aplikasi sederhana menentukan tahun kabisat dari N tahun.

Program akan meminta terlebih dahulu inputan banyaknya tahun (N) dan kemudian meminta inputan tahun sebanyak N dari pengguna. Dilakukan validasi inputan tahun haruslah 4 digit angka dan program akan menampilkan pesan kesalahan hingga pengguna memasukkan tahun yang tepat. Diketahui algoritma untuk menghitung tahun kabisat adalah sebagai berikut:
1. Jika tahun habis dibagi 400, maka tahun tersebut adalah **tahun kabisat**.
2. Jika tahun tidak habis dibagi 400 tetapi habis dibagi 100, maka tahun tersebut **bukan tahun kabisat**.
3. Jika tahun tidak habis dibagi 400 dan tidak habis dibagi 100, tetapi habis dibagi 4, maka tahun tersebut adalah **tahun kabisat**.
4. Jika tahun tidak habis dibagi 400, tidak habis dibagi 100, dan tidak habis dibagi 4, maka tahun tersebut **bukan tahun kabisat**.

Contoh masukkan (input) dan (output) dari program ini adalah sebagai berikut:
```
Masukkan banyaknya tahun (n) : 3
Masukkan tahun ke-1 : 2000
Tahun 2000 adalah TAHUN KABISAT

Masukkan tahun ke-2 : 1994
Tahun 1994 adalah BUKAN TAHUN KABISAT

Masukkan tahun ke-3 : 1986
Tahun 1986 adalah BUKAN TAHUN KABISAT
```

## How To Run
File Program : dermineLeapYears.c </br>
Compile : gcc -o dermineLeapYears dermineLeapYears.c </br>
Run : ./dermineLeapYears 
