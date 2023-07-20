#include<stdio.h>

int main()
{
    int item,qty,price,amount,totalamt;
    char antor;
    
    do
    {
        printf("\n        menu        ");
        printf("\n1.Pizza     Price=180rs/pcs");
        printf("\n2.Burger    Price=100rs/pcs");
        printf("\n3.Dosa      Price=120rs/pcs");
        printf("\n4.Idli      Price=50rs/pcs");

    
        printf("\n\nplease enter your choose:");
        scanf("%d",&item);

   

        switch(item)
      {
        case 1:
        printf("you have selected Pizza");
        price=180;
        break;
        
        case 2:
        printf("you have selected Burger");
        price=100;
        break;
      
        case 3:
        printf("you have selected Dosa");
        price=120;
        break;

        case 4:
        printf("you have selected Idli");
        price=50;
        break;
        
      }

       printf("\n\nenter the Quantity:");
       scanf("%d",&qty);

       amount=price*qty;
       printf("\namount=%d",amount);

       totalamt=totalamt+amount;
       printf("\nTotal amount=%d",totalamt);

       printf("\ndo you want place more order? y / n :");
       antor=getche();
       
    }
    while(antor == 'y' || antor == 'Y');

    return 0;

     
}
    