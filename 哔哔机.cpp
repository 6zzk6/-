#include<bits/stdc++.h>
#include<windows.h>
#include<dos.h>
#include<time.h>
#include<conio.h>

using namespace std;

int n=1,dian=100;

inline void save()                      //����    
{
    ofstream outFile;
    outFile.open("D:\\save.txt");
    outFile<<n;
    outFile.close();
}

inline void init()                      //����   
{
    ifstream inFile;
    inFile.open("D:\\save.txt");
    inFile>>n;
    inFile.close();
}

inline void in()                        //��ʼ��
{
    for(int i=1;i<=40;i++)
    {
        if(i%4==1) cout<<"\n\n\n ���\n ����\n";
        if(i%4==2) cout<<"\n\n\n ����\n ����\n";
        if(i%4==3) cout<<"\n\n\n ����\n ����\n";
        if(i%4==0) cout<<"\n\n\n ����\n ���\n";
        cout<<"\n ������..."<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"���Ʋ�����Ϸ �ܾ�������Ϸ ע�����ұ��� ������ƭ�ϵ�"<<endl;
        cout<<"�ʶ���Ϸ���� ������Ϸ���� ������ʱ�� ���ܽ�������"<<endl;
        Sleep(100);
        system("cls");
    }
}

inline void shezhi()                    //���� 
{
	char a;
	system("mode con cols=75 lines=30");
    system("title ���ٻ�game");
    printf("0=��ɫ       8=��ɫ\n");
    printf("1=��ɫ       9=����ɫ\n");
    printf("2=��ɫ       A=����ɫ\n");
    printf("3=����ɫ     B=��ǳ��ɫ\n");
    printf("4=��ɫ       C=����ɫ\n");
    printf("5=��ɫ       D=����ɫ\n");
    printf("6=��ɫ       E=����ɫ\n");
    printf("7=��ɫ       F=����ɫ\n");
    char ak[99999]=" 0",bk[99999]="color ";
    puts("��ѡ����Ҫ�ı���ɫ��ǰ��ɫ:");
    printf("����ɫ:");
    ak[0]=getche();
    printf("\n");
    printf("ǰ��ɫ:");
    ak[1]=getche();
    system(strcat(bk,ak));
    system("cls");	
}

inline void bibi()                      //���� 
{
	char c;
	switch(n)
	{
	case 1:
	{
	    puts("O��ʱ�䵽��");Sleep(1);
		puts("����O��~����O��~O�ݹ���~O��O��O����ҪO��~��ҪO��~O�ݹ���~Ҫ��Ҫ��Ҫ��"); Sleep(1);
		puts("��O�ݹ���~ ���������� ����O�ݹ���~ �Ѻúȱ��� ������O�ݣ�����O�� ����ҪO�ݣ���ҪO�� ������O�ݣ�����O�� ����ҪO�ݣ���ҪO�� ��");Sleep(1);
		puts("O�ݹ����һ�Ҫ��������");Sleep(1);
	} break;
	case 2:
	{
	    puts("ֻ����̫�� baby ֻ����̫�� baby");Sleep(1);
	    puts("ֻ����ʵ����̫�� baby");Sleep(1);
	    puts("ֻ����̫�� baby");Sleep(1);
	    puts("ӭ����������������˴�������");Sleep(1);
	    puts("���ָо��Ҵ�δ��");Sleep(1);
	    puts("Cause I got a crush on you who you");Sleep(1);
	    puts("�����ҵ��������˭");Sleep(1);
	    puts("�ٶ�һ�ۿ�һ�۾ͻᱬը");Sleep(1);
	    puts("�ٽ�һ�㿿����챻�ڻ�");Sleep(1);
	    puts("��Ҫ����ռΪ���� baby bae");Sleep(1);
	    puts("�����ߵ�����");Sleep(1);
	    puts("��������������� you you");Sleep(1);
	    puts("��Ӧ����������");Sleep(1);
	    puts("Uh �����˶��ڿ�����");Sleep(1);
	    puts("�ҵ������ǲ���");Sleep(1);
	    puts("Oh �������Ѳ������");Sleep(1);
	    puts("Eh oh");Sleep(1);
	    puts("�ѵ��������������");Sleep(1);
	    puts("�ұ�������������");Sleep(1);
	    puts("��������ֵ���");Sleep(1);
	    puts("��һ��ѽ�����������");Sleep(1);
	    puts("��������ôȥ����");Sleep(1);
	    puts("ֻ����̫�� baby ֻ����̫�� baby");Sleep(1);
	    puts("ֻ����ʵ����̫�� baby");Sleep(1);
	    puts("ֻ����̫�� baby");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("����ȷ�ϵظ�����");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("�㵽������˭");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("����ȷ�ϵظ�����");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("�㵽������˭");Sleep(1);
	    puts("�������ڸ�����");Sleep(1);
	    puts("�����ǽ��� ���� make wave");Sleep(1);
	    puts("���۵����� it's your birthday cake");Sleep(1);
	    puts("�����ǵ� game call me ������");Sleep(1);
	    puts("����ƭ���� I wanna play");Sleep(1);
	    puts("�ҵ��Ժ�ÿ��ÿ��Ϊ��һ�˳���");Sleep(1);
	    puts("�������������ߵ�����������ˮ");Sleep(1);
	    puts("Oh right baby I'm fall in love with you");Sleep(1);
	    puts("�ҵ�һ���㶼����");Sleep(1);
	    puts("ֻҪ��������㹻");Sleep(1);
	    puts("�ҵ���Ӧ������");Sleep(1);
	    puts("Uh ������һֱ�ܲ���");Sleep(1);
	    puts("���������ǵ�����");Sleep(1);
	    puts("Oh ȫ��ֻ���������");Sleep(1);
	    puts("Eh oh");Sleep(1);
	    puts("�ѵ��������������");Sleep(1);
	    puts("�ұ�������������");Sleep(1);
	    puts("��������ֵ���");Sleep(1);
	    puts("��һ��ѽ�����������");Sleep(1);
	    puts("��������ôȥ����");Sleep(1);
	    puts("ֻ����̫�� baby ֻ����̫�� baby");Sleep(1);
	    puts("ֻ����ʵ����̫�� baby");Sleep(1);
	    puts("ֻ����̫�� baby");Sleep(1);
	    puts("��Ը����ҵ�ȫ��������");Sleep(1);
	    puts("��ÿ�������ﶼ�μ���");Sleep(1);
	    puts("�����ұ����۾�Ҳ�ܿ�����");Sleep(1);
	    puts("���ڿ�ʼ��ֻ׼�㿴��");Sleep(1);
	    puts("I don't wanna wake up in dream");Sleep(1);
	    puts("��ֻ�뿴���������Ļ�");Sleep(1);
	    puts("ֻ����̫�� baby ֻ����̫�� baby");Sleep(1);
	    puts("ֻ����ʵ����̫�� baby");Sleep(1);
	    puts("ֻ����̫�� baby");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("����ȷ�ϵĸ�����");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("�㵽������˭");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("����ȷ�ϵĸ�����");Sleep(1);
	    puts("Oh eh oh");Sleep(1);
	    puts("�㵽������˭�������ڸ�����");Sleep(1);
	}break;
	case 3:
	{
		puts("ÿʱÿ�̣�׼ʱ�ʹ");Sleep(1);
		puts("�������������ķɻ�");Sleep(1);
		puts(" ");
		puts("һ�ɳ��� ���������");Sleep(1);
		puts("�µ����� �µ���ս");Sleep(1);
		puts("�������� �����");Sleep(1);
		puts("�������� ǧ����");Sleep(1);
		puts("һ����");Sleep(1);
		puts("�ֵ�");Sleep(1);
		puts("�п���Ѫ����");Sleep(1);
		puts("���");Sleep(1);
		puts("������������");Sleep(1);
		puts("���ް��� С��");Sleep(1);
		puts("��Ƥ�� ���");Sleep(1);
		puts("�������� �Ұ���");Sleep(1);
		puts("�յ�");Sleep(1);
		puts("�� ��������");Sleep(1);
		puts("���ѴӲ���");Sleep(1);
		puts("ȥ ��������");Sleep(1);
		puts("�� �ҵ�ʹ��");Sleep(1);
		puts("���������Ұ���");Sleep(1);
		puts("���ĺ���");Sleep(1);
		puts("���������");Sleep(1);
		puts("��ʱ���");Sleep(1);
		puts("��������");Sleep(1);
		puts("���������г徢");Sleep(1);
		puts("���޷��� ŷ������");Sleep(1);
		puts("ǣ������");Sleep(1);
		puts("�� ��������");Sleep(1);
		puts("�� �쵽�Ҽ�");Sleep(1);
		puts("�� �ҵ�����");Sleep(1);
		puts("�����ʵ��");Sleep(1);
		puts("���������ɳ���");Sleep(1);
		puts("�� ��������");Sleep(1);
		puts("���ѴӲ���");Sleep(1);
		puts("ȥ ��������");Sleep(1);
		puts("�� �ҵ�ʹ��");Sleep(1);
		puts("���������Ұ���");Sleep(1);
	}
    }
    Sleep(1000);
    c=getchar();
    c=getchar();
}

inline void prbi()                      //�ȼ� 
{
	cout<<"��Һã����� ���ٻ� v"<<n<<".0 ";
	switch(n)
	{
		case 1:printf("��Ч"); break;
		case 2:printf("����"); break;
		case 3:printf("�Զ�"); break;
	}
	puts("���ٻ���");
	puts("====================================");
}

inline void chongdian()                 //��� 
{
		int i=dian;
		while(i<100)
		{ 
		    system("cls");
		    prbi();
            puts("====================================");
			puts("����С���");
		    Sleep(1);
			i++;
			cout<<i<<'%';
			Sleep(100); 
		} 
		puts("����������");
		Sleep(100);
		system("cls");
		dian=i;
} 

inline void qita()                      //���� 
{
	system("cls");
	prbi();
    puts("====================================");
	switch(n)
	{
		case 2:
		{
			puts("[1] �鿴���� [2] ���� [3] �޸���ɫ");
		}break;
		default:
		{	
		    system("cls");
	        prbi();
            puts("===================================="); 
            puts("[1] ���� [2] ���� [3] �˳� [4] ���� ");
            if(n!=1) puts(" [4] ����"); 
            if(n==1) cout<<endl;
     	}
    }
}

inline void qita_1()                    //������ִ�У� 
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
                    cout<<"������"<<dian<<"%"<<endl;
                    puts("[2] ����"); 
                    int s;
                    while(s!=2)
					{
						system("cls");
						prbi();
                        cout<<"������"<<dian<<"%"<<endl;
                        puts("[2] ����");
					    cin>>s;
				    }
				}break;
				
				case 2:return;break;
				
				case 3:shezhi();
				
				default:
				{
					system("cls");
	                prbi();
					puts("[1] �鿴���� [2] ����");	
				} 
			}
		}
	}
}

void bibiji()                           //���ٻ� 
{   
    save();
    system("cls");
    if(dian<=0)                         //�������� 
	{
	    puts("���ٻ�û���ˣ��밴[1]��磡");
	    puts("===========================");
	    int x=0;
	    while(x!=1)
		{
			system("cls");
			puts("���ٻ�û���ˣ��밴[1]��磡");
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
    cout<<"[1] ���� [2] ���� [3] �˳�";
    if(n!=1) puts(" [4] ���� [5] ����"); 
    if(n==1) cout<<endl;
	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1:                             //���� 
	{
		system("cls");
		prbi();
        bibi();
        system("cls");
        bibiji();
	}break;
	
	case 2:                             //���� 
	{
		int i;
		while(i<100)
		{ 
		    system("cls");
		    prbi();
			puts("�����С���");
		    Sleep(1);
			i++;
			cout<<i<<'%';
			Sleep(100); 
		} 
		n++;
		puts("�����ɹ���");
		Sleep(100);
		system("cls");
        bibiji();
	}break;
	
	case 3:                             //�˳� 
	{
		save();
		return;
    }break;
	  
    case 4:                             //����
	if(n==1)
	{
		system("cls");
		prbi();
        cout<<"[1] ���� [2] ���� [3] �˳�";	
        bibiji();
	}
	else 
	{
		int i;
		while(i<100)
		{ 
		    system("cls");
		    prbi();
			puts("�����С���");
		    Sleep(1);
			i++;
			cout<<i<<'%';
			Sleep(100); 
			system("cls");
		} 
		n--;
		puts("�����ɹ���");
		Sleep(100);
		system("cls");
        bibiji();
	}break;
	
	case 5:                             //���� 
	{ 
	     if(n==1)
	     {
	     	 system("cls");
	         prbi();
             cout<<"[1] ���� [2] ���� [3] �˳� [4] ����";
             if(n!=1) puts(" [4] ����"); 
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
