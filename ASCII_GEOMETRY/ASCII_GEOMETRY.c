#include <stdio.h>



void Create_Triangle_Rectangle(int);
void stop(int);
void Pre_Create(int);
void Create_Triangle(int);



int main(){
int Shape;
    while (1){
printf("\nChose the geometric shape that you wish to print\nRectangular Triangle(1)\nTriangle(2)\nRectangle|Square(3)\nClear(4)|only works on windows at the moment\nExit(5)\n");
int Scan_P = scanf("%d", &Shape);
if (Scan_P == 0||Shape < 1||Shape > 5){
    stop(1);
    break;
}
else{
Pre_Create(Shape);
}
}
return 0;
}



void stop(Has_Failed){
    if (Has_Failed == 1){
    printf("Program failed to run, check your inputs.");
    }
    while(1){
    int z;
    printf("\nType anything to exit\n-->");
    scanf("%d", &z);
    exit(0);
    }
}



void Pre_Create(int Form){
    char Command_W[] = "cls";
    switch (Form){
case 1:
printf("Input the height of the triangle(min:2)\n-->");
int height;
int x = scanf("%d", &height);
if (x == 0||height <=1){
    stop(1);
}
else{
Create_Triangle_Rectangle(height);
}
break;
case 2:
    printf("enter the base of the triangle(works best with even numbers)(min:6)\n-->");
    int Base;
    int Scan_Base;
    Scan_Base = scanf("%d", &Base);
    if (Scan_Base == 0||Base < 6){
        stop(1);
    }
    Create_Triangle(Base);
    break;
case 3:
    printf("Input the size of the vertical side\n-->");
    int V_side;
    int Scan_Sqr = scanf("%d", &V_side);
    printf("Input the size of the horizontal side\n-->");
    int H_side;
    int Scan_Sq = scanf("%d", &H_side);
    if (Scan_Sqr == 0||Scan_Sq == 0|| V_side < 1||H_side < 1){
        stop(1);
    }
    Create_Rectangle_Square(V_side, H_side);
    break;
case 4:
    system(Command_W);
    break;
case 5:
    exit(0);
    break;
    }
}



void Create_Triangle_Rectangle(int Height){
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
    }



void Create_Rectangle_Square(int V_Side, int H_Side){
    char Block1 = 95;
    char Block2 = 124;
    char Block3 = 126;
    char Space = 32;
    int X;
    int Y;
    printf("%c", Space);
    for(X = 0;X < H_Side;X++){
            printf("%c", Block1);
            printf("%c", Space);
    }
    for(X = 0; X < V_Side; X++){
        printf("\n");
        printf("%c", Block2);
        for(Y = 0;Y < H_Side * 2 - 1;Y++){
            printf("%c", Space);
            if (Y == H_Side * 2 - 2){
                printf("%c", Block2);
            }
        }
    }
    printf("\n%c",Space);
for(X = 0;X < H_Side;X++){
            printf("%c", Block3);
            printf("%c", Space);
}
}



void Create_Triangle(int Base){
char Block1 = 94;
char Block2 = 47; ///
char Block3 = 92;
char Block4 = 126;
int M, X, Y, Z, B,Line = 1;
M = ((Base + 2)/2) + 1;
if((Base%2) ? 1:0){
    printf("%*c\n", M, Block1);
}
else{
    printf("%*c\%c\n", M, Block2, Block3);
}
for (X = 0; X < (Base/2); X++){
        // go to base
    for(Y = 0; Y < (Base/2) + 1; Y++){
        printf(" ");
        }
    for(Z = 1; Z < 2; Z++){
        //backspace
            for(B = 0; B < Line; B++){
            printf("\b");
                    }
            printf("%c", Block2);
            //space
            for(Y = 1; Y <= Line; Y++){
                printf("  ");
            }
            printf("%c\n", Block3);
            Line ++;
}
}
//print base
printf("  ");
for (X = 0; X < Base; X++){
    printf("%c", Block4);
}
}
