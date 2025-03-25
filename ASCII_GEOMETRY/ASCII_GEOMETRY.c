#include <stdio.h>
#include <string.h>

void Create_Triangle(int);
void stop();
void Pre_Create(int);



int main(){
int Shape;
int x;
printf("please chose the geometric form that you wish to print\nrectangular triangle(1)\n");
scanf("%d", &Shape);
Pre_Create(Shape);
return 0;
}



void stop(){
    while(1){
    int z;
    printf("\n");
    scanf("%d", &z);
    }
}



void Pre_Create(int Form){
    switch (Form){
case 1:
printf("please inform the height of the triangle(min:2)(max:236)\n-->");
int height;
int x = scanf("%d", &height);
if (x == 0||height <=1||height > 236){
    printf("program failed to run, please check your first input.");
}
else{
Create_Triangle(height);
}
break;
    }
}



void Create_Triangle(int Height){
       char Block1 = 124;
       char Block2 = 92;
       char Block3 = 95;
       char Space = 32;
       int X;
       int Y;
       for(X = 0;X < (Height - 1); X++){
            printf("%c", Block1);
            for(Y = 0; Y < X; Y++){
                printf("%c", Space);
            }
            printf("%c\n", Block2);
       }
       printf("%c", Block1);
       for(X = 0; X < (Height - 1); X++){
        printf("%c", Block3);
       }
       printf("%c", Block2);
       stop();
    }
