#include <stdio.h>
#include <stdlib.h>
int suma(int a , int b){
return a+b;

}
int SUMAR(int a){
 printf("ingresar numero de datos");
 int e=0;
 int b=0;
while(b!=a){
  int c;
      scanf("%d",&c);
	e+=c;
	b++;
}
return e;
}
int main(){
int a,b;
printf("Escribe una cantidad de numeros a sumar\n");
scanf("%d",&a);
//scanf("%d",&b);
int d=SUMAR(a);
printf("El resultado es %d\n",d);




return 0;
}

