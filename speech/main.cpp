#include <iostream>
#include "speechManager.h"
using namespace std;

int main()
{
	SpeechManager sm;

	int choice = 0;

	while (true)
	{
		sm.show_menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:  // ��ʼ����
			break;

		case 2:  // �鿴���������¼
			break;

		case 3:  // ��ձ�����¼
			break;

		case 0:  // �˳�ϵͳ
			sm.exitSystem();
			break;

		default:  // ����
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}