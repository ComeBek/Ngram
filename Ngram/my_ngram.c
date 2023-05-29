#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

/**
*** Version 1
**/

// #define M_RA_SISE 128

// int main(int ac, char ** av){
//     int ra[M_RA_SISE] = {0};
//     for(int n=1; n<ac; n++){
//         for(int m=0; av[n][m] != '\0'; m++){   
//             ra[(int)av[n][m]]++;
//         }
//     }

//     for(int n=0; n<M_RA_SISE; n++){
//         if(ra[n]>0){
//             printf("%c:%d\n", n, ra[n]);
//         }
//     }
// }


/**
*** Version 2
**/

// // передаём в функцию main() кол-во аргументов введённых в командной строке (переменная argc)
// // и сами аргументы разделённые пробелом (argv)
//  int main(int argc, char **argv) 
//  {

//    int ParNumber=1, count=0, dig=0;      // ParNumber - счётчик кол-ва аргументов. Начинаем с единицы потому, как 0 - это имя самой программы.
//                       // count - номер элемента массива StrTotal.
//                          // dig - номер для элемента массивов при подсчёте символов.

//    int AllChars[512]={0};          // AllChars - массив для сбора и посчёта символов, инициализируем нулём.
//    char StrTotal[512];              // StrTotal - массив на 512 байт для хранение итоговой строки полученной путем сложения всех принятых аргументов командной строки.
   
//    while (ParNumber != argc)          // Пока ParNumber не станет равна кол-ву аргументов командной строки.
//     {
//       char *ArgFromCmd = argv[ParNumber]; // Создаем указатель и сразу инициализируем значением первого аргумента командной строки (т.к. ParNumber=1)
//       while(*ArgFromCmd)                  // Пока аргументы не кончатся собираем все в одну строку для дальнейшей обработки в массив StrTotal.
//         {
//           StrTotal[count] = *ArgFromCmd;
//       ArgFromCmd++; 
//           count++;
//         }
//      ParNumber++;
//    }

//   for ( dig=0; StrTotal[dig]; dig++)     // Считаем
//      AllChars[StrTotal[dig]]++;

//   for ( dig=0; dig<512; dig++)           // Выводим результат
//     if ( AllChars[dig] )
//        printf("%c : %d \n",dig, AllChars[dig]);

//   return 0;
// }


/**
*** Final Version
**/

int main(int argc, char **argv) 
  {
 
    int ParNumber=1, dig=0;       
    int AllChars[128]={0};          
   
    while (ParNumber != argc)         
    {
       
       
       int i=0;
       while(argv[ParNumber][i] != '\0')                
         {
             AllChars[(int)argv[ParNumber][i]]++;
             i++;
         }
      ParNumber++;
    }
 

 
   for ( dig=0; dig<128; dig++)          
     if ( AllChars[dig] )
        printf("%c:%d\n",dig, AllChars[dig]);
 
   return 0;
 }
 