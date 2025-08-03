#include <iostream>
using namespace std;
#include <string>
//学生结构体
struct student {
	string Sname; //学生姓名
	int score; //学生成绩
};
//创建老师结构体
struct teacher
{
	string Tname; //老师姓名
	student stu[5]; //老师所教的学生
};
//给老师学生数据函数
void dataofscore(teacher Tarray[], int len) 
{
	string nameseed =  "ABCDE";
	
	//老师数据
	for (int i = 0; i < len; i++) 
	{
		Tarray[i].Tname = "老师_";
		Tarray[i].Tname += nameseed[i]; //老师姓名
		//老师所带学生数据
		for (int j = 0; j < 5; j++) 
		{
			Tarray[i].stu[j].Sname = "学生_";
			Tarray[i].stu[j].Sname += nameseed[j]; //学生姓名
		
			Tarray[i].stu[j].score = 60; //学生成绩
		 
		}
	}
}

void printdata(teacher Tarray[], int len) 
{
	for (int i = 0; i < len; i++) 
	{
		cout << Tarray[i].Tname << endl;//输出老师姓名
		for (int j = 0; j < 5; j++)
		{
			cout << Tarray[i].stu[j].Sname << " " << Tarray[i].stu[j].score << endl; //输出学生姓名和成绩
		
		}
	}
}
int main() {
	teacher Tarr[3]; //创建老师数组
	int len = sizeof(Tarr) / sizeof(Tarr[0]); //计算老师数组长度
	dataofscore(Tarr, len); //给老师学生数据函数
	printdata(Tarr, len); //输出老师学生数据函数

    system("pause");

    return 0;
}