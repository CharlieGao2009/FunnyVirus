#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int ord[8001];
void get_color()
{
	for (int i=1;i<=800;i++)
		ord[i]=i;
	random_shuffle(ord+1,ord+8001);
}
void color_zh()
{
	get_color();
	for (int i=1;i<=800;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|ord[i]);
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t惊喜，你的电脑中病毒了\n\n\n\t\t\t\t\t\t\t大 危\n\n\n";
		Sleep(50);
		system("cls");
	}
}
void color_en()
{
	get_color();
	for (int i=1;i<=800;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|ord[i]);
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tSuprise!!!Your computer is hacked!!!!!\n\n\n\t\t\t\t\t\tYou are DANGEROUS now!!\n\n\n";
		Sleep(50);
		system("cls");
	}
}
void title_zh()
{
	system("title 惊喜，你的电脑中病毒了");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t惊喜，你的电脑中病毒了\n\n\n\t\t\t\t\t\t\t大 危\n\n\n";
	system("cls");
	color_zh();
	Sleep(2500);
	system("color 0a");
	system("tree c:\\");
}
void title_en()
{
	system("title Suprise!!!Your computer is hacked!!!!!");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tSuprise!!!Your computer is hacked!!!!!\n\n\n\t\t\t\t\t\tYou are DANGEROUS now!!\n\n\n";
	system("cls");
	color_en();
	Sleep(2500);
	system("color 0a");
	system("tree c:\\");
}
void dir_and_del_zh()
{
	int n=20;
	while (n--) system("dir C:\\Windows\\SysWOW64");
	cout<<"正在销毁以上文件……请稍等\n%20\n%40\n%60\n%80\n%100";
	Sleep(6500);
	system("cls");
}
void dir_and_del_en()
{
	int n=20;
	while (n--) system("dir C:\\Windows\\SysWOW64");
	cout<<"Deleting files...... Please wait.\n%20\n%40\n%60\n%80\n%100";
	Sleep(6500);
	system("cls");
}
void fool_zh()
{
	cout<<"\n\n\n\n\n\n\n\n\n    						愚  人  节  快  乐 [/doge]\n\n\n\n\n\n";
}
void fool_en()
{
	cout<<"\n\n\n\n\n\n\n\n\n    						Happy Fool's Day!![/doge]\n\n\n\n\n\n";
}
void copyright()
{
	cout<<"\nCopyright Giao子 2020~2021  FunnyVirus 0.4.1 Release-Candidate 1\n\n";
}
void key_zh()
{
	cout<<"    						按Q+Enter键退出……\n";
}
void key_en()
{
	cout<<"							Press Q+Enter to quit...\n";
}
void press()
{
	char q;
	cin>>q;
	while (1)
	{
		if (q=='q') return;
		else cin>>q;
	}
}
void zh()
{
	title_zh();
	dir_and_del_zh();
	fool_zh();
	copyright();
	key_zh();
	press();
}
void en()
{
	title_en();
	dir_and_del_en();
	fool_en();
	copyright();
	key_en();
	press();
}
void none()
{
	cout<<"无此语言！  No such language!";
	Sleep(1000);
}
int main()
{
	ios::sync_with_stdio(1);
	cin.tie(0);
	cout.tie(0);
	cout<<"选择一个语言。  Pick a language.\n				ZH=简体中文  EN=English(US)\n";
	string lang;
	cin>>lang;
	system("cls");
	if (lang=="ZH") zh();
	else if (lang=="EN") en();
	else none();
	return 0;
}

/*  Copyright Giao子 2020~2021
	FunnyVirus 0.4.1 Release-Candidate 1
	Time :"2021/11/07 14:53 UTC+8:00
*/
