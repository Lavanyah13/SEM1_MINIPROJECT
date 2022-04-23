#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nMENU CARD \nSelect your dish: \n1.Momos \n2.Pizza \n3.Noodles \n4.Spring Rolls \n5.Chola Kulcha\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Momos.\nEnter the quantity: ");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\nTotal amount: %d",total);
    break;
  case 2:
    printf("\nYou have selected Pizza.\nEnter the quantity: ");
    scanf("%d",&qty);
    rate=120;
    total=qty*rate;
    printf("\nTotal amount: %d",total);
    break;
  case 3:
    printf("\nYou have selected Noodles.\nEnter the quantity: ");
    scanf("%d",&qty);
    rate=45;
    total=qty*rate;
    printf("\nTotal amount: %d",total);
    break;
  case 4:
    printf("\nYou have selected Spring Rolls.\nEnter the quantity: ");
    scanf("%d",&qty);
    rate=50;
    total=qty*rate;
    printf("\nTotal amount: %d",total);
    break;
  case 5:
    printf("\nYou have selected Chola Kulcha.\nEnter the quantity: ");
    scanf("%d",&qty);
    rate=30;
    total=qty*rate;
    printf("\nTotal amount: %d",total);
    break;
  default:
    printf("\nSorry, it's unavailable.%d",a);
    break;
 }
return 0;
}