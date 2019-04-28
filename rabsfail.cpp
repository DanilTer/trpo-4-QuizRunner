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
	setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    char slovo[1000]; // буфер промежуточного хранения считываемого из файла текста
    ifstream fin("quizrunner.txt"); // открыли файл для чтения
 for(vopros = 0; vopros<10; vopros++)
 {
    for(stroka = 0; stroka<6; stroka++)
	{
		fin.getline(slovo, 1000); // считали строку из файла
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
					printf ("\nПравильные ответ: %d",totvet);
					printf ("\nНажмите на любую кнопку: ");
				    while (ch != 13)
				    {
				    	ch = getch();
				    	cout << " " << (char)ch << endl;
				    	break;
				    }
				}
			}
    	cout << slovo << endl; // напечатали эту строку
 	}
 }
    fin.close();
    setlocale(LC_ALL, "rus");
	ofstream fout;
	fout.open("result.txt");
	fout << "ТЕсты";
	fout.close();
    
	system("pause");
    return 0;
}
