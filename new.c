#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// int main()
// {
//     int num = 99;
//     int lik = 1101;
//     char str = 'z';
//     char soz = '@';
//     printf(" o'zgaruvchisining qiymati:  %d\n", num);
//     printf(" o'zgaruvchisining qiymati:  %d\n", lik);
//     printf(" o'zgaruvchisining qiymati:  %c\n", str);
//     printf(" o'zgaruvchisining qiymati:  %c\n", soz);
//     return 0;
// };

// char == belgi yoki harflar uchun == %c;
// int == butun son uchun ==  %d;
// float == kasr son uchun ==  %f;

// #include <stdio.h>

// int main()
// {
//     int num = 99;
//     int lik = 1101;
//     char str = 'z';
//     char soz = '@';
//     float son = 1.2;
//     float raqam = 15.3;
//     printf("num o'zgaruvchisining qiymati:  %d\n,lik o'zgaruvchisining qiymati:  %d\n; str o'zgaruvchisining qiymati:  %c\n; soz o'zgaruvchisining qiymati:  %c\n; son o'zgaruvchisining qiymati:  %f\n; raqam o'zgaruvchisining qiymati:  %f\n", num ,lik , str, soz, son, raqam);
//     return 0;
// };

// #include <stdio.h>

// int main(){
//     int num =  6;
//     float son = 4.33;
//     char str = 'login';
//     int sum = num + son;

//     printf("Num ning qiymati: %d\nsonning qiymati %.1f\n str ning qiymati %c\n\n", num, son, str);

//     printf("%d", sum);

// }

// #include <stdio.h>

// int main() {
//     int son1 = 5;
//     int son2 = 7;
//     char latter1 = 'f';
//     char latter2 = 'p';
//     float num1 = 3.89;
//     float num2 = 4.34;
//     printf("%d\n, %d\n, %c\n, %c\n, %f\n, %f\n",son1, son2, latter1, latter2,num1,num2 );
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char lenght = 'g';
//     printf("bu %c harfi\n", lenght);
// }

// #include <stdio.h>
// int main() {
//     printf("Men C ni o'rganmoqchiman\n");
// }

// //Ismingizni ekranga chiqaring.

// #include <stdio.h>

// int main() {
//     printf("Baxtiyor\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int son1 = 30;
//     int son2 = 20;
//     printf("Ikkala son yigindisi %d\n", son1 + son2);
// }

// #include <stdio.h>

// int main() {
//     int son1 = 50;
//     int son2 = 5;
//     printf("Umumiy savol javobi %d\n", (son1 / son2) + son2);
// };

// #include <stdio.h>

// int main() {
//     int num = 10;

//     if (num == 1)
//     {
//         printf("shart to'g'ri\n");
//     }
//     else if (num == 10)
//     {
//         printf("2-shart to'g'ri\n");
//     }
//     else
//     {
//         printf("shart noto'g'ri\n");
//     }

// };

// #include <stdio.h>
// int main()
// {
//     int num1;
//     int num2;

//     printf("1-sonni kiriting: ");
//     scanf("%d", &num1);
//     printf("2-sonni kiriting: ");
//     scanf("%d", &num2);

//     if (num1 > num2)
//     {
//         printf("%d katta son\n", num1);
//     }
//     else
//     {
//          printf("%d katta son\n", num2);
//     }
//     return 0;
// }

// 1- topshiriq

// #include <stdio.h>
// int main()
// {
//     int num1;

//     printf("sonni kiriting: ");
//     scanf("%d", &num1);

//     if (num1 > 0)
//     {
//         printf("%d musbat son\n", num1);
//     }
//     else
//     {
//          printf("%d manfiy son\n", num1);
//     }
//     return 0;
// }

// 2-topshiriq

// #include <stdio.h>
// int main()
// {
//     int num1;

//     printf("sonni kiriting: ");
//     scanf("%d", &num1);

//     if (num1 % 2 == 0)
//     {
//         printf("%d juft son\n", num1);
//     }
//     else
//     {
//          printf("%d toq son\n", num1);
//     }
//     return 0;
// }

// 3-topshiriq

// #include <stdio.h>
// int main()
// {
//     int num1;

//     printf("Talabaning balini kiriting: ");
//     scanf("%d", &num1);

//     if (num1 < 50)
//     {
//         printf("%d bu ball o'tish uchun yetarli emas\n", num1);
//     }
//     else if (num1 > 50)
//     {
//         printf("%d bu ball o'tish uchun yetarli\n", num1);
//     }
//     else if (num1 == 50)
//     {
//         printf("%d bu ball o'tish uchun yetarli\n", num1);
//     }
//     return 0;
// }

// 4-topshiriq

// #include <stdio.h>
// int main()
// {
//     int num1;
//     int num2;

//     printf("1-sonni kiriting: ");
//     scanf("%d", &num1);
//     printf("2-sonni kiriting: ");
//     scanf("%d", &num2);

//     if (num1 > num2)
//     {
//         printf("%d katta son\n", num1);
//     }
//     else
//     {
//          printf("%d katta son\n", num2);
//     }
//     return 0;
// }

// //5-topshiriq

// #include <stdio.h>
// int main()
// {
//     int num1;
//     int num2;
//     int num3;

//     printf("1-sonni kiriting: ");
//     scanf("%d", &num1);
//     printf("2-sonni kiriting: ");
//     scanf("%d", &num2);
//     printf("3-sonni kiriting: ");
//     scanf("%d", &num3);

//     if (num1 >= num2 && num1 >= num3)
//     {
//         printf("%d katta son\n", num1);
//     }
//     else if (num2 >= num1 && num2 >= num3)
//     {
//         printf("%d katta son\n", num2);
//     }
//     else if(num3 >= num1 && num3 >= num2)
//     {
//          printf("%d katta son\n", num3);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int son;
//     printf("Son kiriting: \n");
//     scanf("%d", &son);

//     if (son > 10)
//     {
//         printf("%d", son + 3);
//     }
//     else
//     {
//         printf("%d", son);
//     }

// }

// 6-topshiriq Berilgan son 3ga va 5ga bolinishini toping

// #include <stdio.h>

// int main() {
//     int son;
//     printf("Son kiriting: \n");
//     scanf("%d", &son);

//     if (son % 3 == 0 && son % 5 == 0)
//     {
//         printf("Kiritilgan son 3ga va 5ga bo'linadi!\n");
//     }
//     else if (son % 3 == 0)
//     {
//         printf("Kiritilgan son 3ga bo'linadi!\n");
//     }
//     else if(son % 5 == 0)
//     {
//         printf("Kiritilgan son 5ga bo'linadi!\n");
//     }

// }

// 7-topshiriq: Berilgan uchta son orasidan minimalni topish dasturini tuzing if-else yordamida.

// #include <stdio.h>

// int main() {
//     int son1;
//     int son2;
//     int son3;

//     // printf("1-sonni kiriting:");
//     // scanf("%d\n", &son1);
//     printf("1-sonni kiriting:");
//     scanf("%d", &son1);
//     printf("2-sonni kiriting:");
//     scanf("%d", &son2);
//     printf("3-sonni kiriting:");
//     scanf("%d", &son3);

//     if (son1 <= son2 && son1 <= son3)
//     {
//         printf("eng kichik son: %d\n", son1);
//     }
//     else if (son2 <= son1 && son2 <= son3)
//     {
//         printf("eng kichik son: %d\n", son2);
//     }
//     else if (son3 <= son1 && son3 <= son2)
//     {
//         printf("eng kichik son: %d\n", son3);
//     }

//     return 0;

// }

// #include <stdio.h>

// int main() {
//     int son1;
//     int son2;
//     int son3;

//     printf("1-sonni kiriting:");
//     scanf("%d", &son1);
//     printf("2-sonni kiriting:");
//     scanf("%d", &son2);
//     printf("3-sonni kiriting:");
//     scanf("%d", &son3);

//     int min = son1;

//     if (min > son2)
//     {
//         min = son2;
//     }
//     if (min > son3)
//     {
//         min = son3;
//     }

//     printf("eng kichik son: %d\n", min);

//     return 0;

// }

// 8- topshiriq Katta harf ustidagi belgi mavjudligini tekshirish uchun dastur yarating, kichik harf yoki raqam...

// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Biror nima kiriting: ");
//     scanf("%c", &ch);

//     if (ch >= 'A' && ch <= 'Z') {
//         printf("Bu katta harfli belgi \n");
//     }
//     else if (ch >= 'login' && ch <= 'z') {
//         printf("Bu kichik harfli belgi \n");
//     }
//     else if (ch >= '0' && ch <= '9') {
//         printf("bu son \n");
//     }
//     else {
//         printf("Noto'g'ri qiymat kiritdingiz?\n");
//     }

//     return 0;
// }

// 9-topshiriq shaxsning yoshiga qarab haydovchilik guvohnomasini olish huquqiga ega ekanligini tekshirish

// #include <stdio.h>

// int main() {
//     int num;

//     printf("Yoshingizni kiriting: ");
//     scanf("%d", &num);

//     if (num >= 18)
//     {
//         printf("Siz guvohnoma olish yoshidasiz\n");
//     }
//     else
//     {
//         printf("Siz guvohnoma olish uchun yoshsiz!\n");
//     }

// }

// 10-topshiriq: Belgining unli yoki undosh ekanligini tekshiradigan dastur tuzing if-else iborasidan foydalanish.

// #include <stdio.h>

// int main() {
//     char soz;

//     printf("Biror bir harf kiriting: ");
//     scanf("%c", &soz);

//     if (soz == 'login' || soz == 'e' || soz == 'i' || soz == 'o' || soz == 'u' || soz == 'o')
//     {
//         printf("Bu harf unli: %c\n", soz);
//     }
//     else
//     {
//         printf("Bu harf undosh: %c\n", soz);
//     }

// }

// Misol : Berilgan login sonini 3ga bo'lgandagi butun  qismini b o'zgaruvchiga joylang va b sonini konsolga chiqaring.

// #include <stdio.h>

// int main()
// {
//     int login;

//     printf("Biror bir son kiriting: ");
//     scanf("%d", &login);
//     int b = login / 3;
//     if (login / 3)
//     {
//         printf("%d \n", b);
//     };

//     return 0;
// }

// Misol : login soni berilgan. login sonini 3ga bo'lgandagi qoldig'ini kansolga chiqaring.

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Biror son kiriting: ");
//     scanf("%d", &num);

//     int jav = num % 3;

//     if (num % 3)
//     {
//         printf("3ga bolingandagi qiymat: %d\n", jav);
//     }

//     return 0;
// }

// Misol :  login soni berilgan. Berilgan son 5 ga bo'linadimi? Agar bo'linsa  konsolga true bo'lmasa false chiqaring.

// #include <stdio.h>

// int main()
// {
//     int login;

//     printf("Son kiriting: ");
//     scanf("%d", &login);

//     int javob = login % 5;

//     if (login % 5 == 0)
//     {
//         printf("Siz kiritgan son 5ga qoldiqsiz bo'linadi.\n");
//     }else {
//         printf("Siz kiritgan son 5ga qoldiq bilan bo'linadi.\n Qoldiq: %d\n", javob);
//     }

//     return 0;
// }

// Misol  Berilgan son 3 va 4 ga bo'linadimi? Agar bo'linsa konsolga 'true'  bo'lmasa falseni chiqaring.

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Son kiriting: ");
//     scanf("%d", &num);

//     if (num % 3 == 0 && num % 4 == 0)
//     {
//         printf("Bu son 3ga va 4ga bo'linadi\n");
//     }
//     else
//     {
//         printf("Bu son 3ga va 4ga bo'linmaydi\n");
//     }

//     return 0;
// }

// Misol Berilgan yill kabisa yili ekanligini aniqlang. Agar kabisa yili bo'lsa true  konsolga chiqsin.  Agar bo'linmasa false  konsolga chiqsin.   Kabisa yil deb 4 yilda birmarta keladigan yilga aytiladi. Shu yili kunlar soni 365 emas 366 ga teng bo'ladi. Bu yili fevral oyida 29 kun bo'ladi.

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Yini kiriting kiriting: ");
//     scanf("%d", &num);

//     if (num % 4== 0 && num % 100 != 0 || num % 400 == 0)
//     {
//         printf("%d bu kabisa yili \n", num);
//     }
//     else
//     {
//         printf("%d bu kabisa yili emas \n", num);
//     }

//     return 0;
// };

// Misol c char berilgan. Berilgan  char alfavit  yoki raqam ekanligini aniqlang. Agar alfavit bo'lsa 'alpha' ni  konsolga chiqaring,  agar son bo'lsa 'son' ni  konsolga chiqaring.

// #include <stdio.h>

// int main()
// {
//     char ch;

//     printf("Biror belgi kiriting: ");
//     scanf("%c", &ch);

//     if (ch >= 'A' && ch <= 'Z')
//     {
//         printf("Bu harf %c\n", ch);
//     }
//     else if(ch >= 'login' && ch <= 'z'){
//          printf("Bu harf %c\n", ch);
//     }
//     else if(ch >= '0' && ch <= '9'){
//          printf("Bu son %c\n", ch);
//     }else {
//         printf("Bu belgi \n");
//     }

//     return 0;
// }

// Misol
//   Berilgan son hafta kunining qaysi kuniga to'g'ri keladi . Agar kelgan son 1 ga teng bo'lsa 'Dushanba' ni konsolga chiqaring,
//    Agar kegan son ikkiga teng bo'lsa  'Seshanba' ni konsolga chiqaring va hz ..,Agar hafta kuniga to'g'ri kelmasa 'none' konsolga chiqsin.

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("1-dan 7 gacha son kiriting: ");
//     scanf("%d", &num);

//     if (num == 1)
//     {
//         printf("Haftaning 1-kuni Dushanba\n");
//     }
//     else if (num == 2)
//     {
//         printf("Haftaning 2-kuni Seshanba\n");
//     }
//     else if (num == 3)
//     {
//          printf("Haftaning 3-kuni Chorshanba\n");
//     }
//     else if (num == 4)
//     {
//        printf("Haftaning 4-kuni Payshanba\n");
//     }
//     else if (num == 5)
//     {
//         printf("Haftaning 5-kuni Juma\n");
//     }
//     else if (num == 6)
//     {
//         printf("Haftaning 6-kuni Shanba\n");
//     }
//     else if (num == 7)
//     {
//         printf("Haftaning 7-kuni Yakshanba\n");
//     }
//     else
//     {
//         printf("Noto'gri ma'lumot kiritdingiz !\n");
//     }

//     return 0;
// }

// Misol Sharti
//  login,b,c sonlari berilgan . Shu sonlar uchburchakning ichki burchaklari ekanligini aniqlang.
// Agar berilgan  sonlar uchburchakning burchaklari bo'lsa ,  true konsolga chiqaring bo'lmasa false konsolga chiqaring.

// #include <stdio.h>

// int main()
// {
//     int login;
//     int b;
//     int c;

//     printf("1-sonni kiriting: ");
//     scanf("%d", &login);
//     printf("2-sonni kiriting: ");
//     scanf("%d", &b);
//     printf("3-sonni kiriting: ");
//     scanf("%d", &c);

//     int jav = login + b + c;

//     if (jav == 180 && login > 0 && b > 0 && c > 0)
//     {
//         printf("Bular uchburchakning ichki burchaklari\n");
//     }else{
//         printf("Bular uchburchakning ichki burchaklari emas!\n");
//     }

//     return 0;
// }

// Misol Sharti
// login,b,c sonlari berilgan . Shu sonlar uchburchakning tomonlari ekanligini aniqlang.
// Agar kelgan sonlar uchburchakning tomonlari bo'lsa ,true  konsolga  chiqaring,  bo'lmasa false konsolga chiqaring.

// #include <stdio.h>

// int main()
// {
//     int login;
//     int b;
//     int c;

//     printf("1-sonni kiriting: ");
//     scanf("%d", &login);
//     printf("2-sonni kiriting: ");
//     scanf("%d", &b);
//     printf("3-sonni kiriting: ");
//     scanf("%d", &c);

//     if (login + b > c && login + c > b && b + c > login)
//     {
//         printf("bu Uchburchak bo'la oladi!\n");
//     }
//     else
//     {
//         printf("bu Uchburchak bo'la olmaydi!\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char login;

//     printf("harf kirit: ");
//     scanf("%c", &login);

//     if (login >= 'login' && login <= 'z')
//     {
//         printf("lowerCase\n");
//     }
//     else if (login >= 'A' && login <= 'Z')
//     {
//         printf("upperCase\n");
//     }
//     else
//     {
//         printf("siz harf kiritmadingiz!\n");
//     }

//    return 0;
// }

// Misol Sharti
// login,b,c sonlari berilgan. Bu sonlar uchburchakning 3ta tomonidir.  Uchburchak ning shakli qanday ekanligini aniqlang.

// Agar teng tomonli bo'lsa  'equilateral' so'zini konsolga chiqaring.
// Agar teng yonli bo'lsa  'isosceles' so'zini konsolga chiqaring.
// Agar ixtiyoriy  bo'lsa  'scalene'  so'zini konsolga chiqaring.

// #include <stdio.h>

// int main()
// {
//     int num1;
//     int num2;
//     int num3;

//     printf("Uchburchakni 1- tomonini kiriting: ");
//     scanf("%d", &num1);
//     printf("Uchburchakni 2- tomonini kiriting: ");
//     scanf("%d", &num2);
//     printf("Uchburchakni 3- tomonini kiriting: ");
//     scanf("%d", &num3);

//     if (num1 == num2 && num1 ==  num3 && num2 == num3)
//     {
//         printf("Uchburchakni teng-tomonli! \n");
//     }
//     else if(num1 == num2 || num1 == num3 || num2 == num3)
//     {
//         printf("Uchburchak teng yonli! \n");
//     }
//     else {
//          printf("Uchburchak turli tomonli! \n");
//     }
//     return 0;
// }

// Misol Sharti
// login, b, c sonlari berilgan.
// Berilgan 3 ta sondan nechtasi musbat ekanligini aniqlovchi dastur yozing va musbat sonlar sonini konsolga chiqaring.

// #include <stdio.h>

// int main()
// {
//     int num1;
//     int num2;
//     int num3;
//     int musbatSoni = 0;
//     printf("1- sonni kiriting: ");
//     scanf("%d", &num1);
//     printf("2- sonni kiriting: ");
//     scanf("%d", &num2);
//     printf("3- sonni kiriting: ");
//     scanf("%d", &num3);

//     if (num1 > 0)
//     {
//         musbatSoni++;
//     }
//     if (num2 > 0)
//     {
//         musbatSoni++;
//     }
//     if (num3 > 0)
//     {
//         musbatSoni++;
//     }
//     printf("Musbatlar soni: %d\n", musbatSoni);
//     return 0;
// }

// 11- Misol

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Son kiriting: ");
//     scanf("%d", &num);

//     if (num >= 10 && num <= 20)
//     {
//         printf("To'gri raqam\n");
//     }
//     else
//     {
//         printf("Noto'g'ri raqam\n");
//     }

//     return 0;
// };

// ----------------- Loops   -----------------

// #include <stdio.h>

// int main()
// {
//     int i = 10;

//     while (i >= 1)
//     {
//         printf("salom %d\n", i--);
//         i--;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 10;

//     while (i >= 1)
//     {
//         printf("salom %d\n", i--);
//         i--;
//     }

//     return 0;
// }

///
// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }

// 1 dan 10gacha

// #include <stdio.h>

// int main()
// {
//     int num = 1;
//     int sum = 0;

//     while (num <= 10)
//     {
//         sum += num;
//         num += 1;
//     }
//         printf("javob: %d", sum);

//     return 0;
// }

// 1dan 10 gacha bolgan sonlarni 2ga kopeytirish jadvalini yozing (for va while looplari orqali)!

// #include <stdio.h>

// int main()
// {
//     int num = 1;

//     while (num <= 10)
//     {
//         printf("javob: %d * 2 == %d\n", num, num * 2);
//         num++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     for (int num = 1; num <= 10; num++)
//     {
//         printf("javob: %d * 2 == %d\n", num, num * 2);
//     }

//     return 0;
// }

// 1 dan yigitmagacha bolgan sonlar ichidagi juft sonlarni  while sikli orqali ciqaring

// #include <stdio.h>

// int main()
// {
//     int num = 1;

//     while (num <= 20)
//     {
//         printf("%d\n", ++num);
//         num++;
//     }

//     return 0;
// }

// For sikli yordamida 1 dan 50 gacha bolgan barcha toq sonlarni yigindisini topish dasturini tuzing.

// #include <stdio.h>

// int main()
// {
//     int sum = 0;
//     for (int num = 1; num <= 50; num++)
//     {
//         printf("%d\n", num++);
//         sum += num;
//     }
//     printf("%d", sum);
//     return 0;
// }

// For sikli yordamida barcha kichik harflarning ASCI table dagi son qiymatini chiqaring.

// #include <stdio.h>

// int main()
// {

//     for (int str = 'login'; str <= 'z'; str++)
//     {
//         printf("%c asci %d\n", str, str);
//     }
//     return 0;
// }

// While sikli yordamida 10 dan 1 gacha boldgan sonlarni chiqaring;

// #include <stdio.h>

// int main()
// {
//     int i = 10;

//     while (i >= 1)
//     {
//         printf("salom %d\n", i);
//         i--;
//     }

//     return 0;
// }

// For sikli yordamida barcha kichik harflarni chiqaring

// #include <stdio.h>

// int main()
// {

//     for (int str = 'login'; str <= 'z'; str++)
//     {
//         printf("%c\n", str);
//     }
//     return 0;
// }

// While sikli yordamida barcha Katta harflarni chiqaring

// #include <stdio.h>

// int main()
// {
//     int str = 'A';

//     while (str <= 'Z')
//     {
//         printf("%c\n", str);
//         str++;
//     }

// }

// #include <stdio.h>

// int main()
// {
//     int _son = 123456789;
//     long son = 1234567891011121415;

//     // printf("%d\n", (int)son);
//     printf("%ld\n",  son);
//     return 0;
// }

// Functions

// #include <stdio.h>

// int add_to_num(int p1 , int p2) {
//     return p1 + p2;
// }

// int main()
// {

//     printf("%d\n", add_to_num(5,5));

//     return 0;
// }

///

// #include <stdio.h>

// void age_ident(){
//     int age;
//     printf("Yoshingizni kiriting: ");
//     scanf("%d", &age);
//     int left_year = 50 - age;
//     if (age <= 30)
//     {
//         printf("Hali ancha bor\n");
//     }
//     else if(age >= 30 && age < 45)
//     {
//        printf("Hali bor\n");
//     }
//     else if(age >= 45 && age < 50)
//     {
//        printf("yetib kebsan\n");
//     }else {
//         printf("...\n");
//     }

// }

// 1 -topshiriq 2 sonning yigindisini topib ekranga chiqaring.

// #include <stdio.h>

// void nums(){
//     int login;
//     int b;
//     printf("1-sonni kiriting ");
//     scanf("%d", &login);
//     printf("2-sonni kiriting ");
//     scanf("%d", &b);

//     printf("Javob: %d\n", login + b);
// }

// int main()
// {
//     nums();
//     return 0;
// }

//

// #include <stdio.h>

// void hello(){
//     printf("Hello\n");
// }

// int main()
// {
//     hello();
//     return 0;
// }

// Misol : login harfni qaytaruvchi funksiya yozing

// #include <stdio.h>

// void _a(){
//     char login = 'login';
//     printf("%c\n", login);
// }

// int main()
// {
//     _a();
//     return 0;
// }

// Misol : 5 sonini qaytaruvchi funksiya yozing

// #include <stdio.h>

// void _a(){
//     int num = 5;
//     printf("%d\n", num);
// }

// int main()
// {
//     _a();
//     return 0;
// }

// Misol: 3 sonni parametr sifatida qabul qilib undan eng kattasini ekranga chiqaaring

// #include <stdio.h>

// void nums(){
//     int login;
//     int b;
//     int c;
//     printf("1-sonni kiriting ");
//     scanf("%d", &login);
//     printf("2-sonni kiriting ");
//     scanf("%d", &b);
//     printf("3-sonni kiriting ");
//     scanf("%d", &c);

//     if (login >= b && login >= c)
//     {
//         printf("eng katta son %d\n", login);
//     }
//     else if(b >= login && b >= c)
//     {
//         printf("eng katta son %d\n", b);
//     }else {
//         printf("eng katta son %d\n", c);
//     }

// }

// int main()
// {
//     nums();
//     return 0;
// }

// 6-topshiriq: “Salom” so‘zini tsikl bilan 10 marta chop etadigan funksiya yozing.

// #include <stdio.h>

// void nums(){
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d Salom\n", i);
//     }

// }

// int main()
// {
//     nums();
//     return 0;
// }

// 7-topshiriq: Parametrlarning o'rtacha qiymatini hisoblash va qaytarish funksiyasini yarating natija.

// #include <stdio.h>

// void nums(){
//     int login;
//     int b;
//     int c;
//     printf("1-sonni kiriting ");
//     scanf("%d", &login);
//     printf("2-sonni kiriting ");
//     scanf("%d", &b);
//     printf("3-sonni kiriting ");
//     scanf("%d", &c);

//     int result = (login + b + c) / 3;

//     printf("O'rtacha son : %d\n", result);
// }

// int main()
// {
//     nums();
//     return 0;
// }

// #include <stdio.h>

// void calc() {
//     int workHour;

//     printf("Necha soat ishlagansiz: ");
//     scanf("%d", &workHour);

//     printf("sizni ish xaqqingiz: %d$\n", workHour * 12);

// }

// int main() {

//  calc();

//     return 0;
// }

// #include <stdio.h>

// int mult_two_function(int p1, int p2) {
//     int result = p1 * p2;
//     return result;
// }

// int main () {
//     int ret = mult_two_function(10,15);
//     int ret1 = mult_two_function(2,5);
//     int ret2 = mult_two_function(8,5);
//     int ret3 = mult_two_function(111,0);
//     int ret4 = mult_two_function(1,144);
//     printf("%d\n", ret);
//     printf("%d\n", ret1);
//     printf("%d\n", ret2);
//     printf("%d\n", ret3);
//     printf("%d\n", ret4);
//     return 0;
// }

//------------ Funksiyani tipi u qande tipli narsa qaytarvotganiga bogliq!!!

// #include <stdio.h>

// int misol(int son) {

//     int result = 1;
//     for (int i = 0; i <= son; i++)
//     {
//         result *= i;
//     }
//     return result;
// }

// int main()
// {
//     int num;
//     printf("son kiriting: ");
//     scanf("%d", &num);
//     printf("%d\n", misol(num));
//     return 0;
// }

// ---------Data Struktura

// #include <stdio.h>

// int main()
// {

//  // Massiv Array
//     int arr[5] = {1,2,3,4,5};

//     for (int i = 0; i < arr[i]; i++)
//     {
//        if (arr[i] == 5)
//        {
//         printf("%d\n", arr[i]);
//        }

//     }

//     return 0;
// }
// int main()
// {

//  // Massiv Array
//     char str[5] = {1,2,3,4,5};

//     for (int i = 0; i < str[i]; i++)
//     {
//         printf("%p\n", &str[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[10];

//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = i + 1;
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[10];
//     int son = 110;
//     for (int i = 0; i <= 10; i++)
//     {
//         arr[i] = son;
//         son--;
//     }

//     for (int j = 0; j <= 10; j++)
//     {
//         printf("%d\n", arr[j]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[50];
//     int tog = 0;
//     for (int i = 0; i <= 100; i++)
//     {
//         arr[i] = tog += 1;
//         tog++;
//     }

//     for (int i = 1; i < 50; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }

// Misol 0 dan 100 gacha

// #include <stdio.h>
// int main()
// {
//     int arr[50];
//     int i = 0;
//     int j = 0;
//     while (i < 100)
//     {
//         if (i % 2 != 0)
//         {
//             arr[j] = i;
//             j++;
//         }
//         i++;
// }

//     for (int i = 0; i < 50; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }

// #include<stdio.h>
// int function1(int k)
// {
//     k++;
//     return k;
// }

// int main()
// {
//     int k=30;
//     k = function1(k=function1(k=function1(k)));
//     printf("k=%d\n", k);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int son = 1,  son2= 2;
//     printf("son1:%d  son2:%d\n", son , son2);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     return 0;
// }

// #include <stdio.h>
// #define son 100      //define - o'zgarmas ozgaruvci
// int main()
// {
//     printf("%d", son);
//     return 0;
// }

// Kiritilgan sozning uzunligini topish!

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char soz[50];
//     printf("Soz kiriting:");
//     scanf("%s", soz);

//     int num = 0;

//     while (num <= soz[num])
//     {
//         num++;
//     }
//     printf("%d\n", num);

//     return 0;
// }

// karra jadvali

// #include <stdio.h>

// int main()
// {
//     for (int i = 2; i < 10; i++)
//     {
//         for (int j = 1; j < 10; j++)
//         {
//             printf("%d x %d = %d\n", i, j, i*j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//------------------ Switch case ------------------

// #include <stdio.h>

// int main()
// {
//     int son;
//     printf("5 sonini kiriting: ");
//     scanf("%d", &son);

//     switch (son)
//     {
//     case 3:
//         printf("yolg'on\n");
//         break;

//     case 2:
//         printf("yolg'on\n");
//         break;

//     case 4:
//         printf("yolg'on\n");
//         break;

//     case 5:
//         printf("Rost\n");
//         break;

//     case 1:
//         printf("Rost\n");
//         break;

//     default:
//         printf("nol\n");
//         break;
//     }

//     return 0;
// }

// Karra jadvali....

// #include <stdio.h>

// int main () {
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j < 10; j++)
//         {
//    printf("%d x %d = %d\t\t\t\n\n" , i, j , i*j);

//         }
//         printf("\n");
//            printf("\n");

//     }

// }

// #include  <stdio.h>

// int main () {
//     int i = 1;

//     while (i <= 10)
//     {
//         int j = 1;
//         while (j<= 10)
//         {
//             printf("%d x %d = %d\t\t\t\n\n" , i, j , i*j);
//             j++;
//         }
//         i++;
//     }

// }

// --------------------- <ctype.h> ---------------------

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     // isalnum() belgiligini aniqlovchi tayyor funksiya
//     char belgi;
//     printf("Belgi kirit: ");
//     scanf("%c", &belgi);

//     if (isalnum(belgi)){
//         printf("true\n");
//     }else {
//         printf("false\n");
//     }

// }

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     // isalpha() harfligini aniqlovchi tayyor funksiya
//     char belgi;
//     printf("Belgi kirit: ");
//     scanf("%c", &belgi);

//     if (isalpha(belgi)){
//         printf("true\n");
//     }else {
//         printf("false\n");
//     }

// }

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     // isdigit() sonligini aniqlovchi tayyor funksiya
//     char belgi;
//     printf("Belgi kirit: ");
//     scanf("%c", &belgi);

//     if (isdigit(belgi)){
//         printf("true\n");
//     }else {
//         printf("false\n");
//     }

// }

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     // islower() kichik harfligini aniqlovchi tayyor funksiya
//     char belgi;
//     printf("Belgi kirit: ");
//     scanf("%c", &belgi);

//     if (islower(belgi)){
//         printf("true\n");
//     }else {
//         printf("false\n");
//     }

// }

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     // isupper() katta harfligini aniqlovchi tayyor funksiya
//     char belgi;
//     printf("Belgi kirit: ");
//     scanf("%c", &belgi);

//     if (isupper(belgi)){
//         printf("true\n");
//     }else {
//         printf("false\n");
//     }

// }

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     // ispunct() maxsus belgilarni aniqlovchi tayyor funksiya
//     char belgi;
//     printf("Belgi kirit: ");
//     scanf("%c", &belgi);

//     if (ispunct(belgi)){
//         printf("true\n");
//     }else {
//         printf("false\n");
//     }

// }

// --------Amaliyot Login

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char login[16];
//     int son = 0;
//     while (son != 1)
//     {
//         int upCount = 0;
//         int lowerCount = 0;
//         int pCount = 0;
//         int digitCount = 0;
//         printf("Loginni kiriting: ");
//         gets(login);
//         for (int i = 0; i < 16; i++)
//         {
//             if (isupper(login[i]))
//             {
//                 upCount++;
//             }
//             if (islower(login[i]))
//             {
//                 lowerCount++;
//             }
//             if (isdigit(login[i]))
//             {
//                 digitCount++;
//             }
//             if (ispunct(login[i]))
//             {
//                 pCount++;
//             }
//         }
//         if (upCount == 4 && lowerCount == 4 && pCount == 4 && digitCount == 4)
//         {
//             break;;
//         }
//         else
//         {
//             printf("%d %d %d %d", upCount, lowerCount, pCount, digitCount);
//         }
//     }
//     printf("ro'yxatdan o'tdingiz\n");
// }

// Random sonlarni topish

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main () {
//     srand(time(0));
//     long int num;
//     //num = rand()%(b-a+1)+a; --- Random formulasi
//     num = rand()%99+10;
//     printf("%ld\n", num);
// }

// Foydalanuvchidan soralgan sonlarni random orqali toq yoki juftga ajratish

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main () {
//     srand(time(0));
//     int num;
//     int number;
//     printf("Nechta  raqam tanlaysiz\n");
//     scanf("%d", &num);
//     for (int i = 0; i < num; i++)
//     {
//         number = rand()%101+0;
//         if (number % 2 ==0)
//         {
//             printf("%d = juft son\n", number);
//         }else {
//             printf("%d = toq son\n", number);
//         }

//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j < 2; j++)
//         {
//             printf("%d x %d = %d \n" ,i , i , i*i);
//         }

//     }

// }

// #include <stdio.h>

// int main(){

//     int arr[3][2];
//     arr[0][0]= 1;
//     arr[0][1]= 2;
//     arr[1][0]= 3;
//     arr[1][1]= 4;
//     arr[2][0]= 5;
//     arr[2][1]= 6;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d", arr[i][j]);
//         }

//     }

//     return 0;
// }

// Loop orqali massivga alifboni barcha harflarini joylawtiriw

// #include <stdio.h>
// #include <ctype.h>

// int main(){

//     int arr[4][7];

//     char a = 'a';
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             printf("%c\n", a);
//             a++;
//         }
//     }

//     return 0;
// }

// Uy ishi 1

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int new_func (int* son, int* son2) {

//     return *son * *son2;
// }

// int main() {
//     int num = 6;
//     int num2 = 5;
//     printf("%d\n", new_func(&num, &num2));
// }

// Uy ishi 2

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int new_func (int* son, int* son2) {

//     return *son * *son2;
// }

// int main() {
//     int num = 6;
//     int num2 = 5;
//     printf("%d\n", new_func(&num, &num2));
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     int arr[3][5];
//     int index = 1;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             arr[i][j] = index;
//             index++;
//             printf("%d\n", arr[i][j]);
//         }

//     }
//     printf("Hello World");
//     return 0;

// }

// Calloc vs

// Calloc va Malloc dinamik xotira turida
// Dinamik xotirani tejab beradi

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main()
// {
//     char stat[6] = "luboy";
//     char* dinam = malloc(sizeof(char) * 6);
//     strcpy(dinam, "qwert");
//     printf("%s\n", dinam);
//     return 0;
// }

// int main()
// {
//     char stat[6] = "luboy";
//     char* dinam = calloc(7, sizeof(char));
//     strcpy(dinam, "qwert");
//     printf("%s\n", dinam);
//     return 0;
// }

// void my_swap (int* p1, int* p2) {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// Swap qiliw pointer

// My Atoi funksiyasi

// int my_atoi(char* p1){
//     int result = 0;
//     int flag = 0;
//     int i = 0;
//     if (p1[0] == '-')
//     {
//         flag = 1;
//         i = 1;
//     }

//     while (p1[i] >= 48 && p1[i] <= 57)
//     {
//         result *= 10;
//         result += p1[i++] - 48;
//     }

//     if (flag == 1)
//     {
//         result *= -1;
//     }

//     return result;

// }

// int main()
// {
//     char num[] = "1212";
//     printf("%d\n", my_atoi(num));
//     return 0;
// }

// int main () {
//     char str[4][7];
//     char letter = 'a';
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             str[i][j] =  letter;
//             letter++;
//             printf("%c\n", str[i][j -2]);
//         }
//     }
// }

// 2 ta istalgan harfni decimal qiymatini chiqaring

// int nums(char* str1 , char* str2) {
//     return *str1 + *str2;
// }

// int main() {
//     char a = 'a';
//     char b = 'b';
//     printf("%c va %c\n\n" , a, b);
//     nums(&a, &b);
//     printf("Dec qiymati %d \n\n" , a + b);
//     return 0;
// }

// int main()
// {
//     char**  str = malloc(sizeof(char*) * 3);
//     str[0] = malloc(sizeof(char) * 7);
//     str[1] = malloc(sizeof(char) * 8);
//     str[2] = malloc(sizeof(char) * 11);
//     strcpy(str[0], "Anvarov");
//     strcpy(str[1], "Baxtiyor");
//     strcpy(str[2], "Bunyodovich");

//     printf("%s %s %s\n", str[0],str[1],str[2]);
//     return 0;
// }

// C dasturlash tilida ikkita massiv oching 1-massivga toq sonlarni, 2-massivga juft sonlarni Yozuvchi dastur yozing


// int main()
// {
//     int str1[50];
//     int str2[50];
//     int index1 = 0;
//     int index2 = 0;

//     for (int i = 0; i <= 100; i++)
//     {
//         if(i % 2 ==1){
//             str1[index1] = i;
//             index1++;
//         }
//         else {
//             str2[index2] = i;
//             index2++;
//         }
//     }

//     for (int i = 1; i <= 50; i++)
//     {
//         printf("str1[%d] =  %d\n", i , str1[i]);
//     }
//     printf("\n");
//     for (int i = 1; i <= 50; i++)
//     {
//         printf("str2[%d] =  %d\n", i , str2[i]);
//     }

//     return 0;
// }

// int main()
// {
//     int**  str1 = malloc(sizeof(int*) * 2);
//     str1[0] = malloc(sizeof(int) * 50);
//     str1[1] = malloc(sizeof(int) * 50);
//     int index1 = 0;
//     int index2 = 0;

//     for (int i = 0; i <= 100; i++)
//     {
//         if(i % 2 == 1){
//             str1[0][index1] = i * 3;
//             index1++;
//         }
//         else {
//             str1[1][index2] = i * 2 ;
//             index2++;
//         }
//     }

//     for (int i = 1; i <= 50; i++)
//     {
//         printf("str1[%d] =  %d\n", i , str1[0][i]);
//     }
//     printf("\n");
//     for (int i = 1; i <= 50; i++)
//     {
//         printf("str1[%d] =  %d\n", i , str1[1][i]);
//     }

//     return 0;
// }

// int main()
// {
//     int**  str1 = malloc(sizeof(int*) * 3);
//     str1[0] = malloc(sizeof(int) * 100);
//     str1[1] = malloc(sizeof(int) * 100);
//     str1[2] = malloc(sizeof(int) * 100);
//     int mac = 1;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 1; j <= 100; j++)
//         {
//            str1[i][j] = mac;
//            mac++;
//         }

//     }

//     for (int i = 1; i <= 100; i++)
//     {
//         printf("str1[%d] =  %d\n", i , str1[0][i]);
//     }
//     printf("\n");
//     for (int i = 1; i <= 100; i++)
//     {
//         printf("str2[%d] =  %d\n", i , str1[1][i]);
//     }
//     for (int i = 1; i <= 100; i++)
//     {
//         printf("str3[%d] =  %d\n", i , str1[2][i]);
//     }

//     return 0;
// }

// void new(int* num) {
//     for (int i = 1; i <= *num; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             printf("%d x %d = %d\n", i, j , i*j);

//         }

//         printf("\n");
//         printf("\n");
//         printf("\n");

//     }

// }

// int main () {
//     int son;

//     printf("Son kiriting: ");
//     scanf("%d", &son);
//     new(&son);
//     return 0;
// }

// Yulduzlar orqali archa hosil qilish

// #include <stdio.h>

// int main() {
//     int n = 10;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int t = 1; t <= 2 * i - 1 ; t++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int son;

//     printf("son kiriting: ");
//     scanf("%d", &son);

//     for (int i = 1; i <= son; i++)
//     {
//         for (int j = 1; j <= son - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             printf("*");
//         }

//         printf("\n");

//     }

//     return 0;
// }

// int my_strlen(char* str){
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return i;

// }

// int main () {
//     char str[]= "qwert";
//     printf("%d\n", my_strlen(str));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     for (int i = 3; i > 0; i--)
//     {
//         printf("i:%d ", i);
//         for (int k = 0; k > -2; k--)
//         {
//             printf("k:%d ", k);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// ------------------- Data struktura -------------------

// struct course
// {
//     char name[20];
//     char ism[20];
//     int yil;

// };

// struct course nore(char* b_name, char* b_ism, int b_yil) {
//     // printf("%s , %s %d\n", uni.name, uni.ism, uni.yil);
//     struct course kitob;
//     strcpy(kitob.name , b_name);
//     strcpy(kitob.ism ,  b_ism);
//     kitob.yil = b_yil;

//     return kitob;
// };

// int main()
// {
//     struct course ukki = nore("Crazy", "Adolf Gitler", 1966);

//     printf("%s\n", ukki.name);
//     printf("%s\n", ukki.ism);
//     printf("%d\n", ukki.yil);
// }

// 2 ta son kiriting agar ularni ko'paytmasi musbat bo'lsa , ularning yig'indisini 4 ga ko'paytiring.

// int main()
// {
//     int a, b;
//     printf("2ta son kirting...\n");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     int dec = a * b;
//     int javob = 0;
//     if (a * b > 0)
//     {
//         javob = (a + b) * 4;
//     }

//     printf("%d\n", javob);
// };





// write() ---- sistemniy vizof .  printf dan tezroq ishlidi.  (-- _ -- _ --) 1- chisi qatga yozishi. 2- nimani yozish kerak (& adres bilan beriladi). 3- necha bayt
//open() ------ (---- __ ----)   1- filename yoziladi . 2- O_WRONLY (oqiw uchun), O_RDONLY(yoziw uchun).
// read() 3ta joyi bor . 1-qayerdan oqib olish, 
// read() - 0 terminaldan oqib olish. 1 - terminalga

// #include <fcntl.h>
// #include <unistd.h>


// int main() {
//     char letter = 'b';
//     char arr[] = "Sador"; // Array jonatish uchun &arr[0] elementi 

//     int key = open("file.txt", O_WRONLY || O_RDONLY);
//     char a;
//     char intro[]= "Qiymat kiriting\n";
//     int intro_len = strlen(intro);

//     write(1, intro,intro_len);
//     write(key, intro,intro_len);




    // char end;
    // int end_len = strlen(end);
    // write(1,end, end_len);
    // write(1,&value, 1);






    // char array[100];

    // int key = open("file.txt", O_RDONLY || O_WRONLY);

    // int ind = 0;

    // while ((read(key, &array[ind], 1)) > 0)
    // {
    //     ind++;
    // }

    // write(1, &array, 7);

    // return 0;

// }


// Sonlarni sortlash (kichidkdan katta qilib ketma ket qilish ) 

// int main () {
//     char str[15];
//     int key = open("file.txt", O_RDONLY || O_WRONLY);
//     int index = 0;
//     while (read(key, &str[index], 1) != 0)
//     {
//         printf("%c\n", str[index]);
//         index++;
//     }
//     int array[15];
//     int arr[] = {2,4,3,55,34,14,4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < size; i++)
//     {
//         for (int k = i + 1; k < size; k++)
//         {
//             if (arr[i] > arr[k])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[k];
//                 arr[k] = temp;
//             }
            
//         }
        
//     }

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d",arr[i]);
//     }
// }