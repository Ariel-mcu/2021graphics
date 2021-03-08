#include <stdio.h>


int main(int argc, char *argv[])///也可以打**argv
{
   printf("現在的argc是:%d\n" ,argc);
   foe(int i=0; i<argc; i++){
    printf("argv[i]是:%s\n", argv[i]);
   }
}

