#include <iostream>
#include <string>
#include "speechManager.h"
using namespace std;

int main()
{
	SpeechManager sm;

	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "选手编号：" << it->first << " 姓名：" << it->second.m_Name << " 成绩1：" << it->second.m_Score[0] 
	//		<< " 成绩2：" << it->second.m_Score[1] << endl;
	//}

	int choice = 0;

	while (true)
	{
		sm.show_menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:  // 开始比赛
			break;

		case 2:  // 查看往届比赛记录
			break;

		case 3:  // 清空比赛记录
			break;

		case 0:  // 退出系统
			sm.exitSystem();
			break;

		default:  // 清屏
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}