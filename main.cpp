#include <conio.h>
#include <stdlib.h>
#include <clocale>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

main()
{
int player, otvet=0, totvet[2]={2,4}, prodolzit, ch, i=0, vopros, stroka;	
setlocale(LC_ALL, "rus"); // ���������� ����������� ���������
    char slovo[1000]; // ����� �������������� �������� ������������ �� ����� ������
    ifstream fin("quizrunner.txt"); // ������� ���� ��� ������
 for(vopros = 0; vopros<2; vopros++,i++)
 {
    for(stroka = 0; stroka<6; stroka++)
	{
		fin.getline(slovo, 1000); // ������� ������ �� �����
    	if(stroka==5)
    		{
    			//totvet[i]=slovo[0];
				scanf("%d",&player);
				if(totvet[i] == player)
				{
					otvet++;
					system("CLS");
					continue;	
				}	
				else
				{
					printf ("\n���������� �����: %d",totvet[i]);
					printf ("\n������� �� ����� ������: \n");
				    if (ch != 13 or ch != 32)
				    {
						cin.get();
						ch = getch();
				    	system("CLS");
				    	continue;
					}
				}
			}
    	cout << slovo << endl; // ���������� ��� ������
 	}
 }			
printf("��� ���������:\n");
printf("���-�� ���������� �������: %d/2",otvet);
system("PAUSE");
return 0;
}
  

