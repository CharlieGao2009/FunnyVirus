#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int len;
int ord[200];
void rand_len()
{
	srand(time(0));
	len=rand()%12+150;
}
void get_color()
{
	srand(time(0));
	for (int i=1;i<=len;i++)
		ord[i]=rand()%20000;
	random_shuffle(ord+1,ord+len+1);
}
void color_zh()
{
	get_color();
	for (int i=1;i<=len;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|ord[i]);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t你对你的电脑一无所知！！";
		Sleep(50);
		system("cls");
	}
}
void color_en()
{
	get_color();
	for (int i=1;i<=len;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|ord[i]);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tYOU KNOW NOTHING ABOUT YOU COMPUTER!!!";
		Sleep(50);
		system("cls");
	}
}
void title_zh()
{
	system("title 惊喜，你的电脑中病毒了");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t惊喜，你的电脑中病毒了\n\n\n\t\t\t\t\t\t\t大 危\n\n\n";
	Sleep(400);
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
	Sleep(400);
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
	cout<<"正在销毁以上文件……请稍等";
	Sleep(500);
	system("cls");
	for (int i=20;i<=100;i+=20)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t%"<<i<<endl;
		Sleep(2500);
		system("cls");
	}
	Sleep(4500);
}
void dir_and_del_en()
{
	int n=20;
	while (n--) system("dir C:\\Windows\\SysWOW64");
	cout<<"Deleting files...... Please wait.";
	Sleep(500);
	system("cls");
	for (int i=20;i<=100;i+=20)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t%"<<i<<endl;
		Sleep(2500);
		system("cls");
	}
	Sleep(4500);
}
void fool_zh()
{
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t 愚  人  节  快  乐 [/doge]\n\n\n\n\n\n";
}
void fool_en()
{
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t  Happy Fool's Day!![/doge]\n\n\n\n\n\n";
}
void copyright()
{
	cout<<"\nCopyright Giao子 2020~2021  FunnyVirus 0.4.3\n\n";
}
void key_zh()
{
	cout<<"\t   \t\t\t\t\t按Q+Enter键退出……\n";
}
void key_en()
{
	cout<<" \t\t\t\t\t\tPress Q+Enter to quit...\n";
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
	rand_len();
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
	FunnyVirus 0.4.3
	Time :"2021/11/08 17:38 UTC+8:00
*/
