#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int gnum = 1; // GAME NUMBER COUNTER
int playerscore = 0; // STARTING SCORE NG PLAYER
string playername[5]; // NUMBER NG PLAYERS DITO NAG SSTORE PANGALAN NG PLAYERS
int scores[5]; // DITO NAG SSTORE YUNG SCORE PER PLAYER
int playern = 0; //ETO PANG PALIT NG PLAYER SA PLAYERNAME ARRAY
int trials = 0; // COUNTER KUNG ILANG BESES PEDE MAGLARO SA PROGRAM

int scoreboard(){
    cout << "\t\t\t\t\t\tScore of Players" << endl;
    cout << "\t\t\t\t\t\tName:";
        for(int a = 0; a <= playern;){//FOR LOOP PARA IDISPLAY YUNG LIST NG PLAYERS NA NAGLARO
            cout << "\t" << playername[a];
            a++;
        }
        cout <<endl;
        cout << "\t\t\t\t\t\tScores:";
        for(int b = 0; b <= playerscore;){//FOR LOOP PARA I DISPLAY YUNG SCORES NG BAWAT PLAYER
            cout << "\t " <<scores[b];
            b++;
        }
        exit(0);
}

int menu(){
// INTRO DISPLAY
cout<<"\t\t\t      _______          ________               _______ "<<endl;
cout<<"\t\t\t  ---'   ____)     ---'    ____)_____     ---'   ____)____"<<endl;
cout<<"\t\t\t        (_____)                ______)               ______)  "<<endl;
cout<<"\t\t\t        (_____)               _______)            __________)"<<endl;
cout<<"\t\t\t        (____)              _______)             (____)"<<endl;
cout<<"\t\t\t  ---.__(___)     ---.__________)         ---.__(___)"<<endl;
cout<<"\t\t\t\t\t\tHello " << playername[playern] << endl;
cout<<"\t\t\t\t\t\tEnter your option"<<endl;
cout<<"\t\t\t\t\t\t[1] Rock"<<endl;
cout<<"\t\t\t\t\t\t[2] Paper"<<endl;
cout<<"\t\t\t\t\t\t[3] Scissors"<<endl;
}

int main()
{
    cout <<"\t\t\t\t\t\tEnter Player Name:";
	cin >> playername[playern];
    for(int life = 1; life > 0;){ //FOR LOOP PARA SA ISANG BUHAY LANG PER PLAYER
	srand(time(NULL));   //random number every single time
	int user = 0;
	int cpu = 0;
	cout<<"\t\t\t\t\t=================================="<<endl;
    cout<<"\t\t\t\t\t   ROCK PAPER SCISSORS GAME # " << gnum <<endl;
    cout<<"\t\t\t\t\t=================================="<<endl;
	menu(); //TATAWAGIN YUNG MENU FUNCTION
	cout << "\t\t\t\t\t\tCurrent Score: "<< scores[playerscore] <<endl;
	cout << "\t\t\t\t\t\tRemaining Life: " << life <<endl;
	cout << "\t\t\t\t\t\tDecision: ";
	cin>>user;

	if(user==1)
	{
		cout<<"\t\t\t\t\t\t-You choose Rock-"<<endl;
	}
	else if(user==2)
	{
		cout<<"\t\t\t\t\t\t-You choose Paper-"<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t-You choose Scissors-"<<endl;
	}

	cpu = rand()%3+1; // DITO PIPILI YUNG CPU KUNG ANONG NUMBER PIPILIIN
	if(cpu==1)
	{
		cout<<"\t\t\t\t\t\t-CPU chooses Rock-"<<endl;
	}
	else if(cpu==2)
	{
		cout<<"\t\t\t\t\t\t-CPU chooses Paper-"<<endl;
	}
	else{
		cout<<"\t\t\t\t\t\t-CPU chooses Scissors-"<<endl;
	}

	//match
	if(user==cpu)
	{
		cout<<"\t\t\t\t\t\tLadies and Gentlemen!"<<endl;
		cout<<"\t\t\t\t\t\tWe have a tie!"<<endl;
		gnum++;
	}

	//user chooses rock
	else if(user==1)
	{
		if(cpu==2)
		{
			cout<<"\t\t\t\t\t\tYou Lose!"<<endl;
			cout<<"\t\t\t\t\t\tPaper covers Rock!"<<endl;
			life--;
			gnum++;
		}
		if(cpu==3)
		{
			cout<<"\t\t\t\t\t\tYou Win!"<<endl;
			cout<<"\t\t\t\t\t\tRock smashes Scissors!"<<endl;
			gnum++;
			scores[playerscore] = scores[playerscore] + 1;
		}

	}

	//user chooses paper
	else if(user==2)
	{
		if(cpu==1)
		{
			cout<<"\t\t\t\t\t\tYou Win!"<<endl;
			cout<<"\t\t\t\t\t\tPaper covers Rock!"<<endl;
			gnum++;
			scores[playerscore] = scores[playerscore] + 1;
		}
		if(cpu==3)
		{
			cout<<"\t\t\t\t\t\tYou Lose!"<<endl;
			cout<<"\t\t\t\t\t\tScissors cuts Paper!"<<endl;
			life--;
			gnum++;

		}

	}

	//user chooses scissors
	else if(user==3)
	{
		if(cpu==1)
		{
			cout<<"\t\t\t\t\t\tYou Lose!"<<endl;
			cout<<"\t\t\t\t\t\tRock smashes Scissors!"<<endl;
			life--;
			gnum++;
		}
		if(cpu==2)
		{
			cout<<"\t\t\t\t\t\tYou Win!"<<endl;
			cout<<"\t\t\t\t\t\tScissors cuts Paper!"<<endl;
			gnum++;
			scores[playerscore] = scores[playerscore] + 1;

		}
	}
    }
    char selection;
    cout << "\n\t\t\t\t\t\tYou lost your life." << endl;
    cout << "\t\t\t\t\t\tDo you want to try again? [Y] = yes [N] = no:";
    cin >> selection;
    cout << endl;
    if(selection == 'y' || selection == 'Y'){
            trials++;
    if(trials < 5){
    gnum = 1;
    playern++;
    playerscore++;
    main();
    }
    else{
    cout << "\t\t\t\t\t\tMaximum Player Reached! The program will now exit." <<endl;
    scoreboard();
        }
    }
    else{
    scoreboard();
    }
	return 0;
}