#include <conio.h>
#include <stdlib.h>
#include <clocale>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;
void print_menu() {
    system("cls");
    cout << "��� �� ������?" << endl;
    cout << "1. ������ ����" << endl;
    cout << "2. �����" << endl;
    cout << ">";
}

int get_variant(int count) {
    int variant;
    char s[100];
    scanf("%s", s);

    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        printf("������������ ����, ��������� ����� ��������: ");
        scanf("%s", s);
    }

    return variant;
}

void test ()
{
setlocale(LC_ALL, "rus"); // ���������� ����������� ���������
    char slovo[1000]; // ����� �������������� �������� ������������ �� ����� ������
    int player, otvet=0, totvet[2]={2,4}, prodolzit, ch, i=0, vopros, stroka;	
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
}



int main()
{
	setlocale(LC_ALL, "Russian");
    int variant;
    do {
        print_menu();
        variant = get_variant(2);
        switch (variant) {

            case 1:
            	test ();
                cout << "�� ��������� ��" << endl;
                break;
        }
        if (variant !=2)
            system("pause");
    } while (variant != 2);

    return 0;
}
