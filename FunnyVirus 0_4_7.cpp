#pragma GCC optimize(2)
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int len;
int ord[200];
void SetFont(int size)
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize=sizeof cfi;
	cfi.nFont=0;
	cfi.dwFontSize.X=0;
	cfi.dwFontSize.Y=size;
	cfi.FontFamily=FF_DONTCARE;
	cfi.FontWeight=FW_NORMAL;
	wcscpy_s(cfi.FaceName,L"楷体");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE),FALSE,&cfi);
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFO consoleCurrentFont;
	GetCurrentConsoleFont(handle,FALSE,&consoleCurrentFont);
}
void Setsize()
{
	system("mode con cols=55 lines=15");
}
void Setsize_n()
{
	system("mode con cols=120 lines=30");
}
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
		cout<<"\n\n\n\n\n\n\n\t\t   你对你的电脑一无所知！！";
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
		cout<<"\n\n\n\n\n\n\n\t   YOU KNOW NOTHING ABOUT YOU COMPUTER!!!";
		Sleep(50);
		system("cls");
	}
}
void title_zh()
{
	system("title 惊喜，你的电脑中病毒了");
	cout<<"\n\n\n\n\n\n\t\t   惊喜，你的电脑中病毒了\n\n\n\t\t\t   大 危\n\n\n";
	Sleep(400);
	system("cls");
	color_zh();
	Sleep(2500);
	system("color 0a");
	SetFont(15);
	Setsize_n();
	system("tree c:\\");
}
void title_en()
{
	system("title Suprise!!!Your computer is hacked!!!!!");
	cout<<"\n\n\n\n\n\n\t   Suprise!!!Your computer is hacked!!!!!\n\n\n\t\t   You are DANGEROUS now!!\n\n\n";
	Sleep(400);
	system("cls");
	color_en();
	Sleep(2500);
	system("color 0a");
	SetFont(15);
	Setsize_n();
	system("tree c:\\");
}
void dir_and_del_zh()
{
	int n=20;
	while (n--) system("dir C:\\Windows\\SysWOW64");
	cout<<"正在销毁以上文件……请稍等";
	Sleep(500);
	system("cls");
	SetFont(140);
	system("mode con cols=55 lines=15");
	for (int i=20;i<=100;i+=20)
	{
	cout<<"\n  "<<i<<"\t%"<<endl;
		Sleep(2500);
		system("cls");
	}
	SetFont(15);
	Setsize_n();
	Sleep(4500);
}
void dir_and_del_en()
{
	int n=20;
	while (n--) system("dir C:\\Windows\\SysWOW64");
	cout<<"Deleting files...... Please wait.";
	Sleep(500);
	system("cls");
	SetFont(140);
	system("mode con cols=55 lines=15");
	for (int i=20;i<=100;i+=20)
	{
		cout<<"\n  "<<i<<"\t%"<<endl;
		Sleep(2500);
		system("cls");
	}
	SetFont(15);
	Setsize_n();
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
	cout<<"\nCopyright Giao子 2020~2021  FunnyVirus 0.4.7\n\n";
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
	SetFont(30);
	Setsize();
	title_zh();
	dir_and_del_zh();
	fool_zh();
	copyright();
	key_zh();
	press();
}
void en()
{
	SetFont(30);
	Setsize();
	title_en();
	SetFont(15);
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
	FunnyVirus 0.4.7
	Time :"2021/11/21 17:00 UTC+8:00
*/
