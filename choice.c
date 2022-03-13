#include<stdio.h>
main()
{
	printf("Pick a dish : \n1. PIZZA Rs.239 \n2. BURGER Rs.129 \n3. PASTA Rs.179 \n4. FRENCH FRIES Rs. 99 \n5. SANDWICH Rs. 149\n YOUR CHOICE IS ");
	int pick=0;
	scanf("%d",&pick);
	switch(pick)
	{
		case 1:
			printf("You picked pizza at the cost of 239");
			break;
		case 2:
			printf("You picked burger at the cost of 129");
			break;
		case 3:
			printf("You picked pasta at the cost of 179");
            break;
		case 4:
		    printf("You have picked french fries at the cost of 99");
		    break;
		case 5:
			printf("You have picked sandwich at the cost of 149");
	}
}
