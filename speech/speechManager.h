#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"
using namespace std;

// 演讲比较管理类
class SpeechManager
{
public:
	// 比赛选手 容器12人
	vector<int>v1;

	// 第一轮晋级容器 6人
	vector<int>v2;

	// 胜利前三名容器 3人
	vector<int>vVictory;

	// 存放编号以及对应的具体选手容器
	map<int, Speaker>m_Speaker;

	void show_menu();
	void exitSystem();
	
	// 初始化属性
	void initSpeech();

	// 初始化创建12名选手
	void createSpeaker();

	SpeechManager();
	~SpeechManager();

private:
	int m_Index;
};