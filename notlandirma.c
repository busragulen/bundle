//Büşra Gülen'in Robotics Bundle ödevidir.
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL," Turkish ");
    
    int not;
    printf("Notunuzu giriniz:\n");
    scanf("%d", &not);
    
    if(not<=0){
        printf("Bu geçersiz bir nottur. 1-100 aralığında bir not giriniz.\n");
        scanf("%d", &not);
    }
    if(not<=50&&not>0){
        printf("Biraz daha çalışman lazım :/\n");
    }
    if(not<=80&&not>50){
        printf("Geliştirilebilir!");
    }
    if(not>80&&not<=100){
        printf("Mükemmel!");
    }
    if(not>100){
        printf("Bu geçersiz bir nottur. 1-100 aralığında bir not giriniz.");

    }
    
    return 0;
}