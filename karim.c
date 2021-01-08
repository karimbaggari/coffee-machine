#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int coffee=1 , jus=2 , milk=3 , soda=4 , the=5 , water=6 , power_drink=7, enter, money , min=8, coca = 1, fanta =2 , pepsi = 3 ,type , like=1;
	//display
		printf("hey sir please enter the number of youre choice : ");
		scanf("%d",&enter);
		//conditions display 
		switch(enter)
			{
				case 1 : printf("the price of coffee is : 11dh");
				break;
				case 2 : printf("the price of jus is : 17dh");
				break;
				case 3 : printf("the price of milk is : 9dh");
				break;
				case 4 : printf("the price of soda : 8dh");
				break;
				case 5 : printf("the price of the : 13dh");
				break;
				case 6 : printf("the price of water : 10dh");
				break;
				case 7 : printf("the price of power_drink : 31dh");
				break;
			default : printf("we are sorry sir we don't have your choice have a nice day ! \n");
			}
				
				//conditions buying 
					coffee = 11 ;
					jus = 17 ; 
					milk = 9;
					soda = 8;
					the = 13;
					water = 10;
					power_drink = 31;
			printf("\n please enter the price of your choice ");	
	scanf("%d",&money);
	min = 8;
			while (min > money)
				{
					printf(" we don't have this price'please enter another price");
					 printf("\n the price of coffee is : 11dh");
			
					 printf("\n the price of jus is : 17dh");
			
					 printf("\n the price of milk is : 9dh");
				
				 	 printf("\n the price of soda : 8dh");
				
				printf("\n the price of the : 13dh");
			
				 printf("\n the price of water : 10dh");
				
				 printf("\n the price of power_drink : 31dh");
				
			 printf("\n sorry we don't have your choice try to enter another price :  ",money);
			 	
			scanf("%d",&money); 
				}
				switch (money)
				{
					case 11 : printf("thank you we are preparing your coffee") ;
					break;
					case 17 : printf("thank you we are preparing your jus"); 
					break;
					case 9 : printf("thank you we are preparing your milk");
					break;
					case 13 : printf("thank you we are preparing your the") ;
					break;
					case 8 : break;
					case 10 : printf("thank you go to the reception for your battle of water");
					 break;
					case 31 : printf("thank you we only have redbull go for the reception to take it");
					break;
					default : printf("please look at the meny again");
					break;
				}
					if (money == 8)
						{
							printf("please select the battle of soda you want by typing the number");
								printf("\n coca = 1");
									printf("\n fanta = 2");
										printf("\n pepsi = 3 \n");
									
								
									 
											printf("i want : ");
										scanf("%d",&type);
										if ( type==1)
											{
											
											printf("thank you go to the reception for take your coca cola");
											}
										
										else if (type == 2)
											{
												printf("thank you go to reception for take your fanta");
											}
											else if (type==3) 
											 {
											 	printf("thank you go to reception for take your pepsi");
											 }
											 else {
											 	printf("we have no soda with that number \n ");
											 
											 }
										};
										printf("\n");
										printf("\n");
										printf("\n");
										printf("if you like how our program work please answer with 1 \n if you don't answer with 0 \n your answer is :  ");
										scanf("%d",&like);
											like ==1 ?  printf(" \n \t thank you we are proud of that's") : printf(" \n \t thank you we will make sure to create a better version");
											 
						
			
					
					
				
			
		
	return 0;


}

