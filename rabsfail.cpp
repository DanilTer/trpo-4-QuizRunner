#include <conio.h>
#include <stdlib.h>
#include <clocale>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{	
int vopros, player, stroka, otvet, totvet, prodolzit,ch=0;   
	setlocale(LC_ALL, "rus"); // ���������� ����������� ���������
    char slovo[1000]; // ����� �������������� �������� ������������ �� ����� ������
    ifstream fin("quizrunner.txt"); // ������� ���� ��� ������
 for(vopros = 0; vopros<10; vopros++)
 {
    for(stroka = 0; stroka<6; stroka++)
	{
		fin.getline(slovo, 1000); // ������� ������ �� �����
    	if(stroka==5)
    		{
    			totvet=slovo[0];
				scanf("%d",&player);
				if(totvet == player)
				{
					otvet++;
					continue;	
				}	
				else
				{
					printf ("\n���������� �����: %d",totvet);
					printf ("\n������� �� ����� ������: ");
				    while (ch != 13)
				    {
				    	ch = getch();
				    	cout << " " << (char)ch << endl;
				    	break;
				    }
				}
			}
    	cout << slovo << endl; // ���������� ��� ������
 	}
 }
    fin.close();
    setlocale(LC_ALL, "rus");
	ofstream fout;
	fout.open("result.txt");
	fout << "�����";
	fout.close();
    
	system("pause");
    return 0;
}
