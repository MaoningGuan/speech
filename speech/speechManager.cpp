#include "speechManager.h"

// ���캯��
SpeechManager::SpeechManager()
{
	// �ڹ��캯���У���ʼ������
	this->initSpeech();

	// ����ѡ��
	this->createSpeaker();
}

// ��������
SpeechManager::~SpeechManager()
{
}


// �˵�����
void SpeechManager::show_menu()
{
	cout << "********************************************" << endl;
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
} 

// �˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

// ��ʼ������
void SpeechManager::initSpeech()
{
	// ������֤Ϊ��
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	// ��ʼ����������
	this->m_Index = 1;
}

// ����ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";

	for (size_t i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (size_t i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}

		// 12��ѡ�ֱ��
		this->v1.push_back(i + 10001);

		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

// ��ʼ���� - �������̿���
void SpeechManager::startSpeech()
{

}