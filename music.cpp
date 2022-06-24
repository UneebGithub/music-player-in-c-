//THIS IS SIMPLE IDEA OF MUSIC PLAYER BY UNEEB:
#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<conio.h>
#include<stdio.h>
#include<ctime>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;
void load();
void wid();
void s();
void nmd();
void stg();
void bak();
void abt();
void md();
void ext();
void sin();
void skip();
void music();
int main(){
//	cout<<"\t\t\t\t\t\t\t\t\tSkip"<<endl;

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"\n";
	cout<<"\t\t\t\t ";
	cout<<"Skip\n";
	cout<<"\t\t\t\t ";
	cout<<"Sign In\n";
	string put;
	cout<<" ";
	cout<<"\t\t\tEnter Command: ";
	cin>>put;
	if(put=="signin"||put=="SIGNIN"||put=="sign in"||put=="Sign In"){
		system("cls");
		sin();
	}
	else if(put=="skip"||put=="Skipped"||put=="SKIP"||put=="skip"){
		system("cls");
		skip();
		
	}
	else{
		system("cls");
	
		return main();
	}
}
void sin()
{
       cout<<"\t\t\tEnter User Name: ";
       string name;
       cin>>name;
       if(name=="uneeb"){
       	cout<<"\t\t\tEnter Password: ";
       	int pass;
       	cin>>pass;
       	if(pass==123){
       		system("cls");
       		stg();
		   }
		    else {
		    	system("cls");
		    	
		   	cout<<"\t\t\tPassword Is Wrong..";
		   	Sleep(1200);
		   	system("cls");
		   	return sin();
		   }
	    }
	   else {
	   		system("cls");
		   	cout<<"\t\t\tUserName Is Wrong..";
		   	Sleep(1200);
		   	system("cls");
		   	return sin();
		   }


}
void skip()
{
	
}

void stg()
{
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
//		cout<<"\n";
//		cout<<"\n";
		cout<<"\t\t\t\tW";
		Sleep(1000);
		cout<<"E";
		Sleep(1000);
		cout<<"L";
		Sleep(1000);
		cout<<"C";
		Sleep(1000);
		cout<<"O";
		Sleep(1000);
		cout<<"M";
		Sleep(1000);
		cout<<"E";
		Sleep(1000);
	//	cout<<"\t\t\t  Play World";
		for(int i=0;i<5;i++){
			cout<<" .";
			Sleep(1000);
		}
			md();
	}
void md()
	{
	
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
		system("cls");
		char h=3;
		SetConsoleTextAttribute(color, 8);
	    cout<<"\t\t\t ";
	    cout<<"    Play World :)\n";
		SetConsoleTextAttribute(color, 4);
		cout<<"\t\t\t"<<h;
		SetConsoleTextAttribute(color, 15);
		cout<<"___________________";
		SetConsoleTextAttribute(color, 4);
		cout<<h<<endl;
		SetConsoleTextAttribute(color, 15);
		cout<<" Search";
		cout<<"\t\t\t\t\t\t\t\t  Settings--->\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		string songs;
		cout<<" 1)Hip-Hop\n";
		cout<<" 2)Viral\n";
		cout<<" 3)Love\n";
		cout<<" 4)Sad \n";
		cout<<" 5)Lofi\n";
		cout<<" 6)English Songs\n";
		cout<<" Enter Command: ";
		cin>>songs;
		if(songs=="search"||songs=="Search"){
			system("cls");
			cout<<" <---back\n";
			cout<<"\n";
			cout<<"\n";
			cout<<"\n";
			cout<<"\t\t\t\tSearch: ";
			
			string ser;
			cin>>ser;
			if(ser=="hiphop"){
				
			}
			//copy past all one
			
	
	  	if(ser=="back"){
				system("cls");
				md();
			}
				
		else if(ser=="AtifAslamSongs"||ser=="atifaslamsongs"||ser=="AtifAslam"||ser=="atif aslam songs"||ser=="atif"||ser=="songs of atifaslam"||ser=="atifaslamlofii"||ser=="atifaslam meshup"||ser=="atifaslamlofi"||ser=="atif aslam lofi"||ser=="atif aslam song"){
				system("cls");
				int nname;
				cout<<"1)Doori\n";
				cout<<"2)Doori Lofi Mix\n";
				cout<<"3)Click More\n";
				cout<<"Enter Command: ";
				cin>>nname;
				if(nname==2){
					system("cls");
				
				cout<<"\t\t\tEnjoy Music : )"<<endl;
				PlaySound(TEXT("Do.wav"),NULL,SND_SYNC);
				system("cls");
				md();
			}
		}
		else{
				system("cls");
				cout<<"t\t\tNo Result :( ";
				Sleep(1100);
				md();
			}
			
		}

}


