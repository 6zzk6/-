#include<bits/stdc++.h>
#include<windows.h>
#include<dos.h>
#include<time.h>
#include<conio.h>

using namespace std;

int n=1,dian=100;

inline void save()                      //保存    
{
    ofstream outFile;
    outFile.open("D:\\save.txt");
    outFile<<n;
    outFile.close();
}

inline void init()                      //读入   
{
    ifstream inFile;
    inFile.open("D:\\save.txt");
    inFile>>n;
    inFile.close();
}

inline void in()                        //初始化
{
    for(int i=1;i<=40;i++)
    {
        if(i%4==1) cout<<"\n\n\n ◇◆\n ◆◆\n";
        if(i%4==2) cout<<"\n\n\n ◆◇\n ◆◆\n";
        if(i%4==3) cout<<"\n\n\n ◆◆\n ◆◇\n";
        if(i%4==0) cout<<"\n\n\n ◆◆\n ◇◆\n";
        cout<<"\n 加载中..."<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"抵制不良游戏 拒绝盗版游戏 注意自我保护 谨防受骗上当"<<endl;
        cout<<"适度游戏益脑 沉迷游戏伤身 合理安排时间 享受健康生活"<<endl;
        Sleep(100);
        system("cls");
    }
}

inline void shezhi()                    //设置 
{
	char a;
	system("mode con cols=75 lines=30");
    system("title 哔哔机game");
    printf("0=黑色       8=灰色\n");
    printf("1=蓝色       9=淡蓝色\n");
    printf("2=绿色       A=淡绿色\n");
    printf("3=湖蓝色     B=淡浅绿色\n");
    printf("4=红色       C=淡红色\n");
    printf("5=紫色       D=淡紫色\n");
    printf("6=黄色       E=淡黄色\n");
    printf("7=白色       F=亮白色\n");
    char ak[99999]=" 0",bk[99999]="color ";
    puts("请选择需要的背景色和前景色:");
    printf("背景色:");
    ak[0]=getche();
    printf("\n");
    printf("前景色:");
    ak[1]=getche();
    system(strcat(bk,ak));
    system("cls");	
}

inline void bibi()                      //哔哔 
{
	char c;
	switch(n)
	{
	case 1:
	{
	    puts("O泡时间到！");Sleep(1);
		puts("给我O泡~给我O泡~O泡果奶~O！O！O！我要O泡~我要O泡~O泡果奶~要！要！要！"); Sleep(1);
		puts("喝O泡果奶~ 把清凉抱抱 ；喝O泡果奶~ 把好喝抱抱 ；给我O泡！给我O泡 ！我要O泡！我要O泡 ！给我O泡！给我O泡 ！我要O泡！我要O泡 ！");Sleep(1);
		puts("O泡果奶我还要！旺旺！");Sleep(1);
	} break;
	case 2:
	{
	    puts("只因你太美 baby 只因你太美 baby");Sleep(1);
	    puts("只因你实在是太美 baby");Sleep(1);
	    puts("只因你太美 baby");Sleep(1);
	    puts("迎面走来的你让我如此蠢蠢欲动");Sleep(1);
	    puts("这种感觉我从未有");Sleep(1);
	    puts("Cause I got a crush on you who you");Sleep(1);
	    puts("你是我的我是你的谁");Sleep(1);
	    puts("再多一眼看一眼就会爆炸");Sleep(1);
	    puts("再近一点靠近点快被融化");Sleep(1);
	    puts("想要把你占为己有 baby bae");Sleep(1);
	    puts("不管走到哪里");Sleep(1);
	    puts("都会想起的人是你 you you");Sleep(1);
	    puts("我应该拿你怎样");Sleep(1);
	    puts("Uh 所有人都在看着你");Sleep(1);
	    puts("我的心总是不安");Sleep(1);
	    puts("Oh 我现在已病入膏肓");Sleep(1);
	    puts("Eh oh");Sleep(1);
	    puts("难道真的因你而疯狂吗");Sleep(1);
	    puts("我本来不是这种人");Sleep(1);
	    puts("因你变成奇怪的人");Sleep(1);
	    puts("第一次呀变成这样的我");Sleep(1);
	    puts("不管我怎么去否认");Sleep(1);
	    puts("只因你太美 baby 只因你太美 baby");Sleep(1);
	    puts("只因你实在是太美 baby");Sleep(1);
	    puts("只因你太美 baby");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("现在确认地告诉我");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("你到底属于谁");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("现在确认地告诉我");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("你到底属于谁");Sleep(1);
	    puts("就是现在告诉我");Sleep(1);
	    puts("跟着那节奏 缓缓 make wave");Sleep(1);
	    puts("甜蜜的奶油 it's your birthday cake");Sleep(1);
	    puts("男人们的 game call me 你恋人");Sleep(1);
	    puts("别被欺骗愉快的 I wanna play");Sleep(1);
	    puts("我的脑海每分每秒为你一人沉醉");Sleep(1);
	    puts("最迷人让我神魂颠倒是你身上香水");Sleep(1);
	    puts("Oh right baby I'm fall in love with you");Sleep(1);
	    puts("我的一切你都拿走");Sleep(1);
	    puts("只要有你就已足够");Sleep(1);
	    puts("我到底应该怎样");Sleep(1);
	    puts("Uh 我心里一直很不安");Sleep(1);
	    puts("其他男人们的视线");Sleep(1);
	    puts("Oh 全都只看着你的脸");Sleep(1);
	    puts("Eh oh");Sleep(1);
	    puts("难道真的因你而疯狂吗");Sleep(1);
	    puts("我本来不是这种人");Sleep(1);
	    puts("因你变成奇怪的人");Sleep(1);
	    puts("第一次呀变成这样的我");Sleep(1);
	    puts("不管我怎么去否认");Sleep(1);
	    puts("只因你太美 baby 只因你太美 baby");Sleep(1);
	    puts("只因你实在是太美 baby");Sleep(1);
	    puts("只因你太美 baby");Sleep(1);
	    puts("我愿意把我的全部都给你");Sleep(1);
	    puts("我每天在梦里都梦见你");Sleep(1);
	    puts("还有我闭着眼睛也能看到你");Sleep(1);
	    puts("现在开始我只准你看我");Sleep(1);
	    puts("I don't wanna wake up in dream");Sleep(1);
	    puts("我只想看你这是真心话");Sleep(1);
	    puts("只因你太美 baby 只因你太美 baby");Sleep(1);
	    puts("只因你实在是太美 baby");Sleep(1);
	    puts("只因你太美 baby");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("现在确认的告诉我");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("你到底属于谁");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("现在确认的告诉我");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("你到底属于谁就是现在告诉我");Sleep(1);
	}break;
	case 3:
	{
		puts("每时每刻，准时送达！");Sleep(1);
		puts("我是世界上最快的飞机");Sleep(1);
		puts(" ");
		puts("一飞冲天 到世界各地");Sleep(1);
		puts("新的任务 新的挑战");Sleep(1);
		puts("超级飞侠 在身边");Sleep(1);
		puts("神奇世界 千变万化");Sleep(1);
		puts("一起发现");Sleep(1);
		puts("乐迪");Sleep(1);
		puts("有颗热血的心");Sleep(1);
		puts("多多");Sleep(1);
		puts("充满发明热情");Sleep(1);
		puts("无限爱心 小爱");Sleep(1);
		puts("俏皮的 酷飞");Sleep(1);
		puts("超级飞侠 我爱你");Sleep(1);
		puts("收到");Sleep(1);
		puts("看 超级飞侠");Sleep(1);
		puts("困难从不怕");Sleep(1);
		puts("去 帮助朋友");Sleep(1);
		puts("是 我的使命");Sleep(1);
		puts("超级飞侠我爱你");Sleep(1);
		puts("天涯海角");Sleep(1);
		puts("世界多美妙");Sleep(1);
		puts("随时随地");Sleep(1);
		puts("伴你左右");Sleep(1);
		puts("超级飞侠有冲劲");Sleep(1);
		puts("亚洲非洲 欧洲美洲");Sleep(1);
		puts("牵着你走");Sleep(1);
		puts("让 超级飞侠");Sleep(1);
		puts("快 快到我家");Sleep(1);
		puts("让 我的梦想");Sleep(1);
		puts("明天就实现");Sleep(1);
		puts("超级飞侠飞冲天");Sleep(1);
		puts("看 超级飞侠");Sleep(1);
		puts("困难从不怕");Sleep(1);
		puts("去 帮助朋友");Sleep(1);
		puts("是 我的使命");Sleep(1);
		puts("超级飞侠我爱你");Sleep(1);
	}
    }
    Sleep(1000);
    c=getchar();
    c=getchar();
}

inline void prbi()                      //等级 
{
	cout<<"大家好！我是 哔哔机 v"<<n<<".0 ";
	switch(n)
	{
		case 1:printf("高效"); break;
		case 2:printf("节能"); break;
		case 3:printf("自动"); break;
	}
	puts("哔哔机。");
	puts("====================================");
}

inline void chongdian()                 //充电 
{
		int i=dian;
		while(i<100)
		{ 
		    system("cls");
		    prbi();
            puts("====================================");
			puts("充电中……");
		    Sleep(1);
			i++;
			cout<<i<<'%';
			Sleep(100); 
		} 
		puts("电量已满！");
		Sleep(100);
		system("cls");
		dian=i;
} 

inline void qita()                      //其他 
{
	system("cls");
	prbi();
    puts("====================================");
	switch(n)
	{
		case 2:
		{
			puts("[1] 查看电量 [2] 返回 [3] 修改颜色");
		}break;
		default:
		{	
		    system("cls");
	        prbi();
            puts("===================================="); 
            puts("[1] 哔哔 [2] 升级 [3] 退出 [4] 其他 ");
            if(n!=1) puts(" [4] 其他"); 
            if(n==1) cout<<endl;
     	}
    }
}

inline void qita_1()                    //其他（执行） 
{
	switch(n)
	{
		case 2:
		{
			int b;
			scanf("%d",&b);
			switch(b)
			{
				case 1:
				{
					system("cls");
	                prbi();
                    cout<<"电量："<<dian<<"%"<<endl;
                    puts("[2] 返回"); 
                    int s;
                    while(s!=2)
					{
						system("cls");
						prbi();
                        cout<<"电量："<<dian<<"%"<<endl;
                        puts("[2] 返回");
					    cin>>s;
				    }
				}break;
				
				case 2:return;break;
				
				case 3:shezhi();
				
				default:
				{
					system("cls");
	                prbi();
					puts("[1] 查看电量 [2] 返回");	
				} 
			}
		}
	}
}

void bibiji()                           //哔哔机 
{   
    save();
    system("cls");
    if(dian<=0)                         //电量控制 
	{
	    puts("哔哔机没电了！请按[1]充电！");
	    puts("===========================");
	    int x=0;
	    while(x!=1)
		{
			system("cls");
			puts("哔哔机没电了！请按[1]充电！");
	        puts("===========================");
	        Sleep(2000);
		    cin>>x;
	    }
	    chongdian();
    }
    if(dian>0) 
	{
	    if(n>1) dian=dian-1;
        else dian=dian-10;
    }
    
    int ch; 
    prbi();
    cout<<"[1] 哔哔 [2] 升级 [3] 退出";
    if(n!=1) puts(" [4] 降级 [5] 其他"); 
    if(n==1) cout<<endl;
	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1:                             //哔哔 
	{
		system("cls");
		prbi();
        bibi();
        system("cls");
        bibiji();
	}break;
	
	case 2:                             //升级 
	{
		int i;
		while(i<100)
		{ 
		    system("cls");
		    prbi();
			puts("升级中……");
		    Sleep(1);
			i++;
			cout<<i<<'%';
			Sleep(100); 
		} 
		n++;
		puts("升级成功！");
		Sleep(100);
		system("cls");
        bibiji();
	}break;
	
	case 3:                             //退出 
	{
		save();
		return;
    }break;
	  
    case 4:                             //降级
	if(n==1)
	{
		system("cls");
		prbi();
        cout<<"[1] 哔哔 [2] 升级 [3] 退出";	
        bibiji();
	}
	else 
	{
		int i;
		while(i<100)
		{ 
		    system("cls");
		    prbi();
			puts("降级中……");
		    Sleep(1);
			i++;
			cout<<i<<'%';
			Sleep(100); 
			system("cls");
		} 
		n--;
		puts("降级成功！");
		Sleep(100);
		system("cls");
        bibiji();
	}break;
	
	case 5:                             //其他 
	{ 
	     if(n==1)
	     {
	     	 system("cls");
	         prbi();
             cout<<"[1] 哔哔 [2] 升级 [3] 退出 [4] 其他";
             if(n!=1) puts(" [4] 其他"); 
             if(n==1) cout<<endl;
         }
		 if(n>1)
		 {
		     qita();
		     qita_1();
		 } 
	}break;
    }
    bibiji();
}

int main()
{
	shezhi();
	init();
	in();
    bibiji();
    return 0;
}
