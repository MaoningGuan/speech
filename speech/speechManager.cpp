#include "speechManager.h"

// 构造函数
SpeechManager::SpeechManager()
{
	// 在构造函数中，初始化属性
	this->initSpeech();

	// 创建选手
	this->createSpeaker();
}

// 析构函数
SpeechManager::~SpeechManager()
{
}


// 菜单功能
void SpeechManager::show_menu()
{
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
} 

// 退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

// 初始化属性
void SpeechManager::initSpeech()
{
	// 容器保证为空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	// 初始化比赛轮数
	this->m_Index = 1;
}

// 创建选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";

	for (size_t i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (size_t i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}

		// 12名选手编号
		this->v1.push_back(i + 10001);

		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

// 开始比赛 - 比赛流程控制
void SpeechManager::startSpeech()
{

}