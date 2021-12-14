#include<stdio.h>
void main()
{
	printf("MENU\n1.Pasta\n2.Pizza\n3.Burgur\n4.Sandwich\n5.French Fries\n");
	printf("Enter Your Choice:");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food Item - Pasta \nPrice-Rs.179/-");
			break;
		case 2:
			printf("Food Item - Pizza \nPrice-Rs.239/-");
			break;
		case 3:
	        	printf("Food Item - Burger \nPrice-Rs.129/-");
	        	break;
		case 4:
			printf("Food Item - Sandwich \nPrice-Rs.149/-");
		        break;
		case 5:
			printf("Food Item - French Fries \nPrice-Rs.99/-");
			break;
		default:printf("Use The Default Case");	
	}
}
