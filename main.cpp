#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {
	
FILE *fp;
 char g;
 char i;
 int n = 0;
 char gondor[6] = {'G','O','N','D','O','R'};
 char mordor[6] = {'M','O','R','D','O','R'};
 char rohan[5] = {'R','O','H','A','N'};
 char erebor[6] = {'E','R','E','B','O','R'};
 char arnor[5] = {'A','R','N','O','R'};
 char lindon[6] = {'L','I','N','D','O', 'N'};
 char rhun[4] = {'R','H','U','N'};
 char angmar[6] = {'A','N','G','M','A','R'};
 

 	
 if ((fp=fopen ("file.txt","r")) != NULL) {
 	
 	 printf("Legenda: 1-Gondor 2-Mordor 3-Rohan 4-Erebor 5-Arnor 6-Lindon 7-Rhun 8-Angmar \n\n\n");
 	 printf("Digite o numero: ");
	 i=getch();
 
 while( (g=fgetc(fp)) !=EOF) {
 if (g==i) n++;
 }
  
 fclose(fp);
 if (i == '1')
printf("\n\n\nExistem %d jogadores em %s! \n", n, gondor);	
 if (i == '2')
printf("\n\n\nExistem %d jogadores em %s! \n", n, mordor);
 if (i == '3')
printf("\n\n\nExistem %d jogadores em %s! \n", n, rohan);
 if (i == '4')
printf("\n\n\nExistem %d jogadores em %s! \n", n, erebor);
 if (i == '5')
printf("\n\n\nExistem %d jogadores em %s! \n", n, arnor);
 if (i == '6')
printf("\n\n\nExistem %d jogadores em %s! \n", n, lindon);
 if (i == '7')
printf("\n\n\nExistem %d jogadores em %s! \n", n, rhun);
 if (i == '8')
printf("\n\n\nExistem %d jogadores em %s! \n", n, angmar);	
else
if (i == '9')
printf("Leia a legenda, permitido apenas numeros de 1 ao 8");	

}

else {
	printf("Arquivo nao pode ser aberto\n");
}


 


}
