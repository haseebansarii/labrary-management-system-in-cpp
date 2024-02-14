#include<iostream>
#include<fstream>
#include<sstream>
#include<ctime>		
#include<stdio.h>
#include<conio.h>
#include <cstring>
#include <string>
#include<limits>
#include <algorithm> 
#include <cctype>   
#include <stdlib.h>
#include <chrono>
#include <iomanip>
#include <thread>
using namespace std;
const char* bg = "\033[1;45m";
   const char* greenTextMagentaBackground = "\033[48;5;207m";

const char* bg1="\033[48;5;219m";


//  const char* resetColor = "\033[0m";
const char* resetColor = "\033[0;31m";
const char* maroonColorCode = "\033[0;31m";

    // ANSI escape code for very light pink background color
    const char* lightPinkBackgroundColorCode = "\033[0;31"";107m";


   const char* redColor = "\033[1;31m";   
    const char* greenColor = "\033[1;32m";
     const char* yellowColor = "\033[1;93m";    
    const char* magentaColor = "\033[1;35m";
    
    const char* cgreenColor = "\033[0;32m";
  const char* cyanColor = "\033[1;36m";
 
 
    const char* whiteColor = "\033[1;37m";
    const char* lightRedColor = "\033[1;91m";
    const char* lightGreenColor = "\033[1;92m";
  
  //  const char* wt = "\033[44;33m";
    const char* br = "\033[102;38;2;101;67;33m";
   const char* wt= "\033[48;2;173;216;230;38;2;0;0;139m";
const char* wt1= "\033[48;2;204;255;255;38;128;0;0;139m";
string type[101];

int type_count;

void printMessageCenter(const char* message)
{
   
    int len =0;
    int pos = 0;
    //calculate how many space need to print
    len = (98 - strlen(message))/2;
    printf("");
    for(pos =0 ; pos < len ; pos++)
    {
        //print space
        printf(" ");
    }
    //print message
     cout << redColor <<message << resetColor;

    //printf("%s",message);
}



void headMessage(const char* message)
{
    system("cls");
    
    cout<<bg<<"\n                                                                                               ";
cout<<"\n                      "<<resetColor<<"                                                   "<<bg<<"                      ";
cout<<"\n                      "<<resetColor<<"            ";
cout << greenColor <<"Library Management System"  << resetColor;
cout<<"              "<<bg<<"                      ";
cout<<"\n                      "<<resetColor<<"                                                   "<<bg<<"                      ";
cout<<"\n                                                                                               "<<resetColor;

  
    
    
    cout<<cyanColor<<"\n\n-----------------------------------------------------------------------------------------------\n"<<resetColor;
    printMessageCenter(message);
    cout<<cyanColor<<"\n-----------------------------------------------------------------------------------------------\n\n"<<resetColor;
   
}

bool isLeapYear(int yr) {
    return (yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0);
}

int daysInMonth(int month, int year) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year)) {
        return 29;
    }

    return days[month];
}




string trimSpaces(const string& str) {
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first) {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

string dep[51];
int dep_count;
void setdepartment()
{
	dep[1]="English";
	dep[2]="Information Technology";
	dep[3]="Business Administration";
	dep[4]="Law";
	dep[5]="Comerce";
	dep[6]="Banking & Finance";
	dep_count=6;
	for(int i=dep_count+1;i<=50;i++)
	dep[i]="";
}
void add_dep()
{
	int j=0;
	string d;
	again:
	headMessage("----<(Add Department)>----");
	for(int a=1;a<=dep_count;a++)
	{		
		cout<<magentaColor<<"["<<a<<"]. "<<dep[a]<<resetColor<<endl;
	}
	
	
	char aa;
	if(dep_count==50)
	{
	cout<<redColor<<"Sorry you can't add more then 50 departments\n"<<resetColor;
	cout<<"\npress any key to back menu:";
	cin>>aa;
		return;
	}
	
	cout<<"Enter department Name\n";
	
//	cin.ignore();
	getline(cin,d);
	d=trimSpaces(d);

	for(int a=1;a<=dep_count;a++)
	{		
		if(d==dep[a])
		{
			j=1;
			break;
			
		}		
		
	}
	if(j==1)
	{
		cout<<redColor<<"This name is already added\n"<<resetColor;
			cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back:";
			cin>>aa;
			if(aa=='1')
			goto again;
			else
			return;
	}
	else
	{
	dep_count+=1;	
	dep[dep_count]=d;
	cout<<greenColor<<"<----------<(Department Added>--------->\n"<<resetColor;
	 cout<<cyanColor<<"\nPress any key to continue....:"<<resetColor;
			cin>>aa;
	}
}






void set_categories(){
	type[1]="English";
	type[2]="IT";
	type[3]="Business";
	type[4]="Law";
	type[5]="Comerce";
	type[6]="Finance";
	type[7]="Mathematics";
	type[8]="Islam";
	type[9]="Novels";
	type[10]="Physics";
	type[11]="Politics";
	type[12]="Fiction";
	type[13]="Urdu";
	type[14]="Chemistry";
	type[15]="Sports";
	type_count=15;
	for(int i=type_count+1;i<=100;i++)
	type[i] = " ";
	
}


void logo()
{
		system("cls");
    chrono::seconds duration(2);
    this_thread::sleep_for(duration);    
	
	 cout<<cyanColor;
	
	const string a=R"(                       

                                         JA"]%p
                                    ,A"2a&  *a2Z%,
                                  ,Da*    UU    *v1p
                                 4"A  -~~W@Whv    V`N
                                ,PJ  H OpF*DU"CU   U1p
                                1 N  "5@<P&P]2B    J P
                                 "pY     " YT  `` A D
                       ,*v,      JU,"""""""""""""", U      ,w*p
                      A A*e`""*"",*                *q""*"",a^\'V
                    ,D,"      `        $  jU  p        `      "U"p
                   A`A              @p N"p&1,O1 ,@              \-V
                  `V`U           %Wp] *U ]  U ]B &,w%           z 4"
                    1-V       <w, U j   YH  1A   H ],,wn       / &
                     1 V    ,, `U ""*U           *"` z" ,,    ] B
                      %      *p  V                  A  J*     H$
                      1 U  .ww^**"`                `"**=ww-  j B
                      1 @@@@pDNp,,,awp@@@@@@@@@M@pp,,,,pDwp@@@ N
                      & M@@@@@@@@@@@@@@@@MMMM@@@@@@@@@@@@@@@@MH$
                      H]    `""*%MP*""  ,   ,   ""**%**"``    [JH
                     { @@@M@pp,    `        `"*k    ,awp@@@@ N
                     H]MM@@@@@@@@B|L-   jp[]J ]   J|K@@@@@@@@MMU]-
                    ] H     `""**B|L-\B$2#<""L@ ppJ|K**"``     ] N
                    & @@@@@@pp,  R|L-`{RDM@www*[HHJ|K  ,awp@@@@@H1
                    NjMMM@@@@@@@@B|L-"' `` "F '"` J|K@@@@@@@@MMMH]
                $U  Nj      `""*%B|kbzP~pz~~pc~Tzz/|KP*"`-      H]  ]@
                B`U 1 @@@@@@pp,  UZLpp$,,,"",,Z)pppSJ  ,awp@@@@@ & g`1
             %B*"  *pN'MM@@@@@@@@@@@@@@@@MMMM@@@@@@@@@@@@@@@@MMH]y*  `**M
              "W ]D*u"VZu   `""*%MM*"`          ""*%MP*"``   ,QA"a*]U a"
                ]U *uZ%*p"M@pp,     ,ap@@@@@@@@pp,     JawpM",B@)w* `D
               ]"     "*w2vJ*M@@@@@@@@@@@MMMM@@@@@@@@@@@M*)wQw*"     `U
                *u  MZ"*wp& "WwJ"*MB"`          ""%MB")aw"`&,w*")&- a*
                  'M,`"*w@      `"*Wwp"*~,  ,w*",aw*""      ]w^", 1`
                  $ %wUMg,'"<u         "*v',w*`         aw"`y @p%A %
                   "Ww,`-C]ayw`"Wp        ``        ,w"-at4UwU",aw"`
                       "*v, *CAMUp"*w           ,a*" pN*wU`,w*`
                           '*Wp"*Ag"p,"*vwpaaw*"`w%p-` ,w"`
                               "*v;"  N* , ,. 4D1H";w*"
                                       JA"]%p
                          
    )";
                  
                  for(char c: a)
                                    {
                                if(c!=' ')
                                {
                  	cout<<c;
                  	cout.flush();
                  	this_thread::sleep_for(chrono::microseconds(500)); 
                  	}
                  	else	   
                  	cout<<c;
                  }
                  
                 cout<<endl;
}






void welcomeMessage()
{    
logo();
	string ph;

ph=".\n**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*.\n*@=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=@*.\n*@=@                                                                                   @=@*.\n*@=@   W         W  EEEEEEE  L             CCCCCC      O O O    M         M  EEEEEEE   @=@*.\n*@=@   W         W  E        L           CC      CC   O     O   M M     M M  E         @=@*.\n*@=@   W    W    W  E        L           C           O       O  M  M   M  M  E         @=@*.\n*@=@   W   W W   W  EEEEEEE  L          C            O       O  M   M M   M  EEEEEEE   @=@*.\n*@=@   W  W   W  W  E        L           C           O       O  M    M    M  E         @=@*.\n*@=@   W W     W W  E        L           CC      CC   O     O   M         M  E         @=@*.\n*@=@   W         W  EEEEEEE  LLLLLLLLL     CCCCCC      O O O    M         M  EEEEEEE   @=@*.\n*@=@                                                                                   @=@*.\n*@=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=@*.\n**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*";

  
 for (char c : ph) {
 	if(c=='.')
 	{
 	this_thread::sleep_for(chrono::milliseconds(50)); 	   
 	}
 	else	
 	if(c=='*')
 	{
 		cout<<redColor<<c<<resetColor << flush;         
 	}
 	else 	
 	if(c=='=')
 	{
 		cout<<magentaColor<<c<<resetColor << flush;         
 	}
 	else
 	 	if(c=='W'||c=='L'||c=='O'||c=='C'||c=='M'||c=='E')
 	{
 		cout<<  greenTextMagentaBackground<<c<<resetColor << flush;         
 	}
 	else 	
 	
 	 	if(c=='@')
 	{
 		cout<<" "<< flush;         
 	}
 	
 	else 	
 	
 	 	if(c=='-')
 	{
 		cout<<cyanColor<<c<<resetColor<< flush;         
 	}
 
 else 	
 	
 	 	if(c==' ')
 	{
 		cout<<bg1<<c<<resetColor <<flush;         
 	}
 	
   else
   {
   	cout<<c << flush;         
   }

 }
    cout<<redColor<<"\n\nEnter any key to continue.....";
    
     chrono::seconds duration(1);
    this_thread::sleep_for(duration);    
    char a;
     
   cin>>a;
   cout<<resetColor;  
    system("cls");
}

int calculate_days(int birthday, int birthmonth, int birthyear, int currentday, int currentmonth, int currentyear) {
    int days = 0;
      
    // Add days for each full year
 
    for (int year=birthyear+1; year<currentyear; ++year) {
        days += isLeapYear(year) ? 366 : 365;
    }
    
    // Add days for remaining months in birth year
    for (int month = birthmonth + 1; month <= 12; ++month) {
        days += daysInMonth(month, birthyear);
    }

    // Add days in birth month up to birth day
    days += daysInMonth(birthmonth, birthyear) - birthday;

    // Add days for months in current year up to current month
    for (int month = 1; month < currentmonth; ++month) {
        days += daysInMonth(month, currentyear);
    }
    // Add days for current day
    days += currentday;
    // if same year
   if(birthyear==currentyear){
  days-=isLeapYear(currentyear) ? 366 : 365;
   }
    return days;
}





void displayWeeklyData() {
    headMessage("-----------------<(Weekly Report)>-----------------");
    ifstream file("issues3.txt");
char a;
    if (!file.is_open()) {
        cerr <<redColor<< "Error opening the file!" << endl;
        cout<<cyanColor<<"Enter any key to continue......."<<resetColor ;
        cin>>a;
        return;
    }

    string studentId, bookId;
    int days;
    int day,month,year;
    int cd, cm, cy;
    int issueCount = 0;
    time_t  currentTime =  time(nullptr);
     tm* localTime =  localtime(&currentTime);
        cd=localTime->tm_mday;
        cm=(localTime->tm_mon + 1);
         cy=(localTime->tm_year + 1900);
         
           //cout <<magentaColor<< "   Student ID: " << studentId << "   Book ID: " << bookId<< "   Issue  Date " << resetColor << endl;
    while (file >> studentId >> bookId >> day >> month >> year) {
        days=calculate_days(day,month,year,cd,cm,cy);
             
        if (days<=7) {
                cout <<cyanColor<< " |  "<<resetColor <<setw(10) <<left << studentId
                    <<cyanColor<< " |  "<<resetColor<< setw(10) << left << bookId
                     <<cyanColor<< " |  "<<resetColor<< setw(2)<<right<< day << '/'<<setw(2)<<left<< month << '/' << year  <<cyanColor<< " | "<<resetColor<<endl;
                     
            issueCount++;
        }
            }

    file.close();

    cout <<greenColor<< "Number of books issued in this week: " <<cyanColor<< issueCount << resetColor<<endl;
    
    cout<<endl<<cyanColor<<"\nPress any key to continue...."<<resetColor;
   cin>>a;		
}


void displayMonthlyData() {
    headMessage("-----------------<(Monthly Report)>-----------------");
    char a;
    ifstream file("issues3.txt");

    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return;
    }

    string studentId, bookId;
    
    int day,month,year;
    int cd, cm, cy;
    int issueCount = 0;
    time_t  currentTime =  time(nullptr);
     tm* localTime =  localtime(&currentTime);
        cd=localTime->tm_mday;
        cm=(localTime->tm_mon + 1);
         cy=(localTime->tm_year + 1900);
         
         
         //cout <<magentaColor<< "   Student ID: " << studentId << "   Book ID: " << bookId<< "   Issue  Date " << resetColor << endl;
    while (file >> studentId >> bookId >> day >> month >> year) {
      
             
        if (year==cy&&month==cm) {
          
            cout <<cyanColor<< " |  "<<resetColor <<setw(10) <<left << studentId
                    <<cyanColor<< " |  "<<resetColor<< setw(10) << left << bookId
                     <<cyanColor<< " |  "<<resetColor<< setw(2)<<right<< day << '/'<<setw(2)<<left<< month << '/' << year  <<cyanColor<< " | "<<resetColor<<endl;
                     issueCount++;
    }
            
            }
        
       

    file.close();

    cout<<endl <<greenColor<< " Number of books issued in current month: " <<cyanColor<< issueCount << resetColor<<endl;
    
    cout<<endl<<cyanColor<<"\nPress any key to continue...."<<resetColor;
   cin>>a;		
    
}


void displayTodayData() {
    ifstream file("issues3.txt");
char a;
    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return;
    }

    string studentId, bookId;
    
    int day,month,year;
    int cd, cm, cy;
    int issueCount = 0;
    time_t  currentTime =  time(nullptr);
     tm* localTime =  localtime(&currentTime);
        cd=localTime->tm_mday;
        cm=(localTime->tm_mon + 1);
         cy=(localTime->tm_year + 1900);
        //   cout <<magentaColor<< "   Student ID: " << studentId << "   Book ID: " << bookId<< "   Issue  Date " << resetColor << endl;
    while (file >> studentId >> bookId >> day >> month >> year) {
      ;
             
        if (year==cy&&month==cm&&day==cd) {
                cout <<cyanColor<< " |  "<<resetColor <<setw(10) <<left << studentId
                    <<cyanColor<< " |  "<<resetColor<< setw(10) << left << bookId
                     <<cyanColor<< " |  "<<resetColor<< setw(2)<<right<< day << '/'<<setw(2)<<left<< month << '/' << year  <<cyanColor<< " | "<<resetColor<<endl;
                     issueCount++;
        }
            }

    file.close();

    cout <<greenColor<< "Number of books issued today: " <<cyanColor<< issueCount << resetColor<<endl;
    cout<<endl<<cyanColor<<"\nPress any key to continue...."<<resetColor;
   cin>>a;		
}



void displayYearlyData() {
    ifstream file("issues3.txt");
char a;
    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return;
    }

    string studentId, bookId;
    
    int day,month,year;
    int cd, cm, cy;
    int issueCount = 0;
    time_t  currentTime =  time(nullptr);
     tm* localTime =  localtime(&currentTime);
        cd=localTime->tm_mday;
        cm=(localTime->tm_mon + 1);
         cy=(localTime->tm_year + 1900);
           
    while (file >> studentId >> bookId >> day >> month >> year) {
      
             
        if (year==cy) {
              cout <<cyanColor<< " |  "<<resetColor <<setw(10) <<left << studentId
                    <<cyanColor<< " |  "<<resetColor<< setw(10) << left << bookId
                     <<cyanColor<< " |  "<<resetColor<< setw(2)<<right<< day << '/'<<setw(2)<<left<< month << '/' << year  <<cyanColor<< " | "<<resetColor<<endl;
                     issueCount++;
        }
            }

    file.close();

    cout <<endl<<greenColor<< " Number of books issued in current year: " <<cyanColor<< issueCount << resetColor<<endl;
    cout<<endl<<cyanColor<<"\nPress any key to continue...."<<resetColor;
   cin>>a;		
    
    
}








void addIssue(string s, string b, int d, int m, int y) {
    ofstream file("issues3.txt", ios::app);

    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return;
    }

    file << s << ' ' << b << ' ' << d << ' ' << m << ' ' << y << '\n';

    file.close();
}

int displayIssues() {
    ifstream file("issues3.txt");

    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 0;
    }

    string studentId, bookId;
    int day, month, year;
    int issueCount = 0;

    while (file >> studentId >> bookId >> day >> month >> year) {
        cout << "Student ID: " << studentId << ", Book ID: " << bookId
                  << ", Date: " << day << '/' << month << '/' << year << endl;
        issueCount++;
    }

    file.close();
    return issueCount;
}




class user
{
private:
string username="Haseeb321";
string password="password";
public:

void change();
void identification();
};

void user::change(){
	char a;
	char aa;
	string match;
	system("cls");
    headMessage("----------<(Change Identity)>----------");
	
	cout<<"Enter choice(1-3)\n";
cout<<cyanColor<<"[1]. "<<resetColor<<"To change Username\n";
	cout<<cyanColor<<"[2]. "<<resetColor<<"To change Password \n";
	cout<<cyanColor<<"[3]. "<<resetColor<<"To change Both\n";
	cout<<lightRedColor<<"Or press any other key to back\n"<<resetColor;
	cout<<cyanColor;
	cin>>aa;
	cout<<resetColor;
	if(aa=='1')
	{
	agg:	
		cout<<"Enter Current Username :";
		cin>>match;
		if(match==username)
		{
			
			cout<<"Enter new username(8-12):";
			ag:
			cin>>match;
			if(match.length()>12||match.length()<8)
			{
			cout<<"Length of username must be under(8-12)\nTry again :";
			goto ag;
			}
			if(match==username)
		{
			cout<<"You Entered previous Username\n";
			cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1')
			{
			cout<<"Enter new username(8-12):";
			goto ag;
			}
			else
			return;						
		}
		else
		{
		username=match;
			cout<<greenColor<<"-----<(Username Changed)>----- "<<endl;
		cout<<cyanColor<<"\nPress any key to continue...."<<resetColor;
		//cin.ignore();
   cin>>a;				
		}
		
		}
		else
		{
		
		cout<<"Username did not match\n";
		cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1')
			{
			goto agg;
			}
			else
			return;			
		}
		
		}
	
	
	else
	if(aa=='2')
	{
		
		cout<<"Enter Current Password :";
agg1:
				cin>>match;
		if(match==password)
		{
			
			cout<<"Enter new Password(6-8):";
			ag1:
			cin>>match;
			if(match.length()>8||match.length()<6){
			cout<<"Length of password must be under(6-8) \nTry again :";
			goto ag1;
			}
			if(match==password)
		{
			cout<<"You Entered previous Password \n";
			cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1'){
					cout<<"Enter new Password(6-8):";
			goto ag1;
			}
			else
			return;						
		}
		else
		{
			password=match;
			cout<<greenColor<<"-----<(Password Changed)>----- "<<endl;
		cout<<cyanColor<<"\nPress any key to continue...."<<resetColor;
   cin>>a;		
		}
		
		}
		else
		{
		cout<<"Password did not match\n";
		cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1'){
					cout<<"Enter Current Password(6-8):";
			goto agg1;
			}
			else
			return;			
		}
		
	}
	else
	if(aa=='3')
	{
		
		//main
	
		string match1;
		agg3:
   	cout<<"Enter Current Username :";
		cin>>match;
		if(match==username)
		{//if current valid
			
			cout<<"Enter new username(8-12):";
			ag3:
			cin>>match;
			if(match.length()>12||match.length()<8){
			cout<<"Length of username must be under(8-12)\nTry again :";
			goto ag3;
			}
			if(match==username)
		{
			cout<<"You Entered previous Username\n";
			cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1'){
			cout<<"Enter new username(8-12):";
			goto ag3;
			}
			else
			return;						
		}		
		
		}//if current valid
		else
		{
			cout<<"Username did not match\n";
		cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1'){
			goto agg3;
			}
			else
			return;			
			
		}

//2
		agg4:
		cout<<"Enter Current Password :";
		cin>>match1;
		if(match1==password)
		{//if current valid
			
			cout<<"Enter new Password(6-8):";
			ag4:
			cin>>match1;
			if(match1.length()>8||match1.length()<6){
			cout<<"Length of password must be under(6-8)\nTry again :";
			goto ag4;
			}
			if(match1==password)
		{
			cout<<"You Entered previous Password \n";
			cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1'){
					cout<<"Enter new Password(6-8):";
			goto ag4;
			}
			else
			return;						
		}
		else
		{ 
		    username=match;
			password=match1;
			cout<<greenColor<<"-----<(Username & Password Changed)>----- "<<endl;
		cout<<endl<<cyanColor<<"\nPress any key to continue...."<<resetColor;
   cin>>a;		
		}
		
		}				
		else
		{
			//
			cout<<"Password did not match\n";
		cout<<"Enter (1) to try again\n";
			cout<<"Or press any key to back menu\nEnter :";
			cin>>a;
			if(a=='1'){
			goto agg4;
			}
			else
			return;			
			
		}//else
		
	
	
	}//if3
	
	
	else
	{
		return;
	}
	
}


void user::identification()
{
	char a;
	system("cls");
    headMessage("----------<(ADMIN LOGIN)>----------");
	
	string u;
	
	cout<<"Enter Username ";
	user:
	//	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
//	getline(cin,u);
//	getline(cin>>ws,u);

cout<<cyanColor;
	cin>>u;
	cout<<resetColor;


	if(username!=u)
	{
		cout<<redColor<<"Invalid Username\n"<<resetColor <<" Enter Again ";
		goto user;
	}
	cout<<"Enter Password ";
	pass:
	cout<<cyanColor;
	cin>>u;
	cout<<resetColor;
//	getline(cin>>ws,u);
	if(password!=u)
	{
		cout<<redColor<<"Invalid Password"<<resetColor <<endl <<
		"Enter Again ";
		goto pass;
	}
	else
	{
		cout<<greenColor<<"-----<(Access Granted)>----- "<<endl;
		cout<<redColor<<"\nPress any key to continue....";
		//cin.ignore();
 
	cin>>a;
	cout<<resetColor;
	}
}




//__________________Book Node Start_________

class bknode{
    private:
    string bkname;
    string author;
    string bkid;
    int price;
    int copies;
    int category;
    bknode *next;
    bknode *prev;

    public:
    bknode(string,string,string,int,int,int);
    void setcopies(int);
    int getcopies();
    void setprice(int);
    int getprice();
    void setbkid(string);
     string getbkid();
    void setbkname(string);
     string getbkname();
     void setauthor(string);
     string getauthor();

    void setnextbk(bknode *);
    void setprevbk(bknode *);
    bknode* getnextbk();
    bknode * getprevbk();
    void showbkdata();

void set_type(int);
    int get_type();
};

bknode :: bknode(string n, string i,string a, int p,int c, int t)
{
    set_type(t);
    setbkname(n);
    setbkid(i);
    setauthor(a);
    setprice(p);
    setcopies(c);
    prev = NULL;
    next = NULL;
}
void bknode::set_type(int t){
		category = t;	
}
int bknode::get_type()
{
	return category;
}

void bknode::setcopies(int c)
{
    copies=c;
}


int bknode::getcopies()
{
    return copies;
}


void bknode::setprice(int p)
{
    price = p;
}


int bknode::getprice()
{
    return price;
}

void bknode::setbkname(string n)
{
    bkname = n;
}


string bknode::getbkname()
{
    return bkname;
}
void bknode::setbkid(string i)
{
    bkid = i;
}


string bknode::getbkid()
{
    return bkid;
}


void bknode::setauthor(string a)
{
    author = a;
}


string bknode::getauthor()
{
    return author;
}


void bknode::setnextbk(bknode *ptr)
{
    next = ptr;
}
bknode *bknode::getnextbk()
{
    return next;
}
void bknode::setprevbk(bknode *ptr)
{
    prev = ptr;
}
bknode * bknode::getprevbk()
{
    return prev;
}

void bknode::showbkdata()
{
    cout<<"\n_______________________________________\n";
    cout << "Book Name is:" << bkname << endl;
    cout<<"Book Id is:"<<bkid<<endl ;
     cout << "Author Name is:" << author << endl;
     cout<<"price is:"<<price<<endl;
     cout<<"No of Copies:"<<copies<<endl;
cout<<"Book Category :"<<type[category]<<endl;
     
}

//__________________Book Node End_________

class bklist
{
	private:
	bknode *bkhead;
	bknode *bkcurrent;
    long long int bksize;
//	string type[101];
//    int type_count;
	public:
	bklist();//checked
	
void addbk();//checked
int findbk(string);//checked
void addbk(string,string,string,int,int,int);//checked 
void updatebk();//checked
void showallbk();//checked
void showspecificbk();//checked
void displaybk(int);
void totalbk();//checked
void deletbk();//checked

int setcat();
void searchBooksbyTitle();
void searchBooksbyAuthor();//done

 void searchBookbycategory();
 void showcategory(int);//done
friend class issue_list;
};
//

void bklist::showcategory(int a)
{
//	char aa;
	int j=0;
	
bknode *ptr = bkhead;
cout<<magentaColor<<"Block No: "<<cyanColor<<"-<("<<a<<")>-\n"<<resetColor;
    while (ptr != NULL)
    {
     //   ptr->showbkdata();
     if(ptr->get_type()==a)
     {
        j++;
        if(j==1)
             {
              cout<<magentaColor<<"               --<(BOOK TITLE)>--                                    --<(AUTHOR NAME)>--"<<resetColor <<endl;
               cout<<cyanColor<<"---------------------------------------------------------------------------------"<<resetColor<<endl;
             }
        
        cout<<cyanColor <<"["<< j<<"]."<<resetColor <<setw(40) <<left << ptr->getbkname() <<cyanColor<< " |  "<<resetColor<< setw(30)<<left <<ptr->getauthor()<<cyanColor<< " |  "<<resetColor <<  endl;
     }
     
        ptr = ptr->getnextbk(); // assigning address of next element
    
    }

    
        if(j>0)
   cout<<cyanColor<<"---------------------------------------------------------------------------------"<<resetColor<<endl;
    
    
    if(j==0)
    cout<<"There is no Book in this category\n";
    //cout<<"Enter any key to continue....";
//    cin>>aa;
    return;
    }
    
    
    
    
    
void bklist::searchBooksbyAuthor(){
     	char a;
     	
     		system("cls");
	
     	
     	int j;
     	bknode *ptr;
     	string searchTerm;
   int arr[101];
     	    int cnt;
     	xyz:
     	headMessage("----<(Search Book By Author)>----");
     	cout<<"Enter search term\n";
     
     	    
        getline(cin,searchTerm);//input
        searchTerm=trimSpaces(searchTerm);
     ptr = bkhead;
 
     j=0;
     
     string searchTermLower = searchTerm;
     transform(searchTermLower.begin(), searchTermLower.end(), searchTermLower.begin(), ::tolower);

    //-----------
     for(int h=0;h<=100;h++)
     {
     arr[h]=0;
     }
     //-----------
     cnt=0;
    for (int i = 1; i <=bksize; i++) {
       
        string bookLower = ptr->getauthor();
         transform(bookLower.begin(), bookLower.end(), bookLower.begin(), ::tolower);

        // Check if the lowercase book name contains the lowercase search term
        if (bookLower.find(searchTermLower) !=  string::npos)
         {
             
             
             cnt++;             
             arr[cnt]=i;
             if(cnt==1)
             {
              cout<<magentaColor<<"    --<(AUTHOR NAME)>--                             --<(BOOK TITLE)>--"<<resetColor <<endl;
              cout<<cyanColor<<"---------------------------------------------------------------------------------"<<resetColor<<endl;
             }
             cout <<cyanColor<<"["<<setw(2)<<right<<cnt<< "]. " <<resetColor<<setw(30)<<left<< ptr->getauthor()<<cyanColor <<" | "<<resetColor  <<setw(40)<<left<<ptr->getbkname()<<cyanColor<< " | " <<resetColor<<endl;
                  j=1;
                                    
                  
        } //if match   
           
                      
           ptr = ptr->getnextbk();
    }//for loop
    
    
        if(j>0)
   cout<<cyanColor<<"---------------------------------------------------------------------------------"<<resetColor<<endl;
    
    
    if(j==0)
    {
    cout<<redColor<<"No search match"<<resetColor <<" \nEnter 1 to Try again \nOr press any key to back\nEnter choice: ";
    char s;
    cin>>s;
    if(s=='1')
    {
    cin.ignore();
    goto xyz;
   }     
   else
   return;    
   }
    else
    {  
    	cout<<"\nEnter Your choice(0-"<<cnt<<")\nEnter 0 to search again\nEnter the serial number of the Author you want to view:  \nOr press any other key to back\nEnter choice :";
    int q;
    cin>>q;    
    if(cin.fail())
    {
    	cin.clear();
		cin.ignore(INT_MAX, '\n');
				
    	return;
    }
    if(q==0)
    {
    cin.ignore();
    goto xyz;
    }
    if(q>=1&&q<=cnt)
    {
    int g=arr[q];
    displaybk(g);
    cout<<redColor<<"\nPress any key to continue...."<<resetColor;
    //cin.ignore();
   cin>>a;
    }
    else
    {
    	return;
    }
    }
}


//
void bklist:: displaybk(int c){
	system("cls");
	headMessage("----<(Display Book Record)>----");
	if(bksize==0)
	{
		cout<<"Book list is empty \n";
	}
	
	else
	
	{

		bknode *ptr=bkhead;
		for(int j=1;j<c;j++)
		{
			ptr=ptr->getnextbk();
		}
		cout<<magentaColor<<"Block No: "<<cyanColor<<"-<("<<ptr->get_type()<<")>-"<<resetColor;
		ptr->showbkdata();
	}

}






     void bklist::searchBooksbyTitle(){
     		system("cls");
	
	char a;
          	
     	int j;
     	bknode *ptr;
     	string searchTerm;
   int arr[101];
     	    int cnt;
     	    xyz:
     	    headMessage("----<(Search Book By Title)>----");
     	
     	cout<<"Enter search term\n";
     
     	    
        getline(cin,searchTerm);//input
        searchTerm=trimSpaces(searchTerm);
     ptr = bkhead;
 
     j=0;
     
     string searchTermLower = searchTerm;
     transform(searchTermLower.begin(), searchTermLower.end(), searchTermLower.begin(), ::tolower);

    //-----------
     for(int h=0;h<=100;h++)
     {
     arr[h]=0;
     }
     //-----------
     cnt=0;
    for (int i = 1; i <=bksize; i++) {
        
        string bookLower = ptr->getbkname();
         transform(bookLower.begin(), bookLower.end(), bookLower.begin(), ::tolower);

        // Check if the lowercase book name contains the lowercase search term
        if (bookLower.find(searchTermLower) !=  string::npos)
         {
             cnt++;             
             arr[cnt]=i;
             if(cnt==1)
             {
              cout<<magentaColor<<"               --<(BOOK TITLE)>--                                    --<(AUTHOR NAME)>--"<<resetColor <<endl;
                 cout<<cyanColor<<"---------------------------------------------------------------------------------"<<resetColor<<endl;
             }
              cout <<cyanColor<<"["<<setw(2)<<right<<cnt<< "]. " <<resetColor<<setw(40)<<left<< ptr->getbkname()<<cyanColor <<" | "<<resetColor  <<setw(30)<<left<<ptr->getauthor()<<cyanColor<< " | " <<resetColor<<endl;
//             cout <<cyanColor<<"["<<cnt<< "]. "<<resetColor << ptr->getbkname() <<" ("<<ptr->getauthor()<<")"<<  endl;
                  j=1;
        } //if match   
           
           ptr = ptr->getnextbk();
    }//for loop
    
        if(j>0)
   cout<<cyanColor<<"---------------------------------------------------------------------------------"<<resetColor<<endl;
    if(j==0)
    {
    cout<<redColor<<"No search match"<<resetColor<<" \nEnter 1 to Try again \nOr press any key to back\nEnter choice: ";
    char s;
    cin>>s;
    if(s=='1')
    {
    	cin.ignore();
    goto xyz;
   }       
   else
   return; 
   }
    else
    {  
    	cout<<"\nEnter Your choice(0-"<<cnt<<")\nEnter 0 to search again\nEnter the serial number of the book you want to view:  \nOr press any other key to back\nEnter choice :";
    int q;
    cin>>q;    
    if(cin.fail())
    {
    		cin.clear();
		cin.ignore(INT_MAX, '\n');
    	return;
    }
    if(q==0)
    {
    cin.ignore();
    goto xyz;
    }
    else
    if(q>=1&&q<=cnt)
    {
    int g=arr[q];
    displaybk(g);
    cout<<redColor<<"\nPress any key to continue...."<<resetColor;
    //cin.ignore();
   cin>>a;
    return;
    }
    else
    {
    	return;
    }
    
    }
}



void bklist::searchBookbycategory()
{
	char a;
	
	int c,cc;
	back:
	system("cls");
	headMessage("----<(Search Books By Category)>----");
	
	
cout<<"-----<(Select category)>-----\n";
cout<<cyanColor<<"[1]."<<resetColor<<"To view all existing categories\n";
cout<<cyanColor<<"[2]."<<resetColor  <<"To search category\n";
cout <<cyanColor<<"[3]."<<resetColor<<"To back options\n";
	cout<<"Enter choice : ";
	abc:
cin>>c;
	if(cin.fail())
	{
		cout<<redColor<<"invalid input!"<<resetColor<<"\nEnter again:";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		goto abc;
	}
	else
	if(c!=1&&c!=2&&c!=3)
	{
		cout<<redColor<<"Invalid choice "<<resetColor<<"\nPlease Enter again:\n"<<resetColor;
		goto abc;
	}
	else
	if(c==3)
	{
		return;
	}
if(c==1)//________________1
		{
		//	cout<<"Enter serial number(1-"<<type_count<<")\n";
		cout<<endl;
			headMessage("----<(All Categories)>----");
	
	cout<<redColor<<"[0]."<<resetColor<<"To back option\n";	
		for(int i=1;i<=type_count;i++)
	{
	cout<<cyanColor<<"["<<i<<"]."<<resetColor<<type[i]<<endl;
	}
	
			cout<<"Enter serial number(0-"<<type_count<<")\n";
	eg:
	cin>>cc;
	if(cin.fail())
	{
		cout<<redColor<<"invalid input!"<<resetColor <<"\nEnter again:"<<resetColor;
		
			cin.clear();
		cin.ignore(INT_MAX, '\n');
		goto eg;
	}
	if(cc<0||cc>type_count)
	{
		cout<<redColor<<"Invalid choice!"<<resetColor<< " Please Enter again:\n"<<resetColor;
		goto eg;
	}
	
		if(cc>=1&&cc<=type_count)
	{
		showcategory(cc);
		
		
		cout<<cyanColor<<"PRESS any key to continue......"<<resetColor;
    //cin.ignore();
    cin>>a;
    return ;
	}
	else	
	if(cc==0)
	{//1		
			goto back;
	}
			
	}//__________1
	else
	if(c==2)//________________2
	{
	headMessage("----<(Search Category)>----");
	
     int j;     	
 	string searchTerm;
     int arr[101];
     int cnt;	
     xyz:
		cout<<"Enter search term:";
		
		cin.ignore();
        getline(cin,searchTerm);//input
        searchTerm=trimSpaces(searchTerm);string searchTermLower = searchTerm;
     transform(searchTermLower.begin(), searchTermLower.end(), searchTermLower.begin(), ::tolower);     
     j=0;
    //-----------
     for(int h=0;h<=100;h++)
     {
     arr[h]=0;
     }
     //-----------
     cnt=0;
     cout<<redColor<<"[0]"<<resetColor<<"To back options\n";//cout<<" \nEnter choice";
 for(int i=1;i<=type_count;i++)
        {//for1
        string bookLower = type[i];
         transform(bookLower.begin(), bookLower.end(), bookLower.begin(), ::tolower);

        // Check if the lowercase book name contains the lowercase search term
        if (bookLower.find(searchTermLower) !=  string::npos)
         {
         	cnt++;             
             arr[cnt]=i;
             cout<<cyanColor <<"["<<cnt<< "]. " <<resetColor<< type[i]<<  endl;
                  j=1;        	
         }
        }//for1
         
    if(j==0)
    {//2
    int s;
    cout<<redColor<<"No search match\n"<<resetColor;
    ss:
    cout<<"Enter 1 to search again \n";
   cout<< "Enter any other key to back options\n";
   cout<<"Enter choice: ";
   
    cin>>s;
    if(cin.fail())
    {
    	cout<<redColor<<"Invalid input!\n"<<resetColor;
    		cin.clear();
		cin.ignore(INT_MAX, '\n');
    	goto ss;
    }
    if(s==1)
    {
    	
    goto xyz;
   }         
   
	else
	{
	   cout<<redColor<<"Invalid input! "<<resetColor<<"Enter again\n"<<resetColor ;
    	goto ss;
	}
    }//2
    /////
    else
    {  
    	cout<<"Enter Your choice"<<cyanColor<<"(0-"<<cnt<<")"<<resetColor<<"\nEnter the serial number of the category you want to select\n";
 //   	cout<<redColor<<"[0]"<<resetColor<<"To back options";cout<<" \nEnter choice;
    int q;
    qq:
    cin>>q;    
    if(cin.fail())
    {
    	cout<<redColor<<"Invalid input!"<<resetColor <<"\nEnter again:"<<resetColor;
    	cin.clear();
		cin.ignore(INT_MAX, '\n');    	
    //	cin.ignore();
    goto qq;
    }
    else
    if(q==0)
    {
    goto back;
    }
    else
    if(q>=1&&q<=cnt)
    {
    showcategory(arr[q]);
    cout<<cyanColor<<"PRESS any key to continue......"<<resetColor;
    //cin.ignore();
    cin>>a;
    return ;
    }
    else
    {//
    	cout<<redColor<<"Invalid Input Entered!"<<resetColor<<"\nEnter again:";
    	cin.ignore();
    goto qq;
    }//
    }//else   
    
    cout<<cyanColor<<"PRESS any key to continue......"<<resetColor;
    //cin.ignore();
    cin>>a;
    return ;
}//1

}

int bklist::setcat(){//main
int c;
int cc;
back:
cout<<"-----<(Select category)>-----\n";
cout<<"Enter (1) to view all existing categories\n";
cout<<"Enter (2) to search category\n";cout<<"Enter (3) to create new category\n";
abc:


cin>>c;
	if(cin.fail())
	{
		cout<<redColor<<"invalid input!"<<resetColor<<"nEnter again:";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		goto abc;
	}
	else
	if(c!=1&&c!=2&&c!=3)
	{
	  	cout<<redColor<<"Invalid choice please Enter again:\n"<<resetColor;
		goto abc;
	}
	else
	if(c==3)//_________________3
	{//outerif
	int check;
	int g;
	string input;
   // int number;  
		cout<<"Enter unique Name of new category for this book:";
				
	//	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
	
	
		cin.ignore();
		unique1:	
		string cn;
		getline(cin,cn);
		cn=trimSpaces(cn);
		check=0;
		for(int a=1;a<=type_count;a++)
		{// for loop				
        if (strcasecmp(type[a].c_str(), cn.c_str()) == 0) 
		{// if match
		check=1;
			cout<<"This name is already available\n";
			unique2:
			cout<<"Enter (1) to try again\nEnter (2) to back options\nEnter choice:";

			
																												
			cin>>g;
			if(cin.fail())
	       {
	      cin.clear();
	//      cin.ignore(INT_MAX, '\n');
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	       	cout<<redColor<<"Invalid input!\nEnter again please\n"<<resetColor;
	       	goto unique2;
	       }
	       
	      else 
	       if(g==2){
				goto back;
			}
			else
			 if(g==1){
			 	cout<<"Enter unique Name of new category for this book:";
	   	cin.ignore();
			goto unique1;
			}
			else
			if(g>2||g<1)
			{
				cout<<redColor<<"Invalid choice!"<<resetColor<<"\nEnter again please\n";				
				goto unique2;
			}
			
		}	// if match
		}	// for loop
		if(check==0)
		{
		char l;
		cout<<"Enter "<<cyanColor<<"(Y/y)"<<resetColor<<"to confirm \n";
				cout<<"Enter "<<cyanColor<<"(N/n)"<<resetColor<<"to back options \n";
			
		ll:
		cin>>l;
	
		if(l=='N'||l=='n')
		{
			goto back;
		}
		if(l=='Y'||l=='y')
		{
		type_count+=1;
		type[type_count]=cn;
		return type_count;
		}
		else
		{
			cout<<redColor<<"invalid input!"<<resetColor<<"\nEnter again:";
			goto ll;
		}
		}
	}// outer if
	
	else
	if(c==1)//________________1
		{
			cout<<"Enter serial number(1-"<<type_count<<")\n";
	
		for(int i=1;i<=type_count;i++)
	{
	cout<<i<<"."<<type[i]<<endl;
	}
	cout<<"0.(To back option) \n";	
			
	eg:
	cin>>cc;
	if(cin.fail())
	{
		cout<<redColor<<"invalid input!"<<resetColor<<"nEnter again:";
		
			cin.clear();
		cin.ignore(INT_MAX, '\n');
		goto eg;
	}
	if(cc<0||cc>type_count)
	{
	 	cout<<redColor<<"Invalid choice please Enter again:\n"<<resetColor;
		goto eg;
	}
	
		if(cc>=1&&cc<=type_count)
	{
		return cc;
	}
	else	
	if(cc==0)
	{//1		
			goto back;
	}
			
	}
	else
	if(c==2)//________________2
	{
	
	
     int j;     	
 	string searchTerm;
     int arr[101];
     int cnt;	
     xyz:
		cout<<"Enter search term:";
		
		cin.ignore();
        getline(cin,searchTerm);//input
        searchTerm=trimSpaces(searchTerm);string searchTermLower = searchTerm;
     transform(searchTermLower.begin(), searchTermLower.end(), searchTermLower.begin(), ::tolower);     
     j=0;
    //-----------
     for(int h=0;h<=100;h++)
     {
     arr[h]=0;
     }
     //-----------
     cnt=0;
 for(int i=1;i<=type_count;i++)
        {//for1
        string bookLower = type[i];
         transform(bookLower.begin(), bookLower.end(), bookLower.begin(), ::tolower);

        // Check if the lowercase book name contains the lowercase search term
        if (bookLower.find(searchTermLower) !=  string::npos)
         {
         	cnt++;             
             arr[cnt]=i;
             cout <<cnt<< ". " << type[i]<<  endl;
                  j=1;        	
         }
        }//for1
         
    if(j==0)
    {//2
    int s;
    cout<<"No search match\n";
    ss:
    cout<<"Enter 1 to search again \nEnter 2 to back options\nEnter choice: ";
   
    cin>>s;
    if(cin.fail())
    {
    	cout<<"Invalid input!\n";
    		cin.clear();
		cin.ignore(INT_MAX, '\n');
    	goto ss;
    }
    if(s==1)
    {
    	
    goto xyz;
   }         
   else
   if(s==2)
	{
	goto back;
	}
	else
	{
	   cout<<"Invalid input! :Enter again\n";
    	goto ss;
	}
    }//2
    /////
    else
    {  
    	cout<<"Enter Your choice(0-"<<cnt<<")\nEnter the serial number of the category you want to select\nEnter 0 to back options \nEnter choice :";
    int q;
    qq:
    cin>>q;    
    if(cin.fail())
    {
    	cout<<redColor<<"Invalid Input Entered!"<<resetColor<<"\nEnter again:";
    	cin.clear();
		cin.ignore(INT_MAX, '\n');    	
    //	cin.ignore();
    goto qq;
    }
    else
    if(q==0)
    {
    goto back;
    }
    else
    if(q>=1&&q<=cnt)
    {
    return arr[q];
    }
    else
    {//
    	cout<<redColor<<"Invalid Input Entered!"<<resetColor<<"\nEnter again:";
    	cin.ignore();
    goto qq;
    }//
    }//else   
}//1
return 0;
}
//main




//--------------------------------
void bklist::deletbk(){
  char a;
  system("cls");
    
 // cout<<"\n---------------<(Delete Book)>--------------\n";
  if(bksize>0)
  {
  string ii;
  int check=0;
  opti:
  headMessage("----------<(Delete Book)>----------");
    cout<<"Enter book's id you want to delete"<<endl;
    cin>>ii;
    ii=trimSpaces(ii);
     check =findbk(ii);
    if(check==0)
    {    
        char ch;
        cout << "You Entered the wrong book I'd" << endl;
        cout<<"Enter (1) to try again"<<endl;
        cout<<"Press any other key to back"<<endl;
        cin>>ch;
        if(ch=='1'){
        goto opti;}
        else {return; }        
        
    }
    cout<<"Enter "<<greenColor<<"(1)"<<resetColor <<" to confirm\n";
    cout<<redColor<<"Enter any other key to cancel\n"<<resetColor;
    cin>>a;
    if(a!='1')
    {
    	return;
    }
    else
    {
    if(bksize==1)
    {
    	delete bkhead;
    }
    else
    
     if (check == 1)

    {

        bkcurrent  = bkhead;

        bkcurrent  = bkcurrent ->getnextbk();

        bkcurrent ->setprevbk(NULL);

        delete bkhead;

        bkhead = bkcurrent ;

    }

    else if (check == bksize)

    {

        bknode *ptr = bkhead;

        for (int i = 1; i < check - 1; i++)

        {

            ptr = ptr->getnextbk();

        }

        bkcurrent  = ptr;

        ptr = ptr->getnextbk();

        bkcurrent ->setnextbk(NULL);

        delete ptr;

    }

    
    else

    {

        bknode *ptr = bkcurrent  = bkhead;

        for (int i = 1; i < check - 1; i++)

        {

            bkcurrent  = bkcurrent ->getnextbk();

            ptr = ptr->getnextbk();

        }

        ptr = ptr->getnextbk();

        bkcurrent ->setnextbk(ptr->getnextbk());

        delete ptr;

        ptr=bkcurrent ->getnextbk();

        ptr->setprevbk(bkcurrent );

    }

    bksize--;
   cout<<"----<(Book Deleted)>----\n";
    }
    
  }//1st if
  else
  {
    cout<<"There is no book in the data\n";
  }
    
   
     cout<<cyanColor<<"PRESS any key to continue......"<<resetColor;
    //cin.ignore();
    cin>>a;
    return ;
    }    
    

//---------------------------

void bklist::totalbk()
{
	system("cls");
	headMessage("----------<(Registered Book Count)>--------");
	char a;
	int all=0;
bknode *ptr = bkhead;
    while (ptr != NULL)
    {
        all+=ptr->getcopies();
        ptr = ptr->getnextbk(); // assigning address of next element
    }	
    cout<<"Unique Books are: "<<bksize<<endl;
    cout<<"Total no of books are: "<<all<<endl;
     cout<<"\nPress any key to continue......";
    //cin.ignore();
    cin>>a;
    return ;
}


void bklist:: showspecificbk(){
	system("cls");
	headMessage("----------<(Display Specific Book)>--------");
	char a;
	if(bksize==0)
	{
		cout<<"Book list is empty \n";
	}
	else
	{
	string i;
	char ch;
	int c=0;
	opt0:
	cout<<"Enter book I'd: ";
	cin>>i;
	c=findbk(i);
	if(c>0)
	{
		bknode *ptr=bkhead;
		for(int j=1;j<c;j++)
		{
			ptr=ptr->getnextbk();
		}
		ptr->showbkdata();
	}
	else
	{
	cout<<"You entered the wrong I'd"<<endl;
	cout<<"Enter (1) to try again"<<endl;
	cout<<"Enter any other key to back"<<endl;
	cin>>ch;
	if(ch=='1')
	goto opt0;		
	}	
	}
	cout<<cyanColor<<"nPress any key to continue......"<<resetColor;
    //cin.ignore();
    cin>>a;
    return ;
}


bklist::bklist()
{
    bkhead = NULL;
    bkcurrent = NULL;
    bksize = 0;
    set_categories();
}

void bklist::addbk(string n,string i,string a, int p, int c, int t)
{
    char ch;
    int check=0;    
    opt:
    
    check=findbk(i);
    if(check>0)
    {
    	cout<<"Books is already added of this I'd ("<<i<<") \n";
    	cout<<"Enter your choice(1-2)"<<endl;
    	cout<<"1.add more copies of this book"<<endl;
    	cout<<"2.Change I'd "<<endl;
    	cout<<"Enter another key to back manu"<<endl;
    	cin>>ch;
    	if(ch=='1'){
    	cout<<"Enter no. of copies you want to add more:"<<endl;
    	cin>>c;
    	bknode *ptr=bkhead;
    	for(int j=1;j<check;j++)
    	ptr=ptr->getnextbk();
    	c+=ptr->getcopies();
    	ptr->setcopies(c);
    	}
    	else
    	if(ch=='2')
    	{
    		goto opt;
    	}
    	else
    	goto endpp;
    }///if
    
    else
    {
    
    bknode *ptr = new bknode(n,i,a,p,c,t); 
    if (bksize == 0)
    {
        bkhead = ptr;
        bkcurrent = ptr;
    }
    else
    {
        ptr->setprevbk(bkcurrent);             // set prev address of new node
        ptr->setnextbk(bkcurrent->getnextbk()); // giving value of next to new element assigned to ptr
        bkcurrent->setnextbk(ptr);            // giving address of new node to previous element of list
        bkcurrent = ptr; 
    }
    bksize++;
       
    }
    endpp:
;
}


void bklist::addbk()
{
    system("cls");
    headMessage("----------<(Register Book)>----------");
    char aa;
    //cout<<"\n---------------<(Add Book)>--------------\n";
    char ch;
    int check=0;
    string n,i,a;
    int p,c;
    optt:
    cout<<"Enter Book id(4-8):";
    bi:
    cin>>i;
    if(i.length()<4||i.length()>8)
    {
    cout<<"Length of Book id must be under (4-8) characters \nPlease Enter again: \n"; 
    goto bi;	
    }
        
    check=findbk(i);
    if(check>0)
    {
    	cout<<"Books is already added of this I'd ("<<i<<") \n";
    	cout<<"Enter your choice(1-2)"<<endl;
    	cout<<"[1].add more copies of this book"<<endl;
    	cout<<"[2].Change I'd "<<endl;
    	cout<<"Enter another key to back manu"<<endl;
    	cin>>ch;
    	if(ch=='1'){
    		
    		
    	cout<<"Enter no. of copies you want to add more(1-100):"<<endl;
    	cc:
    	cin>>c;
    if(c<1||c>100)
    {
    	cout<<"You can add(1-100) copies at a time\nPlease Enter again: \n";
    	goto cc;
    }        
        	
    	bknode *ptr=bkhead;
    	for(int j=1;j<check;j++)
    	ptr=ptr->getnextbk();
    	c+=ptr->getcopies();
    	ptr->setcopies(c);
    	}
    	else
    	if(ch=='2')
    	{
    		goto optt;
    	}
    	else
    	goto endp;
    }///if
    
    else
    {    
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        
    cout<<"Enter Book Title(3-50): ";
    bn:
    getline(cin,n);
    if(n.length()>50||n.length()<3)
    {
    cout<<"Length of Book title must be under (3-50) characters \nPlease Enter again: \n"; 
    	goto bn;
    }
    
    
    cout<<"Enter Author Name(3-30): ";
    an:
    cin>>a;
    if(a.length()>30||a.length()<3)
    {
    cout<<"Length of Author name must be under (3-30) characters \nPlease Enter again: \n"; 
    	goto an;
    }
            
    cout<<"Enter book price(50-5000): ";
    bp:
    cin>>p;
    if(p<50||p>5000)
    {
    	cout<<"Book price must under(50-5000)\nPlease Enter again: \n";
    	goto bp;
    }
    cout<<"Enter number of copies(1-100): ";
    cp:
    cin>>c;
    if(c<1||c>100)
    {
    	cout<<"Copies must be under(1-100)\nPlease Enter again: \n";
    	goto cp;
    }
    //set category 
    int t;
    t=setcat();
    cout<<"Enter "<<greenColor<<"(1)"<<resetColor <<" to confirm\n";
    cout<<redColor<<"Enter any other key to cancel\n"<<resetColor;
    cin>>aa;
    if(aa!='1')
    {
    	return;
    }
    
    bknode *ptr = new bknode(n,i,a,p,c,t); 
    if (bksize == 0)
    {
        bkhead = ptr;
        bkcurrent = ptr;
    }
    else
    {
        ptr->setprevbk(bkcurrent);          
        ptr->setnextbk(bkcurrent->getnextbk()); 
        bkcurrent->setnextbk(ptr); 
        bkcurrent = ptr; 
    }
    bksize++;
       
    }
    endp:

cout<<"\nPress any key to continue......";
 
  cin>>aa;
    return ;

}

int bklist ::findbk(string value)
{
    
    bknode *ptr = bkhead;
    int compare = 0;
    for (int i = 1; i <= bksize; i++)
    {
        if (ptr->getbkid() == value)
        {          
            compare = i;
            break;
        }
        ptr = ptr->getnextbk();
    }

    return compare;
}


void bklist::showallbk()
{
    char a;
    system("cls");
    headMessage("----------<(Display All Registered Books)>----------");
    if(bksize==0)
    {
    	cout<<"Book list is empty \n";
    }
    else
    {
    	cout<<"<----------------Book List-------------->\n";
    bknode *ptr = bkhead;
    while (ptr != NULL)
    {
        ptr->showbkdata();
        ptr = ptr->getnextbk(); // assigning address of next element
    }
    }
    cout<<"\nPress any key to continue......";
    //cin.ignore();
    cin>>a;
    return ;
    }

//here
void bklist ::updatebk()
{
    char a;
    system("cls");
    headMessage("----------<(Update Book)>----------");
    
    if(bksize==0)
    {
    	cout<<"Book list is empty \n";
    }
    else
    {
    char ch;
    string i;
     opl:
    cout<<"Enter Book id:";
    cin>>i;
       int check=0;
     check=findbk(i);
    if(check==0)//I'd not found 
    {
    	cout<<"Book with this  I'd ("<<i<<") is not found"<<endl;
    	cout<<"Enter (1) to Change I'd "<<endl;
    	cout<<"Press any other key to back "<<endl;
    	cin>>ch;
    	if(ch=='1')
    	goto opl;
    	else
    	goto endp2;//////---------------
    }//if closed 
    else//I'd found
    {    
    
     bknode *ptr = bkhead;   
    for(int j=1;j<check;j++)
    {
        ptr=ptr->getnextbk();
    }
    cout<<"Book details before updation";
        ptr->showbkdata();
        //-----
        string chk=ptr->getbkid();     
        string ii;    
   op5:
   
    cout<<"\nEnter Book id(4-10) :";
    //    
        bii:
    cin>>i;
    if(i.length()<4||i.length()>8)
    {
    cout<<"Length of Book id must be under (4-8) characters \nPlease Enter again: \n"; 
    goto bii;	
    }
    //
    cin>>ii;
    if(chk==ii)//same id
    goto op33;
    else
    {//check new I'd
    
    check=0;
    check=findbk(ii);
    
    if(check>0)//I'd match another id
    { 	
    	cout<<"Book with this I'd ("<<ii<<") is already added"<<endl;
    	cout<<"Enter (1) to change I'd "<<endl;
    	cout<<"Enter any other key to back"<<endl;
    	cin>>ch;
    	if(ch=='1')
    	goto op5;
    	else
    	goto endp2;
    }
    }
     
        op33:
        string n,a;
        int c,p;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        
    cout<<"Enter Book Title(3-50):"<<endl;
    //
    bnn:
    getline(cin,n);
    if(n.length()>50||n.length()<3)
    {
    cout<<"Length of Book title must be under (3-50) characters \nPlease Enter again: \n"; 
    	goto bnn;
    }
     
    cout<<"Enter Author Name(3-30): ";
    ann:
    cin>>a;
    if(a.length()>30||a.length()<3)
    {
    cout<<"Length of Author name must be under (3-30) characters \nPlease Enter again: \n"; 
    	goto ann;
    }
            
    cout<<"Enter book price(50-5000): ";
    bpp:
    cin>>p;
    if(p<50||p>5000)
    {
    	cout<<"Book price must under(50-5000)\nPlease Enter again: \n";
    	goto bpp;
    }
    cout<<"Enter number of copies(1-100): ";
    cp:
    cin>>c;
    if(c<1||c>100)
    {
    	cout<<"Copies must be under(1-100)\nPlease Enter again: \n";
    	goto cp;
    }   
   
    int t;
    t=setcat();
    
    cout<<"\nBook details after updation\n";
     ptr->setbkid(ii);
     ptr->setbkname(n);
     ptr->setauthor(a);
     ptr->setprice(p);
     ptr->setcopies(c);
     ptr->showbkdata();
    }
    endp2: ;
    }
    cout<<"\nPress any key to continue......";
    //cin.ignore();
    cin>>a;
    return ;
}
//__________________book class end 
    
    
    
    
    
   


//----------------------------student node
class stnode{
    private:
    string name;
    string id;
    int status;
    stnode *next;
    stnode *prev;
    int department;

    public:
    
    stnode(string,string,int);
    
    void setid(string);
     string getid();
    void setname(string);
     string getname();
    void setissue(int);
     int getissues();
     
     void setdep(int);
     int getdep();
     
    void setnext(stnode *);
    void setprev(stnode *);
    stnode* getnext();
    stnode * getprev();
    void showdata();
    void showdataInTable();

};

stnode::stnode(string n, string i,int dep)
{
    setdep(dep);
    setname(n);
    setid(i);
    status=0;
    prev = NULL;
    next = NULL;
}

void stnode::setdep(int d){
  department= d;
  }


int stnode::getdep(){
 return department;
 }

void stnode::setissue(int d){
  status= d;
  }


int stnode::getissues(){
 return status;
 }

void stnode::setname(string n)
{
    name = n;
}


string stnode::getname()
{
    return name;
}
void stnode::setid(string i)
{
    id = i;
}


string stnode::getid()
{
    return id;
}


void stnode::setnext(stnode *ptr)
{
    next = ptr;
}
stnode *stnode::getnext()
{
    return next;
}
void stnode::setprev(stnode *ptr)
{
    prev = ptr;
}

void stnode::showdataInTable()
{
 cout<<cyanColor<<" | "<<resetColor<<setw(20)<<left<<name<<cyanColor <<" | "<<resetColor <<setw(10)<<left <<id<<cyanColor<<" | "<<resetColor <<setw(25)<<left<<dep[department]<<cyanColor <<" |     "<<resetColor<<status<<cyanColor <<"    |"<<resetColor<<endl ;
    
}


void stnode::showdata()
{
    
    
    cout<<cyanColor<<"-------------------------------------------------------\n"<<resetColor;
    cout << "Student Name : " << name << endl;
    cout<<"Admission No : "<<id<<endl;      cout<<"Department   : "<<dep[department]<<endl;
    cout<<"Books issued : "<<status<<endl;
    
    
}
//_______________Student node end





//_______________Student list start

class stlist{
private:
    stnode *sthead;
    stnode *stcurrent;
    long long int size;
    
    public:
    stlist();//c
    void addst();//c
    void addst(string ,string ,int);//c   
    void stdelet();//c
    void update();//c
    void find();//c
    int findst(string);//c
    int findst1(string);//c
    void totalLength();//c
    void showlist();//c
    
    friend class issue_list;
    
};
//



//



stlist::stlist()
{
    setdepartment();
    sthead = NULL;
    stcurrent = NULL;
    size = 0;
}

void stlist::addst()
{
    char a;
    system("cls");
    bi:
    headMessage("----------<(Register Student)>----------");
    //cout<<"\n---------------<(Register Student)>--------------\n";
    int check=0;
    string n,i;
    cout<<"Enter Student Admission no(6-10):";
    //
    
    cin>>i;
   i=trimSpaces(i);
    if(i.length()<6||i.length()>10)
    {
    cout<<"Length of Student id must be under (6-10) characters \n"; 
    cout<<"Enter (1) to try again \nOr press any other key to back menu\nEnter: ";
    
   //cin.ignore();
   cin>>a;
   if(a=='1')
   goto bi;
   else  
   return;    
    
    }
    //
    check=findst(i);
    if(check>0)
    {
    	cout<<"Student with this I'd ("<<i<<") is already added"<<endl;    	   
    	 	cout<<"Enter (1) to try again \nOr press any other key to back menu\nEnter: ";
   //cin.ignore();
   cin>>a;
   if(a=='1')
   goto bi;
   else  
   return;
    		
    }
    
    else
    {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        
    cout<<"Enter Student name (4-30)"<<endl;   
    sn:
    getline(cin,n);
    if(n.length()>30||n.length()<4)
    {
    cout<<"Length of Student name must be under (4-30) characters \n"; 
    	cout<<"Enter (1) to try again \nOr press any other key to back menu\nEnter: ";
    	//cin.ignore();
   cin>>a;
   if(a=='1')
   goto sn;
   else  
   return;
    	
    }
    int d;
    aaa:
    cout<<"-----<(Select Department)>-----\n";
    for(int k=1;k<=dep_count;k++)
    cout<<"["<<k<<"]."<<dep[k]<<endl;
    cout<<"Enter (1-"<<dep_count<<") :";
    cin>>d;
    if(cin.fail())
    {
    cin.clear();
    cin.ignore(INT_MAX, '\n');    
    cout<<"Invalid input Entered!\n";
    cout<<"Enter (1) to try again \nOr press any other key to back\nEnter :";
    cin>>a;
    if(a=='1')
    goto aaa;
    else
    return;
    }
    else
    if(d>dep_count||d<=0)
    {
    	cout<<"Invalid choice Entered!\n";
        cout<<"Enter (1) to try again \nOr press any other key to back\nEnter :";
    cin>>a;
    if(a=='1')
    goto aaa;
    else
    return;
         }
    
    stnode *ptr = new stnode(n,i,d); // new element d is in ptr
    if (size == 0)
    {
        sthead = ptr;
        stcurrent = ptr;
    }
    else
    {
        ptr->setprev(stcurrent);             // set prev address of new node
        ptr->setnext(stcurrent->getnext()); // giving value of next to new element assigned to ptr
        stcurrent->setnext(ptr);            // giving address of new node to previous element of list
        stcurrent = ptr; 
    }
    size++;
       cout<<greenColor<<"------<(Student Registered)>-----\n"<<resetColor; 
    }
    cout<<redColor<<"\nPress any key to continue..."<<resetColor;
     //cin.ignore();
   cin>>a;
   return;
}

void stlist ::find()
{
    system("cls");
    char a;
    string i;
    again:
    headMessage("----------<(Find Specific Student)>----------");     
    cout<<"Enter Student id: ";
    cin>>i;
    stnode *ptr = sthead;
    int compare = 0;
    for (int j = 1; j <= size; j++)
    {
        if (ptr->getid() == i)
        {          
        ptr->showdata();
            compare = 1;
            break;
        }
        ptr = ptr->getnext();
    }
  if(compare==0)
    {
    	cout<<redColor<<"Student with this I'd ("<<i<<") is not registered"<<resetColor<<endl;
   cout<<"Enter (1) to try again \nOr press any other key to back menu\nEnter: ";
   //cin.ignore();
   cin>>a;
   if(a=='1')
   goto again;
   else
   return;
}
cout<<cyanColor<<"\nPress any key to continue..."<<resetColor;
     //cin.ignore();
   cin>>a;
   return;
}


int stlist ::findst(string value)
{
    
    stnode *ptr = sthead;
    int compare = 0;
    for (int i = 1; i <= size; i++)
    {
        if (ptr->getid() == value)
        {          
            compare = i;
            break;
        }
        ptr = ptr->getnext();
    }

    return compare;
}


void stlist::addst(string n, string i,int d)
{
     int check=0;
     check=findst(i);
    if(check>0)
    {
    	cout<<"Student with this  I'd ("<<i<<") is already registered"<<endl;
    	
    }
    
    else
    {
    
    stnode *ptr = new stnode(n,i,d); // new element d is in ptr
    if (size == 0)
    {
        sthead = ptr;
        stcurrent = ptr;
    }
    else
    {
         ptr->setprev(stcurrent);             // set prev address of new node
        ptr->setnext(stcurrent->getnext()); // giving value of next to new element assigned to ptr
        stcurrent->setnext(ptr);            // giving address of new node to previous element of list
        stcurrent = ptr;                    // changing current to ptr
    }
    size++;
    }
}

 void stlist::totalLength()
{
    system("cls");
    headMessage("----------<(Total Registered Students)>----------");
    
    char a;
    cout <<greenColor<< "\nTotal  students is:" <<magentaColor<< size <<resetColor <<endl;
    cout<<redColor<<"\nPress any key to continue..."<<resetColor;
     //cin.ignore();
   cin>>a;
}










void stlist ::update()
{
    system("cls");
    char ch;
    string i;
    op1:
    headMessage("----------<(Update Student)>----------");
    char a;
    
    if(size==0)
    {
    	cout<<"Student list is empty \n";
    }
    else
    {
    
     
    cout<<"Enter Student id:";
    cin>>i;
       int check=0;
     check=findst(i);
    if(check==0)//I'd not found 
    {
    	cout<<"Student with this  I'd ("<<i<<") is not found"<<endl;
    	cout<<"Enter (1) to Try again"<<endl;
    	cout<<"Enter another key to back "<<endl;
    	cin>>ch;
    	if(ch=='1')
    	goto op1;
    	else
    	return;
    	//////---------------
    }//if closed 
    else//I'd found
    {    
    
     stnode *ptr = sthead;   
    for(int j=1;j<check;j++)
    {
        ptr=ptr->getnext();
    }
        cout<<"Student details before updation"<<endl;
        ptr->showdata();
        //-----
        string chk=ptr->getid();     
        string ii;    
   cout<<cyanColor<<"[1]. "<<resetColor<<"To Change Name.\n";
   cout<<cyanColor<<"[2]. "<<resetColor<<"To Change Id.\n";
 cout<<cyanColor<<"[3]. "<<resetColor<<"To Cgange Dep.\n";
 cout<<redColor<<"Enter another key to back "<<resetColor<<endl;
   cout<<"Enter choice : ";
   cin>>ch;
 if(ch=='2')
 {  
 aggg:
    cout<<"\nEnter Student id :";
    cin>>ii;
    if(chk==ii)//same id
    {
    	cout<<redColor<<"You Entered the Same ID\n"<<resetColor ;
    	cout<<greenColor<<"Enter 1 To confirm"<<resetColor<<endl ;
    	cout<<cyanColor<<"Enter 2 To try again"<<resetColor<<endl ;
    	cout<<redColor<<"Or Enter other key to back "<<resetColor<<endl ;
    	cout<<"Enter choice : ";
   cin>>ch;
   if(ch=='1')
   {
    	return;
   }
    	
    	else
    	
    	 if(ch=='2')
   {
    	goto aggg;
   }
    	
    	else
    	
    	{
    		return;
    	}
    }
    
    check=0;
    check=findst(ii);
    
    if(check>0)//I'd match another id
    { 	
    	cout<<"Student with this I'd ("<<ii<<") is already added"<<endl;
    	cout<<"Enter (1) to try again"<<endl;
    	cout<<"Enter any other key to back"<<endl;
    	cin>>ch;
    	if(ch=='1')
    	goto aggg;
    	else
    	return;
    }
    ptr->setid(ii);
    cout<<greenColor<<"-----<(ID changed)>-----\n"<<resetColor ;
    
    }
    else
    if(ch=='1')
     {
        string n;    
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer        
    cout<<"Enter Student name "<<endl;
    getline(cin,n); 
    cout<<greenColor<<"-----<(Name changed)>-----\n"<<resetColor ;
    ptr->setname(n);
     }
     else
    if(ch=='3')
     {
        int d;
    aaa:
    cout<<"-----<(Select Department)>-----\n";
    for(int k=1;k<=dep_count;k++)
    cout<<cyanColor<<"["<<k<<"]."<<resetColor<<dep[k]<<endl;
    cout<<"Enter (1-"<<dep_count<<") :";
    cin>>d;
    if(cin.fail())
    {
    cin.clear();
    cin.ignore(INT_MAX, '\n');    
    cout<<"Invalid input Entered!\n";
    cout<<"Enter (1) to try again \nOr press any other key to back\nEnter :";
    cin>>a;
    if(a=='1')
    goto aaa;
    else
    return;
    }
    else
    if(d>dep_count||d<=0)
    {
    	cout<<"Invalid choice Entered!\n";
        cout<<"Enter (1) to try again \nOr press any other key to back\nEnter :";
    cin>>a;
    if(a=='1')
    goto aaa;
    else
    return;
      }
      else
      {
      	cout<<greenColor<<"-----<(Department changed)>-----\n"<<resetColor ;
    ptr->setdep(d);
      }
     }
     else
     {
     	return;
     }
     
    
    cout<<"\nStudent details after updation\n";     
     ptr->showdata();    
    cout<<"\nPress any key to continue...";
     //cin.ignore();
   cin>>a;
}
  }
}






void stlist::stdelet(){
 system("cls");
    
 char a;
 
   if(size>0)
  {//1
  string ii;
  int check=0;
  opp:
  headMessage("----------<(Delete Student)>----------");
    cout<<"Enter Student id you want to delete"<<endl;
    cin>>ii;
     check =findst(ii);
        if(check>0)
        {
     
    if(size==1)
    {
    	delete sthead;
    }
    else
     if (check == 1)

    {

        stcurrent  = sthead;

        stcurrent  = stcurrent ->getnext();

        stcurrent ->setprev(NULL);

        delete sthead;

        sthead = stcurrent ;

    }

    else if (check == size)

    {

        stnode *ptr = sthead;

        for (int i = 1; i < check - 1; i++)

        {

            ptr = ptr->getnext();

        }

        stcurrent  = ptr;

        ptr = ptr->getnext();

        stcurrent ->setnext(NULL);

        delete ptr;

    }

    
    else

    {

        stnode *ptr = stcurrent  = sthead;

        for (int i = 1; i < check - 1; i++)

        {

            stcurrent  = stcurrent ->getnext();

            ptr = ptr->getnext();

        }

        ptr = ptr->getnext();

        stcurrent ->setnext(ptr->getnext());

        delete ptr;

        ptr=stcurrent ->getnext();

        ptr->setprev(stcurrent );

    }

    size--;
cout<<greenColor<<"---------(Student Deleted)----------\n"<<resetColor;
cout<<redColor<<"\nPress any key to continue..."<<resetColor;
     //cin.ignore();
   cin>>a;
    return;    
        }
      else
      {  
        
        char ch;
        cout<<redColor << "This I'd is not found in list " << endl;
        cout<<"Enter (1) to try again"<<endl;
        cout<<"Press any other key to back"<<endl;
        cin>>ch;
        if(ch=='1')
        goto opp;
        
        
      }
    
  }//1st if
  else
  {
    headMessage("----------<(Delete Student)>----------");
    cout<<redColor<<"There is no book in the data\n"<<resetColor;
  }
    cout<<cyanColor<<"\nPress any key to continue...";
     //cin.ignore();
   cin>>a;
   cout<<resetColor ;
    return;
    }



void stlist::showlist()
{
    system("cls");
    char a;
    headMessage("----------<(Display All Registered Students)>----------");
    if(size==0)
    {
    	cout<<"Student list is empty\n";
    }
    else
    {
    	
    cout<<greenColor<<"   -<(STUDENT NAME)>-  -<(Admission No)>-  -<(DEPARTMENT)>-      -<(STATUS)>- \n"<<resetColor;
    cout<<cyanColor<<" |--------------------------------------------------------------------------|"<<resetColor <<endl ;
    
    stnode *ptr = sthead;
    while (ptr != NULL)
    {
        ptr->showdataInTable();
        ptr = ptr->getnext(); // assigning address of next element
    }
    cout<<cyanColor<<" |--------------------------------------------------------------------------|"<<resetColor <<endl ;
    }
    cout<<redColor<<"\nPress any key to continue..."<<resetColor;
     //cin.ignore();
   cin>>a;
}

int stlist ::findst1(string value)
{
    
    stnode *ptr = sthead;
    int compare = 0;
//    for (int i = 1; i <= size; i++)
    int i=0;
    while(ptr->getnext()!=NULL)
    {
       i++;
        if (ptr->getid() == value)
        {          
            compare = i;
            break;
        }
        ptr = ptr->getnext();
    }

    return compare;
}

//------------------------student end-----------------



class node
{
	private:
	node *next;
	node *prev;
	string bk;
	string st;
	int day;
	int month;
	int year;	
	public:
   void setday(int);
   int getday();
   void setmonth(int);
   int getmonth();
   void setyear(int);
   int getyear();
node(string,string,int,int,int);
void setbook(string);
void setstudent(string);
string getbook();
string getstudent();

void setnxt(node *);
 void setprv(node *);
    node* getnxt();
    node * getprv();
    void issuedata();
};

node::node(string s,string b,int d,int m,int y)
{
    
    setstudent(s);
    setbook(b);
    setday(d);
    setmonth(m);
    setyear(y);
    next = NULL;
    prev = NULL;
}
void node::setday(int d)
{
    day=d;
}
int node::getday()
{
    return day;
}


void node::setmonth(int m)
{
    month=m;
}
int node::getmonth()
{
    return month;
}
void node::setyear(int y)
{
    year=y;
}
int node::getyear()
{
    return year;
}

void node::setstudent(string s)
{
    st=s;
}
string node::getstudent()
{
    return st;
}



void node::setnxt(node *ptr)
{
    next = ptr;
}
node *node::getnxt()
{
    return next;
}
void node::setbook(string b)
{
    bk=b;
}
string node::getbook()
{
    return bk;
}
void node::setprv(node *ptr)
{
    prev= ptr;
}
node *node::getprv()
{
    return prev;
}

void node::issuedata()
{
      cout <<cyanColor<< " |  "<<resetColor <<setw(10) <<left << st
                    <<cyanColor<< " |  "<<resetColor<< setw(10) << left << bk
                     <<cyanColor<< " |  "<<resetColor<< setw(2)<<right<< day << '/'<<setw(2)<<left<< month << '/' << year  <<cyanColor<< " | "<<resetColor<<endl;
                       
    
}



class issue_list : public stlist,public bklist
{
	private:
	node *head;
	node *current;
	int sizei;
	stlist *sl;
	bklist *bl;

	public:
	
	issue_list(stlist&,bklist&);
	void showall_issued();
	void issue();
	void issued(string,string,int,int,int);
    void deposit();
    int findissue(string);
    int findboth(string,string);
    void today_report();
    void month_report();
    void all_dues();
    int getissuedate(int,int,int,int);
    void length();
    void st_record();
    void bk_record();
    void showissuebyst(string);
     void showissuebybk(string);
};
void issue_list::st_record()
{
	char a;
	string s;
	int check=0;
again:
headMessage("---------<(View Issued Data by Student I'd)>-----------");
cout<<"Enter Student I'd :";
cin>>s;
 	check=findissue(s);
	  if(check>0)
	  {
	  		cout<<greenColor<<"   STUDENT I'D     BOOK I'D        DATE \n"<<resetColor;
    	cout<<cyanColor<<"<------------------------------------------->\n"<<resetColor;
	  	showissuebyst(s);	  	
	  }
	  if(check==0)
	  {
	  	cout<<redColor<<"No book is Issued to this I'd"<<endl<<resetColor;
	  	cout<<"Enter (1) to try again \nOr enter another key to back\nEnter : ";
	  	cin>>a;
	  	if(a=='1')
	  	goto again;
	  	else
	  	return;
	  }
	  cout<<redColor <<"Enter press key to continue........";
	  cin>>a;
	  cout<<resetColor;
	  
}




void issue_list::showissuebyst(string s)
{
	 node *ptr = head;
    for (int i = 1; i <= sizei; i++)
    {
        if (ptr->getstudent() == s)
        {          
            ptr->issuedata();
            
        }
        ptr = ptr->getnxt();
    }
}
void issue_list::showissuebybk(string s)
{
	 node *ptr = head;
    for (int i = 1; i <= sizei; i++)
    {
        if (ptr->getbook() == s)
        {          
            ptr->issuedata();
            
        }
        ptr = ptr->getnxt();
    }
}




void issue_list::bk_record()
{
	char a;
	string s;
	int check=0;
again:
headMessage("---------<(View Issued Data by Book I'd)>-----------");
cout<<"Enter Book I'd :";
cin>>s;
 	check=findissue(s);
	  if(check>0)
	  {
	  		cout<<greenColor<<"  STUDENT I'D     BOOK I'D        DATE \n"<<resetColor;
    	cout<<cyanColor<<"<------------------------------------------->\n"<<resetColor;
	  	showissuebybk(s);	  	
	  }
	  if(check==0)
	  {
	  	cout<<redColor<<"No book is Issued of this I'd"<<endl<<resetColor;
	  	cout<<"Enter (1) to try again \nOr enter another key to back\nEnter : ";
	  	cin>>a;
	  	if(a=='1')
	  	goto again;
	  	else
	  	return;
	  }
	  cout<<redColor <<"Enter any key to continue........";
	  cin>>a;
	  cout<<resetColor;
}

void issue_list::issued(string s,string b,int d,int m,int y){
	   addIssue(s,b,d,m,y);
	       int ch=0;
    int bs=0;

    
 s=trimSpaces(s);
    ch=sl->findst1(s);//ch=1
    
     stnode *stptr = sl->sthead;   
    for(int j=1;j<ch;j++)
    {
        stptr=stptr->getnext();
    }      
     
     b=trimSpaces(b);
    bs=bl->findbk(b);//
    
    
    bknode *bkptr = bl->bkhead;   
    for(int j=1;j<bs;j++)
    {
        bkptr=bkptr->getnextbk();
    }
    
	   
	   
	   node *ptr = new node(s,b,d,m,y);
    
       if (sizei == 0)
    {  //4
        head = ptr;
        current = ptr;
    }//4
    else
    { //5
        ptr->setprv(current);             // set prev address of new node
        ptr->setnxt(current->getnxt()); // giving value of next to new element assigned to ptr
        current->setnxt(ptr);            // giving address of new node to previous element of list
        current = ptr; 
    }//5
    int bkstatus=0;
    int ststatus=0;
    ststatus=stptr->getissues()+1;
    stptr->setissue(ststatus);
    bkstatus=bkptr->getcopies()-1;
    bkptr->setcopies(bkstatus);
	sizei++;
}





void issue_list::all_dues(){
	char a;
system("cls");
headMessage("------<(All dues)>------");
if(sizei==0)
{
	cout<<"All books are Deposit\n";
}
else
{
	//
	int d, m, y;    
	int id,im,iy;
       int days;
           time_t  currentTime =  time(nullptr);
     tm* localTime =  localtime(&currentTime);
        d=localTime->tm_mday;
        m=(localTime->tm_mon + 1);
         y=(localTime->tm_year + 1900);
      
            node *ptr=head;
           int c=0;
         
     for(int h=1;h<=sizei;h++)     
	{
		id=ptr->getday();
		im=ptr->getmonth();
		iy=ptr->getyear();
		days=calculate_days(id,im,iy,d,m,y);
	if(days>15)
	{
		c++;
		if(c==1)
		
		{		
			cout<<greenColor<<"    Book I'd    Student I'd     Days   "<<resetColor<<endl;
		cout<<cyanColor<<"<------------------------------------>\n"<<resetColor;
		
		
		}		
		
		cout <<cyanColor<< " |  "<<resetColor <<setw(10) <<left << ptr->getstudent()
                    <<cyanColor<< " |  "<<resetColor<< setw(10) << left << ptr->getbook()
                     <<cyanColor<< " |  "<<resetColor<< setw(3)<<left<< days <<resetColor <<cyanColor<< " |  "<<resetColor  <<endl;
	
	 
	}
	ptr=ptr->getnxt();
	}
	if(c>0)
	cout<<cyanColor<<"<------------------------------------>\n"<<resetColor;
	if(c==0)
	{
		cout<<"No Book is issued \n";
	}
	
	//
}
cout<<redColor<<"\n\nEnter any key to continue....";
	cin>>a;
cout<<resetColor;
}





int issue_list::getissuedate(int dd,int dm,int dy, int ch)
{
	int id,im,iy;
	node *ptr1=head;
	for(int k=1;k<ch;k++)
	{
	ptr1=ptr1->getnxt();
	}
	id=ptr1->getday();
    im=ptr1->getmonth();
    iy=ptr1->getyear();
    return calculate_days(id,im,iy,dd,dm,dy);

}
    




issue_list::issue_list(stlist& s, bklist& b)
{
    head = NULL;
    current = NULL;
    sizei= 0;
    sl=&s;
    bl=&b;
}






int issue_list ::findissue(string value)
{
    
    node *ptr = head;
    int compare = 0;
    for (int i = 1; i <= sizei; i++)
    {
        if (ptr->getstudent() == value)
        {          
            compare = i;
            break;
        }
        ptr = ptr->getnxt();
    }

    return compare;
}






int issue_list ::findboth(string st,string bk)
{
    
    node *ptr = head;
    int compare = 0;
    for (int i = 1; i <= sizei; i++)
    {
        if (ptr->getstudent() == st && ptr->getbook()==bk)
        {          
            compare = i;
            break ;
        }
        ptr = ptr->getnxt();
    }

    return compare;
}










void issue_list::showall_issued(){
    system("cls");
    headMessage("----------<(Display All Issued Books)>----------");
    char a;
    if(sizei==0)
    {
    	cout<<"No book is issued\n";
    }
    else
    {
    	cout<<greenColor<<"<  STUDENT I'D     BOOK I'D        DATE \n"<<resetColor;
    	cout<<cyanColor<<"<------------------------------------------->\n"<<resetColor;
    node *ptr = head;
    while (ptr != NULL)
    {
        ptr->issuedata();
        ptr = ptr->getnxt(); // assigning address of next element
    }
    	cout<<cyanColor<<"<------------------------------------------->\n"<<resetColor;
    }
    cout<<redColor<<"\nPress any key to continue...";
     //cin.ignore();
   cin>>a;
   cout<<resetColor;
   return;
}









void issue_list::length()
{
	headMessage("----------<(Total Issued Books)>----------");
	char a;
	cout<<cyanColor<<"Total Issued Books is : "<<greenColor<<sizei<<resetColor<<endl;
	cout<<redColor<<"\nPress any key to continue...";
     //cin.ignore();
   cin>>a;
	cout<<resetColor;
}










void issue_list::deposit()
{//1

char a;
if(sizei>0)
{
	string s,b;
	int check;
	again:
	headMessage("----------<(DEPOSIT BOOK)>----------");
cout<<"Enter Student I'd :";
cin>>s;
 	check=findissue(s);
	  if(check>0)
	  {
	  	again1:
   	cout<<"Enter book I'd:";
   	cin>>b;
   	check=findboth(s,b);
   	if(check>0)
   	{//3
      
   	
       int d, m, y;    
       
           time_t  currentTime =  time(nullptr);
     tm* localTime =  localtime(&currentTime);
        d=localTime->tm_mday;
        m=(localTime->tm_mon + 1);
         y=(localTime->tm_year + 1900);
       
    
    
    int days;
   days=getissuedate(d,m,y,check);
   char uu;
   cout<<"Enter "<<greenColor<<"(1)"<<resetColor <<" to confirm\n";
    cout<<redColor<<"Enter any other key to cancel\n"<<resetColor;
    cin>>uu;
    if(uu!='1')
    {
    	return;
    }
   	   	   		
   	if(sizei==1)
   	{
   
   		delete head;
   		
   	}
   	else   	
   	
   	if (check == 1)

    {

        current  = head;

        current  = current->getnxt();

        current ->setprv(NULL);
      
        delete head;

        head = current ;

    }

    else if (check == sizei)

    {

        node *ptr = head;

        for (int i = 1; i < check - 1; i++)

        {

            ptr = ptr->getnxt();

        }

        current  = ptr;

        ptr = ptr->getnxt();

        current ->setnxt(NULL);
       
        delete ptr;

    } 
    else

    {

        node *ptr = current  = head;

        for (int i = 1; i < check - 1; i++)

        {

            current  = current ->getnxt();

            ptr = ptr->getnxt();

        }

        ptr = ptr->getnxt();

        current ->setnxt(ptr->getnxt());        
        
        delete ptr;

        ptr=current ->getnxt();

        ptr->setprv(current );

    }

    
//////////////////

 check=bl->findbk(b);//
int bkstatus=0;
   bknode *bkptr = bl->bkhead;   
    for(int j=1;j<check;j++)
    {
        bkptr=bkptr->getnextbk();
    }
    bkstatus=bkptr->getcopies()+1;
    bkptr->setcopies(bkstatus);  
    
    
    check=sl->findst(s);
     int ststatus=0;
    stnode *stptr = sl->sthead;   
    for(int j=1;j<check;j++)
    {
        stptr=stptr->getnext();
    }  
    ststatus=stptr->getissues()-1;
    stptr->setissue(ststatus);

//fine management 

int fine=0;

if(days<=15)
{
fine=0;
}
else
{
fine=(days-15)*30;
}
if(fine>(bkptr->getprice()/2))
{
fine=(bkptr->getprice()/2);
}



//Deposit message 
system("cls");
headMessage("----------<(DEPOSIT BOOK)>----------");
 cout<<magentaColor<<"<---------------------------------------------------------->\n"<<resetColor; 
 cout<<cyanColor<<"|     "<<greenColor<< " --------<(Book Deposit Successfuly)>--------";
 cout<<" "<<resetColor<<endl;
    cout<<cyanColor<<"| Student Name   :"<<stptr->getname()<<endl;
    cout<<"| Student I'd    :"<<stptr->getid()<<endl;
    cout<<"| Student Dep    :"<<dep[stptr->getdep()]<<endl;
    
    cout<<"| Book Title     :"<<bkptr->getbkname()<<endl;
    cout<<"| Book I'd       :"<<bkptr->getbkid()<<endl;
    cout<<"| Author Name    :"<<bkptr->getauthor()<<endl;
    cout<<"| Day of Deposit :"<<days<<endl;
    cout<<"| Fine           :"<<fine<<endl;    
   cout<<magentaColor<<"<---------------------------------------------------------->\n"<<resetColor; 

sizei--;
    cout<<"\nPress any key to continue...";
     //cin.ignore();
   cin>>a;
    return;
    
  }//3
  else
  {
  	cout<<redColor<<"This student was not issued a  book with this I'd"<<resetColor <<endl;
  cout<<"Enter (1) to try again\nOr press any key to back menu \nEnter :";
         //cin.ignore();
   cin>>a;
         if(a=='1')
     	goto again1;
     	else
  
   return;
  }
     			
      }//2 if
      else
      
      {
      	  cout<<redColor<<"This student was not issued any books\n"<<resetColor;
      	  cout<<"Enter (1) to try again\nOr press any key to back menu \nEnter :";
         //cin.ignore();
   cin>>a;
         if(a=='1')
     	goto again;
     	else
      	  return;
      }      
      
}//1st if
else
{
	cout<<redColor<<"No Book is issued in the data\n"<<resetColor;
cout<<"\nPress any key to continue...";
     //cin.ignore();
   cin>>a;
	return;
}

}




void issue_list::issue()
{    //1
system("cls");

char a;
//char aa;
    int ch=0;
    int bs=0;
    string s,b;  
    again:
    headMessage("----------<(ISSUE BOOK)>----------");
    cout<<"Enter Student id:";
    cin>>s;
 s=trimSpaces(s);
    ch=sl->findst1(s);//ch=1
    if(ch>0)   //true
     {    //2 	             
     
     stnode *stptr = sl->sthead;   
    for(int j=1;j<ch;j++)
    {
        stptr=stptr->getnext();
    }
    if(stptr->getissues()==5)
     {
     	cout<<stptr->getname()<<" has already got 5 books\nDeposit at least one book thanks"<<endl;
     	cout<<"\nPress any key to continue...";
     	cin>>a;
 //    cin.ignore();
//   getline(cin,aa);
     return;
     }
     
      
     again1:
     cout<<"Enter Book id:";
    cin>>b;
     b=trimSpaces(b);
    bs=bl->findbk(b);//
    if(bs>0)//true
    { //3 
    
    bknode *bkptr = bl->bkhead;   
    for(int j=1;j<bs;j++)
    {
        bkptr=bkptr->getnextbk();
    }
    if(bkptr->getcopies()==0)
     {
     	cout<<"All copies of "<<bkptr->getbkname()<<" has been issued \nTry after some days thanks"<<endl;
     	
     cout<<"\nPress any key to continue...";
     cin>>a;
   //  cin.ignore();
 //  getline(cin,aa);
     return;
     	
     }
        int d, m, y;    
    
           time_t  currentTime =  time(nullptr);
     tm* localTime =  localtime(&currentTime);
        d=localTime->tm_mday;
        m=(localTime->tm_mon + 1);
         y=(localTime->tm_year + 1900);
       
     char uu;
   cout<<"Enter "<<greenColor<<"(1)"<<resetColor <<" to confirm\n";
    cout<<redColor<<"Enter any other key to cancel\n"<<resetColor;
    cin>>uu;
    if(uu!='1')
    {
    	return;
    }
    addIssue(s,b,d,m,y);
    node *ptr = new node(s,b,d,m,y);
    
       if (sizei == 0)
    {  //4
        head = ptr;
        current = ptr;
    }//4
    else
    { //5
        ptr->setprv(current);             // set prev address of new node
        ptr->setnxt(current->getnxt()); // giving value of next to new element assigned to ptr
        current->setnxt(ptr);            // giving address of new node to previous element of list
        current = ptr; 
    }//5
    
    int bkstatus=0;
    int ststatus=0;
    ststatus=stptr->getissues()+1;
    stptr->setissue(ststatus);
    bkstatus=bkptr->getcopies()-1;
    bkptr->setcopies(bkstatus);
    sizei++;
 
       system("cls");
       headMessage("----------<(ISSUE BOOK)>----------");
    cout<<magentaColor<<"<---------------------------------------------------------->\n"<<resetColor;
    cout<<cyanColor<<"|"<<greenColor<<"  ----------<(Book Issued Successfuly)>---------- \n"<<resetColor;
    cout<<cyanColor<<"| Student Name :"<<stptr->getname()<<endl;
    cout<<"| Student I'd  :"<<stptr->getid()<<endl;
    cout<<"| Student Dep  :"<<dep[stptr->getdep()]<<endl;
    
    cout<<"| Book Title   :"<<bkptr->getbkname()<<endl;
    cout<<"| Book I'd     :"<<bkptr->getbkid()<<endl;
    cout<<"| Author Name  :"<<bkptr->getauthor()<<endl;
    cout<<"| Issue date   :"<<ptr->getday()<<"/"<<ptr->getmonth()<<"/"<<ptr->getyear()<<endl;
    
   cout<<magentaColor<<"<---------------------------------------------------------->\n"<<resetColor; 
    
    cout<<cyanColor<<"\n\nEnter any key to continue....."<<resetColor;
   cin>>a;
 //  cin.ignore();
//   getline(cin,aa);

    return;
}//3

else
{//6
	cout<<redColor<<"Book not found"<<resetColor<<endl;
	cout<<"Enter (1) to try again\nOr press any key to back menu \nEnter :";
     //    cin.ignore();
//   cin>>a;
cin>>a;
         if(a=='1')
     	goto again1;
     	else
	return;
}//6


     }//2
     else
     {//7

          cout<<redColor<<"Student not found"<<resetColor<<endl;  	
             cout<<"Enter (1) to try again\nOr press any key to back menu \nEnter :";
    //     cin.ignore();
//   cin>>a;
cin>>a;
         if(a=='1')
     	goto again;
     	else
     	return;
     } ///7
     
     }//1



int main()
{

    user u1;    
    bklist b1;
    stlist l1;
    issue_list il(l1,b1);    
  
 
   // cout<<"<-------In the interest of time efficiency, preloaded Students and Booke has been incorporated into the code for this presentation------->\n";
   //student name, Roll number, Department(1-6) 
 // l1.addst("Haseeb Ansari","Bcs21044",2);  
  l1.addst("Zuhaib Amjad","Bcs21022",2);
  l1.addst("Danish Rehman","Bcs21032",2);
  l1.addst("Saad Hassan","Bcs21054",2);
  l1.addst("Hafiz Muavia","Bcs21001",3);
  l1.addst("Moin Yaqoob","Bcs21009",5);
  // Information Technology
l1.addst("Haseeb Ansari", "Bcs21044", 2);
l1.addst("Ayesha Khan", "Bcs21045", 2);
l1.addst("Ali Ahmed", "Bcs21046", 2);
l1.addst("Sara Malik", "Bcs21047", 2);
l1.addst("Imran Ali", "Bcs21048", 2);
l1.addst("Nida Shah", "Bcs21049", 2);
l1.addst("Usman Riaz", "Bcs21050", 2);
l1.addst("Fariha Khan", "Bcs21051", 2);
l1.addst("Ahmed Farooq", "Bcs21052", 2);
l1.addst("Sadaf Hussain", "Bcs21053", 2);

// English
l1.addst("Zainab Ali", "Eng21001", 1);
l1.addst("Mujtaba Hassan", "Eng21002", 1);
l1.addst("Aisha Siddiqui", "Eng21003", 1);
l1.addst("Bilal Ahmed", "Eng21004", 1);
l1.addst("Saima Khan", "Eng21005", 1);
l1.addst("Asad Ali", "Eng21006", 1);
l1.addst("Nimra Javed", "Eng21007", 1);
l1.addst("Fahad Aslam", "Eng21008", 1);
l1.addst("Hira Bashir", "Eng21009", 1);
l1.addst("Kamran Ali", "Eng21010", 1);

// Business Administration
l1.addst("Amna Iqbal", "BBA21001", 3);
l1.addst("Imran Khan", "BBA21002", 3);
l1.addst("Nadia Malik", "BBA21003", 3);
l1.addst("Rizwan Ahmed", "BBA21004", 3);
l1.addst("Sara Khan", "BBA21005", 3);
l1.addst("Adil Akram", "BBA21006", 3);
l1.addst("Sadia Iqbal", "BBA21007", 3);
l1.addst("Khalid Mehmood", "BBA21008", 3);
l1.addst("Ayesha Akhtar", "BBA21009", 3);
l1.addst("Arif Butt", "BBA21010", 3);

// Law
l1.addst("Sadia Ali", "Law21001", 4);
l1.addst("Ahmed Malik", "Law21002", 4);
l1.addst("Farah Naz", "Law21003", 4);
l1.addst("Zain Ahmed", "Law21004", 4);
l1.addst("Hina Khan", "Law21005", 4);
l1.addst("Adnan Iqbal", "Law21006", 4);
l1.addst("Saba Ali", "Law21007", 4);
l1.addst("Majid Mehmood", "Law21008", 4);
l1.addst("Nazia Butt", "Law21009", 4);
l1.addst("Ali Raza", "Law21010", 4);

// Commerce
l1.addst("Rabia Shah", "Com21001", 5);
l1.addst("Asim Riaz", "Com21002", 5);
l1.addst("Amina Siddiqui", "Com21003", 5);
l1.addst("Saqib Ali", "Com21004", 5);
l1.addst("Nida Rashid", "Com21005", 5);
l1.addst("Kamran Malik", "Com21006", 5);
l1.addst("Farzana Akhtar", "Com21007", 5);
l1.addst("Saad Ahmed", "Com21008", 5);
l1.addst("Sana Imran", "Com21009", 5);
l1.addst("Ahmed Khan", "Com21010", 5);

// Banking & Finance
l1.addst("Ayesha Javed", "BnF21001", 6);
l1.addst("Imran Butt", "BnF21002", 6);
l1.addst("Madiha Khan", "BnF21003", 6);
l1.addst("Rizwan Akhtar", "BnF21004", 6);
l1.addst("Sanaullah Malik", "BnF21005", 6);
l1.addst("Nida Javed", "BnF21006", 6);
l1.addst("Usman Arif", "BnF21007", 6);
l1.addst("Fariha Ahmed", "BnF21008", 6);
l1.addst("Asadullah Khan", "BnF21009", 6);
l1.addst("Saima Bashir", "BnF21010", 6);

  			
	//book title, book I'd, author price(50-5000) ,copies(1-100,category(1-15)		
b1.addbk("The Forty Rules of Love", "bookid5", "Elif Shafak", 500, 6,1);
b1.addbk("The Kite Runner", "bookid8", "Khaled Hosseini", 500, 6,2);
b1.addbk("The Reluctant Fundamentalist", "bookid10", "Mohsin Hamid", 500, 6,3);
b1.addbk("A Case of Exploding Mangoes", "bookid6", "Mohammed Hanif", 500, 6,3);
// English
b1.addbk("Wuthering Heights", "bookid11", "Emily Bronte", 600, 12, 1);
b1.addbk("The Great Gatsby", "bookid12", "F. Scott Fitzgerald", 700, 10, 1);
b1.addbk("Jane Eyre", "bookid13", "Charlotte Bronte", 550, 15, 1);
b1.addbk("The Catcher in the Rye", "bookid14", "J.D. Salinger", 650, 8, 1);

// IT
b1.addbk("Clean Code", "bookid15", "Robert C. Martin", 800, 10, 2);
b1.addbk("Design Patterns", "bookid16", "Erich Gamma", 750, 15, 2);
b1.addbk("The Pragmatic Programmer", "bookid17", "Andrew Hunt", 900, 8, 2);
b1.addbk("Code Complete", "bookid18", "Steve McConnell", 850, 12, 2);

// Business
b1.addbk("Thinking, Fast and Slow", "bookid19", "Daniel Kahneman", 1000, 8, 3);
b1.addbk("Freakonomics", "bookid20", "Steven D. Levitt", 700, 14, 3);
b1.addbk("The Art of War", "bookid21", "Sun Tzu", 450, 20, 3);
b1.addbk("Rich Dad Poor Dad", "bookid22", "Robert T. Kiyosaki", 600, 18, 3);

// Law
b1.addbk("The Interpretation of Dreams", "bookid23", "Sigmund Freud", 550, 15, 4);
b1.addbk("Psychology", "bookid24", "David G. Myers", 800, 12, 4);
b1.addbk("The Power of Habit", "bookid25", "Charles Duhigg", 700, 10, 4);
b1.addbk("Atomic Habits", "bookid26", "James Clear", 900, 8, 4);

// Commerce
b1.addbk("The Wealth of Nations", "bookid27", "Adam Smith", 850, 12, 5);
b1.addbk("Capital in the Twenty-First Century", "bookid28", "Thomas Piketty", 950, 10, 5);
b1.addbk("Economics in One Lesson", "bookid29", "Henry Hazlitt", 600, 14, 5);
b1.addbk("Nudge", "bookid30", "Richard H. Thaler", 750, 16, 5);

// Finance
b1.addbk("Sapiens: A Brief History of Humankind", "bookid31", "Yuval Noah Harari", 700, 18, 6);
//b1.addbk("Homo Deus: A Brief History of Tomorrow", "bookid32", "Yuval Noah Harari", 750, 16, 6);
b1.addbk("Thinking in Bets", "bookid33", "Annie Duke", 650, 20, 6);
b1.addbk("The Innovator's Dilemma", "bookid34", "Clayton M. Christensen", 800, 15, 6);

// Mathematics
b1.addbk("A Brief History of Time", "bookid35", "Stephen Hawking", 900, 8, 7);
b1.addbk("The Code Book", "bookid36", "Simon Singh", 600, 14, 7);
b1.addbk("How Not to Be Wrong", "bookid37", "Jordan Ellenberg", 700, 12, 7);
b1.addbk("Godel, Escher, Bach", "bookid38", "Douglas Hofstadter", 850, 10, 7);

// Islam
//b1.addbk("The Quran", "bookid39", "Translated by Abdullah Yusuf Ali", 300, 20, 8);
b1.addbk("Muhammad: Man and Prophet", "bookid40", "Adil Salahi", 550, 15, 8);
b1.addbk("The Life of Muhammad", "bookid41", "Ibn Ishaq", 450, 18, 8);
b1.addbk("In the Footsteps of the Prophet", "bookid42", "Tariq Ramadan", 500, 16, 8);

// Novels
b1.addbk("To Kill a Mockingbird", "bookid43", "Harper Lee", 600, 10, 9);
b1.addbk("1984", "bookid44", "George Orwell", 750, 12, 9);
b1.addbk("Brave New World", "bookid45", "Aldous Huxley", 700, 14, 9);
b1.addbk("The Hobbit", "bookid46", "J.R.R. Tolkien", 800, 16, 9);

// Physics
b1.addbk("Physics for Scientists and Engineers", "bookid47", "Paul A. Tipler", 950, 8, 10);
b1.addbk("Seven Brief Lessons on Physics", "bookid48", "Carlo Rovelli", 500, 18, 10);
b1.addbk("The Elegant Universe", "bookid49", "Brian Greene", 700, 14, 10);
b1.addbk("Astrophysics for Young People in a Hurry", "bookid50", "Neil deGrasse Tyson", 600, 12, 10);

// Politics
b1.addbk("The Prince", "bookid51", "Niccolo Machiavelli", 550, 18, 11);
b1.addbk("The Art of War", "bookid52", "Sun Tzu", 450, 20, 11);
b1.addbk("The Communist Manifesto", "bookid53", "Karl Marx", 400, 16, 11);
b1.addbk("Democracy in America", "bookid54", "Alexis de Tocqueville", 650, 14, 11);

// Fiction
//b1.addbk("One Hundred Years of Solitude", "bookid55", "Gabriel García Márquez", 800, 12, 12);
b1.addbk("The Kite Runner", "bookid56", "Khaled Hosseini", 700, 16, 12);
b1.addbk("The Road", "bookid57", "Cormac McCarthy", 600, 18, 12);
b1.addbk("The Handmaid's Tale", "bookid58", "Margaret Atwood", 750, 14, 12);

// Urdu
b1.addbk("Peer-e-Kamil", "bookid59", "Umera Ahmed", 450, 18, 13);
b1.addbk("Mushaf", "bookid60", "Nimra Ahmed", 500, 16, 13);
b1.addbk("Devta", "bookid61", "Mohiuddin Nawab", 350, 20, 13);
b1.addbk("Aab e Hayat", "bookid62", "Umera Ahmed", 400, 14, 13);

// Chemistry
b1.addbk("Chemical Principles", "bookid63", "Peter Atkins", 1100, 10, 14);
b1.addbk("Organic Chemistry", "bookid64", "Paula Yurkanis Bruice", 900, 12, 14);
b1.addbk("Inorganic Chemistry", "bookid65", "Gary L. Miessler", 950, 8, 14);
b1.addbk("Physical Chemistry", "bookid66", "Thomas Engel", 800, 15, 14);

// Sports
b1.addbk("The Complete Guide to Sports Nutrition", "bookid67", "Anita Bean", 800, 15, 15);
b1.addbk("Moneyball", "bookid68", "Michael Lewis", 700, 18, 15);
b1.addbk("The Boys in the Boat", "bookid69", "Daniel James Brown", 750, 12, 15);
b1.addbk("Open: An Autobiography", "bookid70", "Andre Agassi", 600, 16, 15);




//student I'd, book I'd, valid date
il.issued("Bcs21044","bookid5",10,11,2023);
il.issued("Bcs21032","bookid10",30,11,2023);
il.issued("Bcs21044","bookid11",10,12,2023);
il.issued("Bcs21009","bookid6",20,11,2023);
// Issued Books
il.issued("Bcs21044", "bookid6", 10, 11, 2023);
il.issued("Eng21001", "bookid12", 2, 5, 2023);
il.issued("BBA21003", "bookid19", 3, 8, 2023);
il.issued("Law21006", "bookid26", 4, 3, 2023);
il.issued("Com21009", "bookid33", 5, 7, 2023);
il.issued("BnF21003", "bookid40", 6, 9, 2023);
il.issued("Bcs21032", "bookid47", 7, 12, 2023);
il.issued("Eng21002", "bookid54", 8, 2, 2023);
il.issued("BBA21007", "bookid61", 9, 12, 2023);
il.issued("Law21008", "bookid68", 10, 6, 2023);
il.issued("Com21001", "bookid75", 11, 10, 2023);
il.issued("BnF21005", "bookid9", 12, 1, 2023);
il.issued("Bcs21046", "bookid16", 1, 5, 2023);
il.issued("Eng21003", "bookid23", 2, 8, 2023);
il.issued("BBA21009", "bookid30", 3, 3, 2023);
il.issued("Law21009", "bookid37", 4, 7, 2023);
il.issued("Com21005", "bookid44", 5, 9, 2023);
il.issued("BnF21007", "bookid51", 6, 12, 2023);
il.issued("Bcs21047", "bookid58", 7, 2, 2023);
il.issued("Eng21004", "bookid65", 8, 4, 2023);
il.issued("BBA21010", "bookid72", 9, 6, 2023);
il.issued("Law21010", "bookid2", 10, 10, 2023);
il.issued("Com21002", "bookid9", 11, 1, 2023);
il.issued("BnF21009", "bookid16", 12, 5, 2023);
il.issued("Bcs21048", "bookid23", 1, 8, 2023);
il.issued("Eng21005", "bookid30", 2, 3, 2023);
il.issued("BBA21001", "bookid37", 3, 7, 2023);
il.issued("Law21001", "bookid44", 4, 9, 2023);
il.issued("Com21006", "bookid51", 5, 12, 2023);
il.issued("BnF21001", "bookid58", 6, 2, 2023);
il.issued("Bcs21049", "bookid65", 7, 4, 2023);
il.issued("Eng21006", "bookid72", 8, 6, 2023);
il.issued("BBA21002", "bookid2", 9, 10, 2023);
il.issued("Law21002", "bookid9", 10, 12, 2023);
il.issued("Com21007", "bookid16", 11, 5, 2023);
il.issued("BnF21002", "bookid23", 12, 8, 2023);
il.issued("Bcs21050", "bookid30", 1, 3, 2023);
il.issued("Eng21007", "bookid37", 2, 7, 2023);
il.issued("BBA21003", "bookid44", 3, 9, 2023);
il.issued("Law21003", "bookid51", 4, 12, 2023);
il.issued("Com21008", "bookid58", 5, 2, 2023);
il.issued("BnF21004", "bookid65", 6, 4, 2023);

  char number;
  char number2;

welcomeMessage();

//
usr:
headMessage("----------<(SELECT USER)>----------");
	cout<<cyanColor<<"[1]. "<<resetColor<<"Student"<<endl;  
    cout<<cyanColor<<"[2]. "<<resetColor<<"Admin"<<endl;

       cout<<redColor<<"Or press any other key to exit"<<resetColor<<endl;

                    cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
                    cin >> number;	
	
	if(number=='1')
{
	   stdnt:
headMessage("----------<(SEARCH BOOK)>----------");
	cout<<cyanColor<<"[1]. "<<resetColor<<"Search by Book Title"<<endl;
     
    cout<<cyanColor<<"[2]. "<<resetColor<<"Search by Author Name"<<endl;

        cout<<cyanColor<<"[3]. "<<resetColor<<"Search by Category"<<endl;   

     
       cout<<redColor<<"Or press any other key to back "<<resetColor<<endl;

                    cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
                    cin >> number2;	
	
	if(number2=='1')
{
	   cin.ignore();
	   b1.searchBooksbyTitle();
	 	 goto stdnt;
}
else
if(number2=='2')
{
	 cin.ignore();
	 b1.searchBooksbyAuthor();
		 goto stdnt;
}
else
if(number2=='3')
{
	cin.ignore();
	b1.searchBookbycategory();
		 goto stdnt;
}

	else
{
	goto usr;
}
	   	   
	 	 goto usr;
}
else

if(number=='2')
{
	
u1.identification();
        mmu:           
        system("cls");
        headMessage("----------<(MAIN MENU)>----------");
        
        cout <<cyanColor<< "[1]."<<resetColor<<" Issue Book" << endl;
        cout <<cyanColor<< "[2]."<<resetColor<<" Deposit Book" << endl;      
        cout <<cyanColor<< "[3]."<<resetColor<<" Students Management" << endl;
        
        cout <<cyanColor<< "[4]."<<resetColor<<" Books Management" << endl;
        cout <<cyanColor<< "[5]."<<resetColor<<" Issue Management" << endl;
        cout <<cyanColor<< "[6]."<<resetColor<<" Search Books" << endl;
        cout <<cyanColor<< "[7]."<<resetColor<<" Modify Login" << endl;
        cout <<cyanColor<< "[8]."<<resetColor<<" Reports" << endl;
        
      
        cout <<redColor<< "Or Pess any other key to Exit" << resetColor<<endl;

        cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
        cin >> number;

if(number=='1')
{
	 il.issue();
	 goto mmu;
}
else
if(number=='2')
{
	  il.deposit();
	  goto mmu;
}
else
if(number=='3')
{//

	stm:
	system("cls");
	
	 headMessage("----------<(STUDENT MANAGEMENT)>----------");
	//
	cout <<cyanColor<< "[1]."<<resetColor<<" Add another student" << endl;
        cout <<cyanColor<< "[2]."<<resetColor<<" Delete Student" << endl;      
         cout <<cyanColor<< "[3]."<<resetColor<<" Show specific Student" << endl;
        cout <<cyanColor<< "[4]."<<resetColor<<" Update Student record" << endl;
       
        cout <<cyanColor<< "[5]."<<resetColor<<" Total number of registered students" << endl;
        cout <<cyanColor<< "[6]."<<resetColor<<" Show all Students" << endl;
        cout <<cyanColor<< "[7]."<<resetColor<<" Add new Department" << endl;                

        cout<<redColor<<"Or press any other key to back to main menu"<<resetColor<<endl;

                    cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
                    cin >> number2;	

if(number2=='1')
{
	 l1.addst();
	 goto stm;
	 
}
else
if(number2=='2')
{
	 l1.stdelet();
	 	 goto stm;
}
else
if(number2=='3')
{
	  
	  l1.find();
	  	 goto stm;
}
else
if(number2=='4')
{
	  
	  l1.update();
	  	 goto stm;
}
else
if(number2=='5')
{
	 
	 l1.totalLength();
	 	 goto stm;
}
else
if(number2=='6')
{
	  	 
	  l1.showlist();
	  	 goto stm;
}
else
if(number2=='7')
{
    	  
    	  add_dep();
	  	 goto stm;
}


else
{
	goto mmu;
}
}
else
if(number=='4')
{
	system("cls");
	bkm:
	
	headMessage("----------<(BOOK MANAGEMENT)>----------");
	 cout<<cyanColor<<"[1]. "<<resetColor<<"Add another Book "<<endl;
     
    cout<<cyanColor<<"[2]. "<<resetColor<<"Delete Book "<<endl;

        cout<<cyanColor<<"[3]. "<<resetColor<<"Show specific Book"<<endl;   

        cout<<cyanColor<<"[4]. "<<resetColor<<"Update Book record"<<endl;

        cout<<cyanColor<<"[5]. "<<resetColor<<"Total number of registered Books"<<endl;

      cout<<cyanColor<<"[6]. "<<resetColor<<"Show all Books "<<endl;
       cout<<redColor<<"Or press any other key to back to main menu"<<resetColor <<endl;

                    cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
                    cin >> number2;	
	
	if(number2=='1')
{
	 b1.addbk();
	 	 goto bkm;
}
else
if(number2=='2')
{
	b1.deletbk();
		 goto bkm;
}
else
if(number2=='3')
{
	b1.showspecificbk();
		 goto bkm;
}
else
if(number2=='4')
{
	 b1.updatebk();
    	 goto bkm;
}
else
if(number2=='5')
{
	 b1.totalbk();
	 	 goto bkm;
}
else
if(number2=='6')
{
	b1.showallbk();
    goto bkm;
}
	else
{
	goto mmu;
}
}

if(number=='5')
{
	system("cls");
	ism:

headMessage("----------<(ISSUE MANAGEMENT)>----------");
	cout<<cyanColor<<"[1]. "<<resetColor<<"Show all Issued books "<<endl;
     
    cout<<cyanColor<<"[2]. "<<resetColor<<"Total number of issued Book"<<endl;

        cout<<cyanColor<<"[3]. "<<resetColor<<"Display dues Records"<<endl;   

       cout<<cyanColor<<"[4]. "<<resetColor<<" Specific Student's' Issued Record"<<endl;
      cout<<cyanColor<<"[5]. "<<resetColor<<"Specific Book's Issued Record "<<endl;   
       cout<<redColor<<"Or press any other key to back to main menu"<<resetColor<<endl;

                    cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
                    cin >> number2;	
	
	if(number2=='1')
{
 	il.showall_issued();

		 goto ism;
}
else
	if(number2=='2')
{
	 il.length();
	 goto ism;
}
else
if(number2=='3')
{
	il.all_dues();
		 goto ism;
}

else
if(number2=='4')
{
	   il.st_record();
    	 goto ism;
}

else
if(number2=='5')
{
	 il.bk_record();
	 	 goto ism;
}

	else
{
	goto mmu;
}

}
else
if(number=='6')
{
system("cls");
srch:

headMessage("----------<(SEARCH BOOK)>----------");
	cout<<cyanColor<<"[1]. "<<resetColor<<"Search by Book Title"<<endl;
     
    cout<<cyanColor<<"[2]. "<<resetColor<<"Search by Author Name"<<endl;

        cout<<cyanColor<<"[3]. "<<resetColor<<"Search by Category"<<endl;   

     
       cout<<redColor<<"Or press any other key to back to main menu"<<resetColor<<endl;

                    cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
                    cin >> number2;	
	
	if(number2=='1')
{
	   cin.ignore();
	   b1.searchBooksbyTitle();
	 	 goto srch;
}
else
if(number2=='2')
{
	 cin.ignore();
	 b1.searchBooksbyAuthor();
		 goto srch;
}
else
if(number2=='3')
{
	cin.ignore();
	b1.searchBookbycategory();
		 goto srch;
}

	else
{
	goto mmu;
}

}
else
if(number=='7')
{
	u1.change();
	goto mmu;
}

else
if(number=='8')
{
	//__________________
	
	system("cls");
	rp:
	
	headMessage("----------<(Report Center)>----------");
	 cout<<cyanColor<<"[1]. "<<resetColor<<"Today Report"<<endl;
     
    cout<<cyanColor<<"[2]. "<<resetColor<<"Weekly Report"<<endl;

        cout<<cyanColor<<"[3]. "<<resetColor<<"Monthly Report"<<endl;   

        cout<<cyanColor<<"[4]. "<<resetColor<<"Yearly Report"<<endl;

        cout<<cyanColor<<"[5]. "<<resetColor<<"After and Before Date"<<endl;

      
       cout<<redColor<<"Or press any other key to back to main menu"<<resetColor <<endl;

                    cout <<cyanColor<< "\nEnter the specific number to perform a specific operation: "<<resetColor;
                    cin >> number2;	
	
	if(number2=='1')
{
	   displayTodayData();
	 	 goto rp;
}
else
if(number2=='2')
{
	
	displayWeeklyData();
		 goto rp;
}
else
if(number2=='3')
{
	displayMonthlyData();
		 goto rp;
}
else
if(number2=='4')
{
	 displayYearlyData();
    	 goto rp;
}
else
if(number2=='5')
{
//	 displayafterbefore();
	 	 goto rp;
}

	else
{
	goto mmu;
}

}
else
{
	goto usr;
	
}
	    
		 goto usr;
}


else
{
//	goto usr;
	return 0;
}


    return 0;
}
