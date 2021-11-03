#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;
int main()
{
	system("color 0a");
	printf("%s","选择一个语言。  Pick a language.\n				ZH=简体中文  EN=English(US)\n");
	string lang;
	cin>>lang;
	if (lang=="ZH")
	{
		printf("%s","惊喜，你的电脑中病毒了\n\n\n大 危\n\n\n");
		Sleep(2500);
		system("tree");
		int n=20;
		while (n--) system("dir");
		printf("正在销毁以上文件……请稍等\n");
		printf("%s%d%s%d%s%d%s%d%s%d","%",20,"\n%",40,"\n%",60,"\n%",80,"\n%",100);
		Sleep(6500);
		printf("%s","\n\n\n\n\n\n\n\n\n    						愚  人  节  快  乐 [/doge]\n\n\n\n\n\n");
		Sleep(4000);
		printf("%s","\nCopyright Giao子 2020~2021  FunnyVirus 0.2");
		printf("%s","\n\n    						按Q+Enter键退出……\n");
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
		printf("%s","Suprise!!!Your computer is hacked!!!!!\n\n\nYou are DANGEROUS now!HA HA!\n\n\n");
		Sleep(2500);
		system("tree");
		int n=20;
		while (n--) system("dir");
		printf("Deleting files...... Please wait.\n");
		printf("%s%d%s%d%s%d%s%d%s%d","%",20,"\n%",40,"\n%",60,"\n%",80,"\n%",100);
		Sleep(6500);
		printf("%s","\n\n\n\n\n\n\n\n\n    						Happy Fool's Day!![/doge]\n\n\n\n\n\n");
		Sleep(4000);
		printf("%s","\nCopyright Giao子 2020~2021  FunnyVirus 0.2");
		printf("%s","\n\n    						Press Q+Enter to quit......\n");
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
		printf("%s","无此语言！  No such language!");
		Sleep(1000);
	}
	return 0;
}

/*  Copyright Giao子 2020~2021
	FunnyVirus 0.2
	Time :"2021/09/06 21:14 UTC+8:00
*/
