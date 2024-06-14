
/*PATTERN PROGRAM USING 'C'

      NAME   : SHREYAS C
      DEPT   : CSE 3rd SEM
      USN    : 3BR21CS151
      ROLL NO: B - 149 */

#include<stdio.h>
#include<stdlib.h>
int printS[7][7];
int printH[7][5];
int printR[7][5];
int printE[7][5];
int printY[7][8];
int printA[7][5];

void gap(){
for(int i=0;i<7;i++){
    for(int j=0;j<1;j++)
    {
        printf(" ");
    }
}
} //end gap()

void printConsole(){
for(int i=0;i<7;i++){
   gap();
    for(int j=0;j<5;j++){
        char ch=printS[i][j];
        printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printH[i][j];
     printf("%c",ch);
    }
       gap();
    for(int j=0;j<5;j++){
     char ch=printR[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printE[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<8;j++){
     char ch=printY[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printA[i][j];
     printf("%c",ch);
    }
     gap();
    for(int j=0;j<5;j++){
        char ch=printS[i][j];
        printf("%c",ch);
    }
    printf("\n");
} //end of for
} //end printconsole

void H(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0 || i==3 || j==4){
            printH[i][j]=42;
        }
        else{
            printH[i][j]=32;
        }
    }
}
}

void Y(){
    for(int i=0;i<8;i++){
         for(int j=0;j<8;j++){
             if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)||(j==3)&&(i!=0&&i!=1)&&(i!=2)||(i==2&&j==4)||(i==1&&j==5)||(i==0&&j==6))
                {
                  printY[i][j]=42;
                }
            else{
                  printY[i][j]=32;
                }
            }
    }
}
void A(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(((j==0 || j==4)&&(i!=0)) || ((i==0 || i==3)&&(j>0 && j<4))){
            printA[i][j]=42;
        }
        else{
            printA[i][j]=32;
        }
    }
}
}
void S(){
    system("color 0B");
        for(int i=0;i<7;i++){
            for(int j=0;j<5;j++){
                if(i==0 || j==0&&i<3 || i==3|| j==4&&i>2|| i==6){
                    printS[i][j]=42;
                    }
                else{
                    printS[i][j]=32;
                    }
                }
            }
}

void E(){
    for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if(j==0 || i==0 || i==3 || i==6 ){
                printE[i][j]=42;
                }
            else{
                printE[i][j]=32;
                }
            }
        }
}

void R()
{
   system("color 0B");
   for(int i=0;i<8;i++){
        for(int j=0;j<6;j++){
            if((j==0)||(i==0)||(i==3&&j<5)&&(i<4)||(j==4&&i<4)||(i==4&&j==1)||(i==5&&j==2)||(i==6&&j==3))
                {
                printR[i][j]=42;
                }
            else{
                printR[i][j]=32;
                }
            }
    }
}
int main()
{
S();
H();
R();
E();
Y();
A();
S();
printConsole();
return 0;
}
