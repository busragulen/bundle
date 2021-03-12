// Büşra Gülen'in Robotics Bundle ödevidir.
#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Turkish");
   
   double a,b;
   char i;
  
   
   printf("Yapmak istediğiniz işlemin işaretini seçiniz: ( +, -, x, /) \n");
   scanf("%c", &i);
   printf("İşlem yapmak için iki sayı giriniz:\n");
   scanf("%lf %lf", &a,&b);
   
   switch(i){
       
       case'+': printf("%lf+%lf=%lf", a, b, a+b);
       break;
       case'-': printf("\n%lf-%lf=%lf", a, b, a-b);
       break;
       case'x': printf("\n%lfx%lf=%lf", a, b, a*b);
       break;
       case'/': printf("\n%lf/%lf=%lf", a, b, a/b);
       break;
       default: printf("\nGirdiğiniz işlem geçersizdir.");
   }
   
    printf("\nProgram sonlanmıştır.");
    return 0;
}
