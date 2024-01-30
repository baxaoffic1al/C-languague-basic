// POINTER

// C dasturlash tilida "pointer" o'zgaruvchilarni ma'lumotlarga ishora qilish uchun ishlatiladi. U ma'lumotlar joylashgan manzillarni (memory address) ko'rsatadi va shu manzillar orqali ma'lumotlarga kirish yoki ulardan foydalanish mumkin bo'ladi. Bu esa dasturlarni effektiv va samarali qilishga yordam beradi.

// int* (INT_POINTER) -- int tipidagi o'zgaruvchini adresini saqlaydi

// Ular C tilida muhim ahamiyatga ega, chunki ular bizga kompyuter xotirasidagi ma'lumotlarni manipulyatsiya qilish imkonini beradi. Bu kodni kamaytirishi va ish faoliyatini yaxshilashi mumkin.

// #include <stdio.h>

// int main()
// {
//     int a = 5;
//     printf("a qiymati: %d\n",a);
//     printf("a manzili : %p\n",&a);

//     int* ptr_a = &a;
//     printf("ptr_a qiymati: %p\n",ptr_a);
//     printf("ptr_a mazili: %p\n",&ptr_a);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 5;

//     int* ptr_a = &a;

//     *ptr_a = 77;
//     printf("qiymati: %d\n",*ptr_a);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int num = 50;
//     int num2 = 30;

//     printf("%d\n", num);
//     printf("%d\n", num2);

//     num = num+num2;
//     num2 = num-num2;
//     num = num-num2;

//     printf("%d\n", num);
//     printf("%d\n", num2);

//     return 0;
// }

#include <stdio.h>


// O'zgaruvchini e'lon qiladigan va uning manzilini ko'rsatadigan dastur yozing.

// #include <stdio.h>

// int main()
// {
//     int a = 12;
//     printf("a qiymati: %d\n",a);
//     printf("a manzili : %p\n",&a);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 70;

//     int* ptr_ = &a;
//     printf("ptr_ qiymati: %p\n",ptr_);
//     printf("ptr_ mazili: %p\n",&ptr_);
//     printf("a ning manzili: %d\n", *ptr_);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     int* ptr_ = &a;
//     printf("ptr_ qiymati: %p\n",ptr_);
//     printf("ptr_ mazili: %p\n",&ptr_);
//     printf("a ning manzili: %d\n", *ptr_);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     int* ptr_ = &a;
//     printf("ptr_ qiymati: %p\n",ptr_);
//     printf("ptr_ mazili: %p\n",&ptr_);
//     printf("a ning manzili: %d\n", *ptr_);

//     return 0;
// }

// Qiymatni pointer orqali alishtiring

// #include <stdio.h>

// int main()
// {

//     int num = 1;
//     int num2 = 0;

//     printf("%d\n", num);
//     printf("%d\n", num2);

//     num = num+num2;
//     num2 = num-num2;
//     num = num-num2;

//     printf("%d\n", num);
//     printf("%d\n", num2);

//     return 0;
// }

// Qiymatni pointer orqali alishtiring

// #include <stdio.h>

// void str(int* ptr1, int* ptr2) {
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }

// int main()
// {
//     int num = 1;
//     int num2 = 2;
//     printf("%d == %d\n", num, num2);
//     str(&num, &num2);
//     printf("%d == %d\n", num, num2);
//     return 0;
// }

// Swapni ishlating

// #include <stdio.h>

// void str(char* ptr1, char* ptr2 , char *ptr3) {
//     int letter = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = *ptr3;
//     *ptr3 = letter;
// }

// int main()
// {
//     char a = 'a';
//     char b = 'b';
//     char c = 'c';
//     str(&a, &b , &c);
//     str(&a, &b , &c);
//     printf("%c %c %c\n", a,b,c);
//     return 0;
// }

// #include <stdio.h>

// #include <stdio.h>

// int main () {
//     int arr[] = {1,2,3,4,5};

//     int* ptr = &arr[0];

//     int size = 5;
//     int i = 0;
//     while (i < size)
//     {
//         printf("%d\n", ptr[i]);
//         i++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int son = 12;

//     int *pointer = &son;

//     printf("%p\n", pointer); // int son ning adresi va pointer qiymati;
//     printf("%p\n", &pointer); // pointerning adresi
//     printf("%d\n", *pointer);  // Int sonning qiymati
// }

// Pointer orqali qiymatni qaytarish.

// #include <stdio.h>

// void sonAdresi(int *a , int *b){
//     printf("%d \t %d\n", *a,*b);
// }

// int main(){
//     int son1 = 60;
//     int son2 = 90;

//     int *Son1 = &son1;
//     int *Son2 = &son2;

//     sonAdresi(Son1, Son2);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int son = 15;
//     int* p;
//     printf("%p\t",p);
// }

// int main() {
//     int a = 12;
//     int* p =&a;
//     printf("%d\n", *p);
// }

// #include <stdio.h>

// int main () {
//     int son = 1;
//     int *p = &son;
//     printf("%p\n", p);
//     printf("%p\n", &p);
//     printf("%p\n", &son);
// }

// #include <stdio.h>

// int main () {
//     int son = 1;
//     int *p = &son;
//     printf("%p\n", p);
//     printf("%p\n", &p);
//     printf("%p\n", &son);
// }

// #include <stdio.h>

// int main () {
//     int num = 10;

//     int* pnt_num = &num;

// }

// #include <stdio.h>

// void new_func(int *ptr)
// {

//     *ptr = 50;
// }

// int main()
// {
//     char str[6]= "Qwerty";

//     char* ptr_str = &str[0];

//     printf("%s\n", ptr_str);
//     return 0;
// }

// Xotira 2ga bo'linadi

// Dinamik va Statik

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void new_func(int *ptr)
// {

//     *ptr = 50;
// }

// int main()
// {
//     char str[5]= "qwer\0";

//     char* dyn_str = malloc(sizeof(char) * 5);
//     strcpy(dyn_str, "qwer\0");

//     int i = 0;
//     while (dyn_str[i] != '\0')
//     {
//         printf("%c", dyn_str[i]);
//         i++;
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void new_func (int* son) {
//     *son = 0;
// }


// #include <stdio.h>

// int main() {
//     int num = 10;
//     printf("%d\n", num);
//     new_func(&num);
//     printf("%d\n", num);
// }




// 1- misol 

// void new_func(int* ptr){
//     *ptr = 0;
// }


// int main()
// {
//     char first = 'a';
//     char second = 'b';
//     char third = 'c';
//     char fourth = 'd';

//     char str[6] = "qwerty";

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abc";
  char str2[] = "abC";
  char str3[] = "abcd";
  int result;

  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);


  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}

