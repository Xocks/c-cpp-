#include <iostream>
using namespace std;
#include <string>
//ѧ���ṹ��
struct student {
	string Sname; //ѧ������
	int score; //ѧ���ɼ�
};
//������ʦ�ṹ��
struct teacher
{
	string Tname; //��ʦ����
	student stu[5]; //��ʦ���̵�ѧ��
};
//����ʦѧ�����ݺ���
void dataofscore(teacher Tarray[], int len) 
{
	string nameseed =  "ABCDE";
	
	//��ʦ����
	for (int i = 0; i < len; i++) 
	{
		Tarray[i].Tname = "��ʦ_";
		Tarray[i].Tname += nameseed[i]; //��ʦ����
		//��ʦ����ѧ������
		for (int j = 0; j < 5; j++) 
		{
			Tarray[i].stu[j].Sname = "ѧ��_";
			Tarray[i].stu[j].Sname += nameseed[j]; //ѧ������
		
			Tarray[i].stu[j].score = 60; //ѧ���ɼ�
		 
		}
	}
}

void printdata(teacher Tarray[], int len) 
{
	for (int i = 0; i < len; i++) 
	{
		cout << Tarray[i].Tname << endl;//�����ʦ����
		for (int j = 0; j < 5; j++)
		{
			cout << Tarray[i].stu[j].Sname << " " << Tarray[i].stu[j].score << endl; //���ѧ�������ͳɼ�
		
		}
	}
}
int main() {
	teacher Tarr[3]; //������ʦ����
	int len = sizeof(Tarr) / sizeof(Tarr[0]); //������ʦ���鳤��
	dataofscore(Tarr, len); //����ʦѧ�����ݺ���
	printdata(Tarr, len); //�����ʦѧ�����ݺ���

    system("pause");

    return 0;
}