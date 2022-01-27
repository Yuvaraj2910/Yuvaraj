#include <stdio.h>

int main()
{
	int cho,qty,i,net=0;
	Menu:	
	printf("************************  HOTEL SRI  *************************");
	
	printf("\n\n\t MENU CARD :");
	printf("\n\n\t\t01. PAROTA               RS:20");
	printf("\n\t\t02. DOSA                 RS:25");
	printf("\n\t\t03. CHAPPATHI            RS:35");
	printf("\n\t\t04. EGG OMELETTE         RS:15");
	printf("\n\t\t05. EGG KALAKI           RS:15");
	printf("\n\t\t06. FULL MEALS           RS:90");
	printf("\n\t\t07. EGG RICE             RS:60");
	printf("\n\t\t08. CHICKEN NOODLES      RS:80");
	printf("\n\t\t09. CHICKEN RICE         RS:100");
	printf("\n\t\t10. EMPTY BIRYANI        RS:70");
	printf("\n\t\t11. CHICKEN BIRYANI      RS:160");
   	printf("\n\t\t12. MUTTON BIRYANI       RS:220");
   	printf("\n\n    Enter Your Food Choice : "); 
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:
			printf("\n    You have selected PAROTA   ");
			printf("\n\n    Enter The Quantity : ");
			scanf("%d",&qty);
			net=net+(qty*20);
		    break;
		case 2:
		    printf("\n    You have selected DOSA   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*25);
			break;
		case 3:
		    printf("\n    You have selected CHAPPATHI   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*35);
			break;	
		case 4:
		    printf("\n    You have selected EGG OMELETTE   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*15);
			break;		
		case 5:
		    printf("\n    You have selected EGG KALAKI   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*15);
			break;	
		case 6:
		    printf("\n    You have selected FULL MEALS   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*90);
			break;	
		case 7:
		    printf("\n    You have selected EGG RICE   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*60);
			break;	
		case 8:
		    printf("\n    You have selected CHICKEN NOODLES   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*80);
			break;	
		case 9:
		    printf("\n    You have selected CHICKEN RICE   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*100);
			break;
		case 10:
		    printf("\n    You have selected EMPTY BIRYANI   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*70);
			break;	
		case 11:
		    printf("\n    You have selected CHICKEN BIRYANI   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*160);
			break;	
		case 12:
		    printf("\n    You have selected MUTTON BIRYANI   ");
		    printf("\n\n    Enter The Quantity : ");
		    scanf("%d",&qty);
		    net=net+(qty*220);
			break;	
		default:
			printf("\n    Invalid Food Selection   ");
			break;
	}
	
	printf("\n\n    Do You Want See The Menu Again press 1 : ");
	scanf("%d",&i);
	if(i==1)
	{
		goto Menu;
	}
	
	printf("\n\n\n                    Total Amount RS : %d",net);
	
	printf("\n\n\n\n\n~~~~~~~~~~~~~~~~  Thank You Visit Again  ~~~~~~~~~~~~~~~~");
	return 0;
}
