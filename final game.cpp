#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<ctime>
#include<random>
#include<MMSystem.h>
#include<windows.h>
using namespace std;
void show_record();
void reset_score();
void help();
void edit_score(string , int);
int main()
{
    int countr,r,r1,count,i,n;
    int score;
    char choice;
    string name;
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<endl<<endl<<endl;
        cout<<endl<<endl<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t             Welcome            "<<endl;
        cout<<"\t\t\t\t\t               to              "<<endl;
        cout<<"\t\t\t\t\t     Kaun Banega Millionaire   "<<endl;
        cout<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        cout<<endl;
        PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
    mainmenu:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl<<endl;
        cout<<"\t\t\t\t\t  # Press S to start the game "<<endl;
        cout<<"\t\t\t\t\t  # Press V to view the highest score "<<endl;
        cout<<"\t\t\t\t\t  # Press R to reset score "<<endl;
        cout<<"\t\t\t\t\t  # Press H for help "<<endl;
        cout<<"\t\t\t\t\t  # Press Q to quit"<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        choice=toupper(_getch());
        if (choice=='V')
	    {
            show_record();
            goto mainmenu;
        }
        else if (choice=='H')
        {
            help();
            _getch();
            goto mainmenu;
        }
        else if (choice=='R')
        {
            reset_score();
            _getch();
            goto mainmenu;
        }
        else if (choice=='Q')
            exit(1);
        else if (choice=='S')
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<<endl<<"\t\t\t\t__________________________________________________"<<endl<<endl;
            cout<<"\t\t\t\t\t\t Resister your name: ";
            string name;;
            cin>>name;
            cout<<"\t\t\t\t__________________________________________________"<<endl;
            system("cls");
            cout<<endl<<endl<<endl<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"\t\t------------------  Welcome "<<name<<" to Kaun Banega Millionaire --------------------------"<<endl;
            cout<<"\t\t\t    Here are some tips you might wanna know before playing:"<<endl;
            cout<<"\t\t-------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND"<<endl;
            cout<<"\t\t\t >> In warmup round you will be asked a total of 6 questions to test your"<<endl;
            cout<<"\t\t\t    general knowledge. You are eligible to play the game if you give atleast 3"<<endl;
            cout<<"\t\t\t    right answers, otherwise you can't proceed further to the Challenge Round."<<endl;
            cout<<"\t\t\t >> Your game starts with CHALLANGE ROUND. In this round you will be asked a"<<endl;
            cout<<"\t\t\t    total of 10 questions. Each right answer will be awarded $100,000! "<<endl;
            cout<<"\t\t\t >> By this way you can win upto ONE MILLION cash prize!!!!!.........."<<endl;
            cout<<"\t\t\t >> You will be given 4 options and you have to press A, B ,C or D for the"<<endl;
            cout<<"\t\t\t    right option."<<endl;
            cout<<"\t\t\t >> You will be asked questions continuously, till right answers are given"<<endl;
            cout<<"\t\t\t >> No negative marking for wrong answers!"<<endl<<endl<<endl;
            cout<<"\t\t\t\t\t !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!"<<endl;
            cout<<endl<<"\t\t\t\t\t Press Y  to start the game "<<endl;
            cout<<endl<<"\t\t\t\t\t Press any other key to return to the main menu"<<endl;
            if (toupper(_getch())=='Y')
            {
                goto home;
            }
            else
            {
                goto mainmenu;
                system("cls");
            }

            home:
                system("cls");
                count=0;
                for(i=0;i<=6;i++)
                {
                    system("cls");
                    r1=i;
                    switch(r1)
                    {
                    case 1:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
                        cout<<endl<<endl<<endl<<"\t\t Which country asked scientist Albart Einstein to become its President in 1952 ?";
                        cout<<endl<<"\t\t A. Austria"<<endl<<"\t\t B. Israel"<<endl<<"\t\t C. Switzerland"<<endl<<"\t\t D. USA";
		                if (toupper(_getch())=='B')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            count++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is B.Israel"<<endl;
                            _getch();
                            break;
                        }

                    case 2:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
                        cout<<endl<<endl<<endl<<"\t\t The country with the highest environmental performance index is...";
                        cout<<endl<<endl<<"\t\t A. France"<<endl<<"\t\t B. Denmark"<<endl<<"\t\t C. Switzerland"<<endl<<"\t\t D. Finland";
                        if (toupper(_getch())=='C')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            count++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is C.Switzerland"<<endl;
                            _getch();
                            break;
                        }

                    case 3:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                        cout<<endl<<endl<<endl<<"\t\t Which animal laughs like human being?";
                        cout<<endl<<endl<<"\t\t A. Polar Bear"<<endl<<"\t\t B. Hyena"<<endl<<"\t\t C. Donkey"<<endl<<"\t\t D. Chimpanzee";
                        if (toupper(_getch())=='B')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            count++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is B.Hyena";
                            _getch();
                            break;
                        }

                    case 4:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
                        cout<<endl<<endl<<endl<<"\t\t Who was the first women President of the Indian National Congress ?";
                        cout<<endl<<endl<<"\t\t A. Annie Besant"<<endl<<"\t\t B. Sarojini Naidu"<<endl<<"\t\t C. Indira Gandhi"<<endl<<"\t\t D. Pratibha Patil";
                        if (toupper(_getch())=='A')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            count++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is A.Annie Besant ";
                            _getch();
                            break;
                        }

                    case 5:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
                        cout<<endl<<endl<<endl<<"\t\t Which is the third highest mountain in the world?";
                        cout<<endl<<endl<<"\t\t A. Mt. K2"<<endl<<"\t\t B. Mt. Kanchanjungha"<<endl<<"\t\t C. Mt. Makalu"<<endl<<"\t\t D. Mt. Kilimanjaro";
                        if (toupper(_getch())=='B')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            count++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is B.Mt. Kanchanjungha";
                            _getch();
                            break;
                        }

                    case 6:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                        cout<<endl<<endl<<endl<<"\t\t Which city hosted both the first Test match and the first ODI match ?";
                        cout<<endl<<endl<<"\t\t A. Sydney"<<endl<<"\t\t B. Perth"<<endl<<"\t\t C. The Oval"<<endl<<"\t\t D. Melbourne";
                        if (toupper(_getch())=='D' )
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            count++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is D.Melbourne ";
                            _getch();
                            break;
                        }
                    }
                }
                if(count>=3)
                {
                    goto test;
                }
                else
                {
                    system("cls");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    cout<<endl<<endl<<endl<<"\t\t SORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME";
                    _getch();
                    goto mainmenu;
                }
test:
     system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
     cout<<endl<<endl<<endl<<"\t*** CONGRATULATION "<<name<<" you are eligible to play the Game ***";
     cout<<endl<<endl<<endl<<"\t\t   !Press any key to Start the Game!";
     if(toupper(_getch())=='p')
     {
         goto game;
     }
game:
     countr=0;
     for(i=1;i<=10;i++)
     {
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
          system("cls");
          {
            srand(time(0));
            int temp;
            int i,j,flag;
            int a[10]={0};
            for(i=0;i<10;i++)
            {
                temp=1+(rand()%15);
                for(j=0;j<=i;j++)
                {
                    if(temp==a[j])
                    {
                        flag=0;
                        break;
                    }
                    else
                    flag=1;
                }
                if(flag==1)
                    a[i]=temp;
                else
                    i--;
            }

            for(i=0;i<10;i++)
            {
                r=a[i];
                switch(r)
                {
                    case 1:
                            system("cls");
                        cout<<endl<<endl<<endl<<"\t\t => What is the National Game of England?";
                        cout<<endl<<endl<<"\t\t A. Football"<<endl<<"\t\t B. Basketball"<<endl<<"\t\t C. Cricket"<<endl<<"\t\t D. Baseball";
                        if (toupper(_getch())=='C')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            countr++;
                            _getch();
                            break;
                            _getch();
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is C.Cricket";
                            _getch();
                            goto score;
                            break;
                        }
                    case 2:
                            system("cls");
                        cout<<endl<<endl<<endl<<"\t\t => Study of Earthquake is called.....";
                        cout<<endl<<endl<<"\t\t A.Seismology"<<endl<<"\t\t B.Cosmology"<<endl<<"\t\t C.Orology"<<endl<<"\t\t D.Etimology";
                        if (toupper(_getch())=='A')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            countr++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is A.Seismology";
                            _getch();
                            goto score;
                            break;
                        }
                    case 3:
                            system("cls");
                        cout<<endl<<endl<<endl<<"\t\t => Which famous scientist operated a movie production studio named Black Maria ?";
                        cout<<endl<<endl<<"\t\t A.Nikola Tesla"<<endl<<"\t\t B.George Westinghouse"<<endl<<"\t\t C.Thomas Alva Edison"<<endl<<"\t\t D.sr. Isaac Newton";
                        if (toupper(_getch())=='C')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            countr++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is C.Thomas Alva Edison";
                            _getch();
                            goto score;
                            break;
                        }
                    case 4:
                            system("cls");
                        cout<<endl<<endl<<endl<<"\t\t => The Laws of Electromagnetic Induction were given by?";
                        cout<<endl<<endl<<"\t\t A.Faraday"<<endl<<"\t\t B.Tesla"<<endl<<"\t\t C.Maxwell"<<endl<<"\t\t D.Coulomb";
                        if (toupper(_getch())=='A')
                        {
                            cout<<endl<<endl<<"\t\t Correct!!!";
                            countr++;
                            _getch();
                            break;
                        }
                        else
                        {
                            cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is A.Faraday";
                            _getch();
                            goto score;
                            break;
                        }
                    case 5:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => In what unit is electric power measured ?";
                    cout<<endl<<endl<<"\t\t A.Coulomb"<<endl<<"\t\t B.Power"<<endl<<"\t\t C.watt"<<endl<<"\t\t D.Units";
                    if (toupper(_getch())=='C')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is c.Watt";
                        _getch();
                        goto score;
                        break;
                    }
                    case 6:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Which element is found in Vitamin B12 ?";
                    cout<<endl<<endl<<"\t\t A.Zinc"<<endl<<"\t\t B.Cobalt"<<endl<<"\t\t C.Calcium"<<endl<<"\t\t D.Iron";
                    if (toupper(_getch())=='B' )
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is B.Cobalt";
                        _getch();
                        goto score;
                        break;
                    }
                    case 7:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => How many digits dose an Aadhaar card number have ?";
                    cout<<endl<<endl<<"\t\t A.13"<<endl<<"\t\t B.12"<<endl<<"\t\t C.10"<<endl<<"\t\t D.9";
                    if (toupper(_getch())=='B')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is B.12";
                        _getch();
                        goto score;
                        break;
                    }
                    case 8:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Who wrote the ancient Indian astronomical treatise 'Panchasiddhantika' ?";
                    cout<<endl<<endl<<"\t\t A.Aryabhatta"<<endl<<"\t\t B.Varahamihira"<<endl<<"\t\t C.Shridhara"<<endl<<"\t\t D.Panini";
                    if (toupper(_getch())=='B')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is B.Varahamihira";
                        _getch();
                        goto score;
                        break;
                    }
                    case 9:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Who has never been named wisden Cricketer's Almanack's 'Leading Cricketer of the Year' ?";
                    cout<<endl<<"\t\t A.Virender Sehwag"<<endl<<"\t\t B.Sachin Tendulkar"<<endl<<"\t\t C.Virat Kohli"<<endl<<"\t\t D.Rahul Dravid";
                    if (toupper(_getch())=='D')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is D.Rahul Dravid";
                        _getch();
                        goto score;
                        break;
                    }
                    case 10:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Which is the longest River in the world ?";
                    cout<<endl<<endl<<"\t\t A.Nile"<<endl<<"\t\t B.Brahmaputra"<<endl<<"\t\t C.Ganga"<<endl<<"\t\t D.Amazon";
                    if (toupper(_getch())=='A')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is A.Nile";
                        _getch();
                        goto score;
                        break;
                    }
                    case 11:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => What is the color of the Black Box in aeroplanes ?";
                    cout<<endl<<endl<<"\t\t A.White"<<endl<<"\t\t B.Black"<<endl<<"\t\t C.Orange"<<endl<<"\t\t D.Red";
                    if (toupper(_getch())=='C')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is C.Orange";
                        _getch();
                        goto score;
                        break;
                    }
                    case 12:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Which city is known at 'The City of Seven Hills ?";
                    cout<<endl<<endl<<"\t\t A.Rome"<<endl<<"\t\t B.Vactican City"<<endl<<"\t\t C.Madrid"<<endl<<"\t\t D.Berlin";
                    if (toupper(_getch())=='A')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is A.Rome";
                        _getch();
                        goto score;
                        break;
                    }
                    case 13:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Name the country where there no mosquitoes are found?";
                    cout<<endl<<endl<<"\t\t A.Japan"<<endl<<"\t\t B.Italy"<<endl<<"\t\t C.Argentina"<<endl<<"\t\t D.France";
                    if (toupper(_getch())=='D')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is D.France";
                        _getch();
                        goto score;
                        break;
                    }
                    case 14:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Which of these country never hosted commonwealth Games ? ";
                    cout<<endl<<endl<<"\t\t A.Ireland"<<endl<<"\t\t B.New Zealand"<<endl<<"\t\t C.Canada"<<endl<<"\t\t D.India";
                    if (toupper(_getch())=='A')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is A.Ireland";
                        _getch();
                        goto score;
                        break;
                    }
                    case 15:
                            system("cls");
                    cout<<endl<<endl<<endl<<"\t\t => Who holds the Record for the highest ODI innings score by an  Indian Woman Cricketer ?";
                    cout<<endl<<endl<<"\t\t A.Mithali Raj"<<endl<<"\t\t B.Deepti Sharma"<<endl<<"\t\t C.Harmanpreet Kaur"<<endl<<"\t\t D.Smriti Mandhana";
                    if (toupper(_getch())=='B')
                    {
                        cout<<endl<<endl<<"\t\t Correct!!!";
                        countr++;
                        _getch();
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<"\t\t\t Wrong!!! The correct answer is B.Deepti Sharma ";
                        _getch();
                        goto score;
                        break;
                    }
                }
            }
        }
            score:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
            system("cls");
            score=countr*100000;
            if(score>0.00 && score<1000000)
            {
                cout<<endl<<endl<<endl<<"\t\t\t**************** CONGRATULATION *****************";
                cout<<endl<<"\t\t\t\t\t You won "<<score<<"$";
                goto go;
            }
            else if(score==1000000)
            {
                cout<<endl<<endl<<endl<<endl<<"\t\t**************** CONGRATULATION ****************";
                cout<<endl<<"\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!";
                cout<<endl<<"\t\t\t      You won "<<score<<"$";
                cout<<endl<<"\t\t\t       Thank You!!";
            }
            else
            {
                cout<<endl<<endl<<endl<<endl<<"\t\t\t******** SORRY YOU DIDN'T WIN ANY CASH ********";
                cout<<endl<<endl<<"\t\t\t    ******** Better Luck Next Time ********";
                cout<<endl<<endl<<"\t\t\t\t Thanks for your participation";
                cout<<endl<<endl<<"\t\t\t\t           TRY AGAIN";
                goto go;
            }
            go:
            cout<<endl<<endl<<"\t\t\t Press Y if you want to play next game";
            cout<<endl<<endl<<"\t\t\t Press any key if you want to go main menu";
            if (toupper(_getch())=='Y')
                goto home;
            else
            {
                edit_score(name , score);
                goto mainmenu;
            }
        }
    }
}
void show_record()
{
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    string name;
    float scr;
    ifstream fin;
    fin.open("score.txt");
    fin>>name;
    fin>>scr;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t*************************************************************";
    cout<<endl<<endl<<"\t\t\t\t\t"<<name<<" has Won the Highest "<<scr<<" $";
    cout<<endl<<endl<<"\t\t\t*************************************************************";
    fin.close();
    _getch();
}
void reset_score()
{
    system("cls");
    int sc;
	string nm;
	ifstream fin;
	fin.open("score.txt");
	fin>>nm>>sc;
	sc=0;
	nm={0};
	fin.close();
	ofstream fout;
	fout.open("score.txt");
	cout<<nm<<sc;
	fout.close();
}
void edit_score(string name , int score)
{
    system("cls");
	int sc;
	string nm;
	ifstream fin;
	fin.open("score.txt");
	fin>>nm;
	fin>>sc;
	if (score>=sc)
	  {
          sc=score;
          nm=name;
          fin.close();
          ofstream fout;
          fout.open("score.txt");
          fout<<nm<<endl<<sc;
          fout.close();
      }
}

void help()
{
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout<<endl<<endl<<"\t\t\t                              HELP";
    cout<<endl<<"\t\t --------------------------------------------------------------------------------";
    cout<<endl<<"\t\t ......................... Kaun Banega Millionaire .............................."<<endl;
    cout<<endl<<"\t\t >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND";
    cout<<endl<<"\t\t >> In warmup round you will be asked a total of 6 questions to test your general";
    cout<<endl<<"\t\t    knowledge. You will be eligible to play the game if you can give atleast 3";
    cout<<endl<<"\t\t    right answers otherwise you can't play the Game...........";
    cout<<endl<<"\t\t >> Your game starts with the CHALLANGE ROUND. In this round you will be asked";
    cout<<endl<<"\t\t    total 10 questions each right answer will be awarded $100,000.";
    cout<<endl<<"\t\t    By this way you can win upto ONE MILLION cash prize in USD...............";
    cout<<endl<<"\t\t >> You will be given 4 options and you have to press A, B ,C or D for the";
    cout<<endl<<"\t\t    right option";
    cout<<endl<<"\t\t >> You will be asked questions continuously if you keep giving the right answers.";
    cout<<endl<<"\t\t >> No negative marking for wrong answers";
	cout<<endl<<endl<<"\t\t**************************** BEST OF LUCK *************************************";
	cout<<endl<<endl<<"\t\t**************** Kaun Banega Millionaire is developed by **********************";
	cout<<endl<<"\t\t\t    Rohan Jethloja , Shubham Dhameliya and Prit Gopani";
}



