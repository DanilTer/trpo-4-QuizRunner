#include <conio.h>
#include <stdlib.h>
#include <clocale>
#include <ctime>
#include <iostream>

using namespace std;

main()
{
int player, otvet=0, totvet, prodolzit;
	printf("1. Vopros");	
		totvet = 3;
		printf("\n1. Otvet");
		printf("\n2. Otvet");
		printf("\n3. Otvet");
		printf("\n4. Otvet\n");
		    printf("Otvet: ");
				scanf("%d",&player);
		    		if(player == totvet)
		    			{
		    			otvet++;	
						}
						else
						{
							printf ("\nPravilniy otvet: %d",totvet);
						    printf ("\nVvedite luboe chislo dlya prodolzeniya: ");
						    getch();
						}
	system("CLS");	
	printf("2. Vopros");
		totvet = 1;
		printf("\n1. Otvet");
		printf("\n2. Otvet");
		printf("\n3. Otvet");
		printf("\n4. Otvet\n");
			printf("Otvet: ");
				scanf("%d",&player);
		        		if(player == 1)
		    			{
		    			otvet++;	
						}
						else
						{
							printf ("\nPravilniy otvet: %d",totvet);
							printf ("\nVvedite luboe chislo dlya prodolzeniya: ");
						    getch();
						}
	system("CLS");
	
	printf("Vas resultat:\n");
	printf("Kol-vo pravylnyh otvetov %d/2",otvet);
}
  

