#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"
using namespace std;

// �ݽ��ȽϹ�����
class SpeechManager
{
public:
	// ����ѡ�� ����12��
	vector<int>v1;

	// ��һ�ֽ������� 6��
	vector<int>v2;

	// ʤ��ǰ�������� 3��
	vector<int>vVictory;

	// ��ű���Լ���Ӧ�ľ���ѡ������
	map<int, Speaker>m_Speaker;

	void show_menu();
	void exitSystem();
	
	// ��ʼ������
	void initSpeech();

	// ��ʼ������12��ѡ��
	void createSpeaker();

	SpeechManager();
	~SpeechManager();

private:
	int m_Index;
};