#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// int main()
// {
// char arr[100] = {111,100,124,9,1,7,6,5,4,3,2,8,0};

// int length = strlen(arr);

// for (int i = 0; i < length - 1; i++)
// {
//     for (int j = 0; j < length - 1 - i; j++)
//     {
//         int temp = arr[j];
//         if (arr[j] > arr[j+1])
//         {
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }

//     }
// }

// for (int i = 0; i < length; i++)
// {
//     printf("%d\n", arr[i]);
// }

// return 0;
// }

;

// int main() {
//     char arr[7];
//     int arr2[7];
//     int key = open("file.txt", O_RDONLY || O_RDONLY);

//     int ind = 0;
//     while(read(key, &arr[ind], 1) != 0){
//         ind++;
//     }
//     for(int i = 0; i < 7; i++){
//         arr2[i] = arr[i] - 48;
//     }
//     char sor[] = "qwertyu";
//     char sd;
//     write(key, &arr, 7);

//     // for(int i = 0; i < 7; i++){
//     //     printf("%d\n", arr2[i]);
//     // }
// }






// int main()
// {
//     char c[7];
//     int fd1 = open("file.txt", O_RDWR);
//     read(fd1, &c, 6);
//     write(c, &fd1, 6);
//     printf("c = %s\n", c);
//     return 0;
// }








#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
 
// int main(void)
// {
//     int fd[2];
//     char buf1[100] = "hello worldlcjv";
//     char buf2[100];
 
//     // assume foobar.txt is already created
//     fd[0] = open("file.txt", O_RDWR);
//     fd[1] = open("file.txt", O_RDWR);
 
//     write(fd[0], buf1, strlen(buf1));
//     write(1, buf2, read(fd[1], buf2, 16));
 

 
//     return 0;
// }





// int main(void)
// {
//     // int fd[2];
//     // char str1[100] = "Qattasan botir";
//     // char str2[100];


//     // fd[0] = open("file.txt", O_RDWR);
//     // fd[1] = open("file.txt", O_RDWR);

//     // write(fd[0], str1, strlen(str1));
//     // write(1, str2, read(fd[1], str2, 16));
//     return 0;
// }



// int main(void)
// { 
    // int key[2];

    // key[0] = open("file.txt", O_RDWR);
    // key[1] = open("file.txt", O_RDWR);
    // char str1[100] = "Assalomu-aleykum";
    // char str2[100];
    // int req = read(key[1], str2, 18);
    // write(key[0], str1, strlen(str1));
    // write(1, str2, req);
    // return 0;
// }




// int main() {
//     char str[100];
//     int key = open("file.txt", O_RDONLY || O_WRONLY);

// }

// int main()
// {
//     int fd[2];
//     fd[0] = open("file.txt", O_RDWR);
//     fd[1] = open("file.txt", O_RDWR);
//     char str1[100] = "sardo";
//     char str2[100];

//     write(fd[0], &str1[0], 5);
//     write(1, &str2, read(fd[1], str2, 5));
//     return 0;
// }





// int main() {
//     int fd[2];
//     fd[0] = open("file.txt", O_RDWR);
//     fd[1] = open("file.txt", O_RDWR);
//     char str1[100] = "Salom";
//     char str2[100];
// }

// int main(){
//     int key = open("file.txt", O_RDONLY || O_WRONLY);
//     char str[100] = "salomlar aythbhghvtgtygyguuyguyguygguyugyyguuygguygyuugygyugyuguyguyguyguyguyguyguy-";
//     write(key, str, strlen(str));
//     write(1, str, strlen(str));
//     // printf("%s\n", str);
// }


// Fayl ichidagi malumotni oqib , bow=shqa faylga yozish.

// int main(int argc,  char** argv){
//     int key = open(argv[1], O_RDONLY);
//     int key2 = open(argv[2], O_WRONLY);
//     char c;
//     while (read(key, &c ,1))
//     {
//         write(key2, &c, 1);
//     }
    
//     // write(key, str, 7);
//     // write(key2, str, 7);
// }



#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1; 
    }

    
    int count = 0;
    int number;
    while (fscanf(file, "%d", &number) == 1) {
        count++;
    }

    
    fclose(file);
    file = fopen("file.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error reopening file for reading.\n");
        return 1; 
    }

    
    int *numbers = (int *)malloc(count * sizeof(int));
    if (numbers == NULL) {
        fprintf(stderr, "Memory allocation error.\n");
        fclose(file);
        return 1; 
    }

    
    for (int i = 0; i < count; i++) {
        fscanf(file, "%d", &numbers[i]);
    }

}