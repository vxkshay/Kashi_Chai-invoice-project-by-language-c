//PROJECT IS ABOUT.
//KASHI CHAI CORNER-BILLING SYSTEM.
#include<stdio.h>

int main()
{
    int price_samosa=15;
    int price_masala=25;
    int price_coffe=12;
    int price_lassi=30;
    int quantity;
    
    int code_input;
    while(code_input!=5){
    printf("\n==========================================================\n");
    printf("                     KASHI CHAI CORNER                      \n");
    printf("============================================================\n");
    printf("code      |              item            | price |\n");
    printf(" 1                  Masala chai              15\n");
    printf(" 2                     Coffee                25\n");
    printf(" 3                     Samosa                12\n");
    printf(" 4                      lassi                30\n");
    printf(" 5                  Finish the bill          - \n");
    printf("Input Your Item Code:");

    scanf("%d",&code_input);
    if(code_input<0)
{
    printf("Input is invalid");
}
else if(code_input==1){
             printf("You selected masala chai\n");
             printf("Enter quantity:");
            scanf("%d",&quantity);
             price_masala=15;
             price_masala=price_masala*quantity;

            printf("Your total is:%d",price_masala);}

   
else if(code_input==2){
                  printf("You selected coffee\n");
             printf("Enter quantity:");
            scanf("%d",&quantity);
             price_coffe=15;
             price_coffe=price_coffe*quantity;

              printf("Your total is:%d",price_coffe);
            }
else if(code_input==3){
                  printf("You selected samosa\n");
             printf("Enter quantity:");
            scanf("%d",&quantity);
             price_samosa=15;
             price_samosa=price_samosa*quantity;
      
              printf("Your total is:%d",price_samosa);
            }
else if(code_input==4){
                 printf("You selected lassi\n");
             printf("Enter quantity:");
            scanf("%d",&quantity);
             price_lassi=15;
             price_lassi=price_lassi*quantity;
           
              printf("Your total is:%d",price_lassi);
            }
          
        }   

return 0;

}



