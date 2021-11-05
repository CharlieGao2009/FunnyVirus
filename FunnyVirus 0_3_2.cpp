#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(1);
	cin.tie(0);
	cout.tie(0);
	system("color 0a");
	cout<<"选择一个语言。  Pick a language.\n				ZH=简体中文  EN=English(US)\n";
	string lang;
	cin>>lang;
	if (lang=="ZH")
	{
		cout<<"惊喜，你的电脑中病毒了\n\n\n大 危\n\n\n";
		Sleep(2500);
		system("tree c:\\");
		int n=20;
		while (n--) system("dir");
		cout<<"正在销毁以上文件……请稍等\n%20\n%40\n%60\n%80\n%100";
		Sleep(6500);
		cout<<"\n\n\n\n\n\n\n\n\n    						愚  人  节  快  乐 [/doge]\n\n\n\n\n\n";
		cout<<"\nCopyright Giao子 2020~2021  FunnyVirus 0.3.2\n\n    						按Q+Enter键退出……\n";
		char q;
		cin>>q;
		while (1)
		{
			if (q=='q') return 0;
			else cin>>q;
		}
	}
	else if (lang=="EN")
	{
		cout<<"Suprise!!!Your computer is hacked!!!!!\n\n\nYou are DANGEROUS now!HA HA!\n\n\n";
		Sleep(2500);
		system("tree c:\\");
		int n=20;
		while (n--) system("dir");
		cout<<"Deleting files...... Please wait.\n%20\n%40\n%60\n%80\n%100";
		Sleep(6500);
		cout<<"\n\n\n\n\n\n\n\n\n    						Happy Fool's Day!![/doge]\n\n\n\n\n\n";
		cout<<"\nCopyright Giao子 2020~2021  FunnyVirus 0.3.2\n\n    						Press Q+Enter to quit......\n";
		char q;
		cin>>q;
		while (1)
		{
			if (q=='q') return 0;
			else cin>>q;
		}
	}
	else
	{
		cout<<"无此语言！  No such language!";
		Sleep(1000);
	}
	return 0;
}

/*  Copyright Giao子 2020~2021
	FunnyVirus 0.3.2
	Time :"2021/10/24 21:19 UTC+8:00
*/ 
