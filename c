#include<stdio.h> 
#include<string.h> 
#include <stdlib.h> 

int main(void) 
{ 
int versh,rebr,i,j,a; 
char a1,b1; 
FILE *f; 
f=fopen("graph.gv","w"); 
fputs("digraph G {\n",f); 

printf("Enter znach verchin:\n"); 
scanf("%d", &versh); 
printf("Enter znach reber:\n"); 
scanf("%d", &rebr); 
int arr[versh][rebr]; 
printf("Vvedite:\n\t0:net rebra\n\t1:rebro idet iz vershini\n\t-1: rebro idet v vershinu\n\n"); 
for( j=0; j<rebr; j++){ 
a1='A';  
b1='A';
a1=a1+j; 
for(i=0; i<versh; i++){ 
printf("%d liniya %d stolbik: ", i+1,j+1); 
scanf("%d", &a); 
arr[i][j]=a; 
if (a==1){ 
fprintf(f,"%c->%c\n",a1,b1); 
} 
if (a==-1){ 
fprintf(f,"%c->%c\n",b1,a1); 
} 
b1++; 
} 
} 
printf("\n\tMatrix:\n"); 
for( i=0; i<versh; i++){ 
printf("\t"); 
for( j=0; j<rebr; j++){ 
printf("%2d ", arr[i][j]); 
} 
printf("\n"); 
} 
fputs("}",f); 
fclose(f); 
return 0; 
}
