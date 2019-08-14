#include<iostream.h>			//Header Files
#include<stdlib.h>
#include<time.h>
#include<iomanip.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

int x, y, m, n, r;
long prz;		               /* x=hotel
					 y=room
					 m=city
					 n=floor
					 r=offer
					 prz=price*/
class Room
 {                               //class created
       protected:
		  char type[20];
		  long price;
       public:
		  int avail[10];
		  Room();                          //constructor
		  void preset();
		  void out();
		  int rprice()
		   {
			 return price;
		   }
		  int ravail(int i);
 } Eco[5][4], Deluxe[5][4], Super[5][4];

Room::Room()
 {
       for(int i=0; i<10; i++)
	   avail[i]=0;
 }

void Room::out()
 {
       cout<<endl<<endl<<endl;
       cout<<"\t\tû"<<endl;
       cout<<"\t \t Type  -> "<<type<<endl;
       cout<<"\t \t Price -> "<<price<<" per 24 hours"<<endl;
 }

int Room::ravail(int i)
 {
       return avail[i];
 }

void Room::preset()
 {
       for(int i=0; i<4; i++)
	{
	      for(int j=0; j<4; j++)
	       {
		     strcpy(Eco[i][j].type," Economic");
		     strcpy(Deluxe[i][j].type," Deluxe");
		     strcpy(Super[i][j].type," Super-Deluxe");
	       }
	}
       Eco[1][1].price=2500;
       Eco[2][1].price=2000;
       Eco[3][1].price=1500;
       Eco[4][1].price=1000;
       Eco[1][2].price=3000;
       Eco[2][2].price=2500;
       Eco[3][2].price=2000;
       Eco[4][2].price=1500;
       Eco[1][3].price=2000;
       Eco[2][3].price=1500;
       Eco[3][3].price=1000;
       Eco[4][3].price=500;

       Deluxe[1][1].price=5000;
       Deluxe[2][1].price=4000;
       Deluxe[3][1].price=3500;
       Deluxe[4][1].price=3000;
       Deluxe[1][2].price=7000;
       Deluxe[2][2].price=6000;
       Deluxe[3][2].price=5000;
       Deluxe[4][2].price=4000;
       Deluxe[1][3].price=4000;
       Deluxe[2][3].price=3000;
       Deluxe[3][3].price=2000;
       Deluxe[4][3].price=1000;

       Super[1][1].price=8000;
       Super[2][1].price=9000;
       Super[3][1].price=10000;
       Super[4][1].price=7000;
       Super[1][2].price=15000;
       Super[2][2].price=12000;
       Super[3][2].price=10000;
       Super[4][2].price=8000;
       Super[1][3].price=8000;
       Super[2][3].price=7000;
       Super[3][3].price=6000;
       Super[4][3].price=5000;
 }

class Hotel
 {
		  char attractions[40][40];
		  char offers[3][50];

       protected:
		  char name[30];
		  char address[100];
		  int star;
       public:
		  void show();
		  void preset();
		  void showoffer();
 } Delhi[3], Mumbai[3], Kolkata[3], Banglore[3];

void Hotel::show()
 {
       cout<<endl<<"\t \t Name ->"<<name<<"\t";

       for(int i=0; i<star; i++)
	   cout<<"*";
       cout<<endl;
       cout<<"\t \t Address -> "<<address<<	endl;

       for(i=0; i<3; i++)
       {
	     cout<<"\t \t Attractions - "<<attractions[i]<<endl;
       }
 }

void Hotel::preset()
 {
       strcpy(Delhi[0].name, " 1)  Lalit");
       strcpy(Delhi[0].address, " Barakhamba Road, CP, Delhi");
       strcpy(Delhi[0].attractions[0], " 1)  Janpath");
       strcpy(Delhi[0].attractions[1], " 2)  Rashtrapati Bhavan");
       strcpy(Delhi[0].attractions[2], " 3)  Red Fort");
       strcpy(Delhi[0].offers[0], " 1)  Flipkart Coupons");
       strcpy(Delhi[0].offers[1], " 2)  Free Breakfast");
       strcpy(Delhi[0].offers[2], " 3)  Free access to Spa & Gym");
       Delhi[0].star=4;

       strcpy(Delhi[1].name, " 2)  Leela");
       strcpy(Delhi[1].address, " Karkardooma Road, Karkardooma, Shahdara");
       strcpy(Delhi[1].attractions[0], " 1)  Keventers");
       strcpy(Delhi[1].attractions[1], " 2)  Cross River Mall");
       strcpy(Delhi[1].attractions[2], " 3)  Akshardham");
       strcpy(Delhi[1].offers[0], " 1)  5 Free Uber Pools");
       strcpy(Delhi[1].offers[1], " 2)  Free Dinner");
       strcpy(Delhi[1].offers[2], " 3)  Free Rides to anywhere in city");
       Delhi[1].star=5;

       strcpy(Delhi[2].name, " 3)  Exotica");
       strcpy(Delhi[2].address, " Hauz Khas");
       strcpy(Delhi[2].attractions[0], " 1)  Deer Park");
       strcpy(Delhi[2].attractions[1], " 2)  HK Village");
       strcpy(Delhi[2].attractions[2], " 3)  Qutub Minar");
       strcpy(Delhi[2].offers[0], " 1)  Wifi Access Key");
       strcpy(Delhi[2].offers[1], " 2)  Free Lunch");
       strcpy(Delhi[2].offers[2], " 3)  All expense paid  1-Day Delhi Darshan");
       Delhi[2].star=7;


       strcpy(Mumbai[0].name, " 1) Taj Hotel");
       strcpy(Mumbai[0].address, " Nariman Point");
       strcpy(Mumbai[0].attractions[0], " 1)  Gateway Of India");
       strcpy(Mumbai[0].attractions[1], " 2)  Banganga Lake");
       strcpy(Mumbai[0].attractions[2], " 3)  Worli Fort");
       strcpy(Mumbai[0].offers[0], " 1)  Flipkart Coupons");
       strcpy(Mumbai[0].offers[1], " 2)  Free Breakfast");
       strcpy(Mumbai[0].offers[2], " 3)  Free access to Spa & Gym");
       Mumbai[0].star=4;

       strcpy(Mumbai[1].name, " 2)  ITC Grand Central");
       strcpy(Mumbai[1].address, " Parel");
       strcpy(Mumbai[1].attractions[0], " 1)  Powai Lake");
       strcpy(Mumbai[1].attractions[1], " 2)  Mahakali Caves");
       strcpy(Mumbai[1].attractions[2], " 3)  Chor Bazaar");
       strcpy(Mumbai[1].offers[0], " 1)  5 Uber Pools");
       strcpy(Mumbai[1].offers[1], " 2)  Free Dinner");
       strcpy(Mumbai[1].offers[2], " 3)  Free Rides to anywhere in city");
       Mumbai[1].star=5;

       strcpy(Mumbai[2].name, " 3)  Trident Hotel");
       strcpy(Mumbai[2].address, " Bandra Kurla Complex");
       strcpy(Mumbai[2].attractions[0], " 1)  Marine Drive");
       strcpy(Mumbai[2].attractions[1], " 2)  Kamala Nehru Park");
       strcpy(Mumbai[2].attractions[2], " 3)  Siddhivinayak Temple");
       strcpy(Mumbai[2].offers[0], " 1)  Free Tour Guide");
       strcpy(Mumbai[2].offers[1], " 2)  Free Lunch");
       strcpy(Mumbai[2].offers[2], " 3)  All expense paid  1-Day Mumbai Darshan");
       Mumbai[2].star=7;

       strcpy(Kolkata[0].name, " 1)  The Lindsay");
       strcpy(Kolkata[0].address, " Lindsay Street");
       strcpy(Kolkata[0].attractions[0], " 1)  Victoria Memorial");
       strcpy(Kolkata[0].attractions[1], " 2)  Howrah Bridge");
       strcpy(Kolkata[0].attractions[2], " 3)  Eden Gardens");
       strcpy(Kolkata[0].offers[0], " 1)  Flipkart coupons");
       strcpy(Kolkata[0].offers[1], " 2)  Free Breakfast");
       strcpy(Kolkata[0].offers[2], " 3)  Free access to Spa & Gym");
       Kolkata[0].star=4;

       strcpy(Kolkata[1].name, " 2)  JW Marriott Hotel");
       strcpy(Kolkata[1].address, " J.B.S Haidane Avenue");
       strcpy(Kolkata[1].attractions[0], " 1)  Marble Palace");
       strcpy(Kolkata[1].attractions[1], " 2)  Birla Planetarium");
       strcpy(Kolkata[1].attractions[2], " 3)  Maidan");
       strcpy(Kolkata[1].offers[0], " 1)  5 Uber prime");
       strcpy(Kolkata[1].offers[1], " 2)  Free Dinner");
       strcpy(Kolkata[1].offers[2], " 3)  Free Rides to anywhere in city");
       Kolkata[1].star=5;

       strcpy(Kolkata[2].name, " 3)  The Oberoi Grand");
       strcpy(Kolkata[2].address, " Dharmtala Taltala");
       strcpy(Kolkata[2].attractions[0], " 1)  Nicco Park");
       strcpy(Kolkata[2].attractions[1], " 2)  Indian Museum");
       strcpy(Kolkata[2].attractions[2], " 3)  Sundarbans");
       strcpy(Kolkata[2].offers[0], " 1)  Wifi");
       strcpy(Kolkata[2].offers[1], " 2)  Free Lunch");
       strcpy(Kolkata[2].offers[2], " 3)  All expense paid  1-Day Kolkata Darshan");
       Kolkata[2].star=7;

       strcpy(Banglore[0].name, " 1)  Jayamahal Palace Hotel");
       strcpy(Banglore[0].address, " Jayamahal Road");
       strcpy(Banglore[0].attractions[0], " 1)  Gandhi Bhavan");
       strcpy(Banglore[0].attractions[1], " 2)  Lal Bagh");
       strcpy(Banglore[0].attractions[2], " 3)  Kodandarama Temple");
       strcpy(Banglore[0].offers[0], " 1)  Souvenir");
       strcpy(Banglore[0].offers[1], " 2)  Free Breakfast");
       strcpy(Banglore[0].offers[2], " 3)  Free access to Spa & Gym");
       Banglore[0].star=4;

       strcpy(Banglore[1].name, " 2)  Lemon Tree Hotel");
       strcpy(Banglore[1].address, " Brookefield");
       strcpy(Banglore[1].attractions[0], " 1)  St. Mary's Basillica");
       strcpy(Banglore[1].attractions[1], " 2)  Bangalore Aquarium");
       strcpy(Banglore[1].attractions[2], " 3)  Venkatappa Art Gallery");
       strcpy(Banglore[1].offers[0], " 1)  5 free Uber Pool Rides");
       strcpy(Banglore[1].offers[1], " 2)  Free Dinner");
       strcpy(Banglore[1].offers[2], " 3)  Free Rides to anywhere in city");
       Banglore[1].star=5;

       strcpy(Banglore[2].name, " 3)  Iris Hotel");
       strcpy(Banglore[2].address, " Brigade Road");
       strcpy(Banglore[2].attractions[0], " 1)  Bangalore Palace");
       strcpy(Banglore[2].attractions[1], " 2)  Cubbon Park");
       strcpy(Banglore[2].attractions[2], " 3)  Vidhana Soudha");
       strcpy(Banglore[2].offers[0], " 1)  Free Wi-Fi");
       strcpy(Banglore[2].offers[1], " 2)  Free Lunch");
       strcpy(Banglore[2].offers[2], " 3)  All expense paid  1-Day Bangalore Darshan");
       Banglore[2].star=7;
 }

void Hotel::showoffer()
 {
       cout<<""<<endl<<endl<<endl;
       cout<<"\t\t  ________________________________________________ "<<endl;
       cout<<"\t\t |                                                |"<<endl;
       cout<<"\t\t |                øø   OFFERS   øø                |"<<endl;
       cout<<"\t\t |                                                |"<<endl;
       cout<<"\t\t  ------------------------------------------------ "<<endl;
       cout<<endl<<endl<<endl<<endl<<endl;
       for(int i=0; i<3; i++)
	   cout<<"\t \t \t"<<offers[i]<<endl;
       cout<<endl;
 }

class Booking:protected Room, protected Hotel
 {
       public:
	       int city, hotel, room, floor, price;
	       void choices()
		{
		      city=m;
		      hotel=x;
		      room=y;
		      floor=n;
		      price=prz;
		}
	       char Name[30];
	       int dd, mm, yy;
	       char phone[10];
	       int ddd, mmm, yyy;

	       void rcity()
		{
		      if(city==1)
			 cout<<" Delhi";

		      if(city==2)
			 cout<<" Mumbai";

		      if(city==3)
			 cout<<" Kolkata";

		      if(city==4)
			 cout<<" Banglore";
		}
 } book, booked;

void booking()
 {
       cout<<""<<endl<<endl;
       cout<<"\t\t  __________________________________________________ "<<endl;
       cout<<"\t\t |                                                  |"<<endl;
       cout<<"\t\t |                þþ   BOOKINGS   þþ                |"<<endl;
       cout<<"\t\t |                                                  |"<<endl;
       cout<<"\t\t  -------------------------------------------------- "<<endl;
       cout<<endl<<endl<<endl<<endl<<setw(25)<<" Enter starting date        : \t ";
       cin>>booked.dd;
       cout<<endl<<setw(25)<<" Enter starting month       : \t ";
       cin>>booked.mm;
       cout<<endl<<setw(25)<<" Enter starting year (yyyy) : \t ";
       cin>>booked.yy;
       cout<<"\n";
       cout<<endl<<setw(25)<<" Enter ending date          : \t ";
       cin>>booked.ddd;
       cout<<endl<<setw(25)<<" Enter ending month         : \t ";
       cin>>booked.mmm;
       cout<<endl<<setw(25)<<" Enter ending year (yyyy)   : \t ";
       cin>>booked.yyy;
 }

void menu()
 {
       cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
       cout<<"\n\n";
       cout<<setw(25)<<" Choose City - "<<endl<<endl<<endl<<"\t \t \t 1. Delhi \n \n \t \t \t 2. Mumbai \n \n \t \t \t 3. Kolkata \n \n \t \t \t 4. Banglore \n \n";
 }

void loading()
 {
       for(int z=0; z<5000; z++)
	{
	      _setcursortype(_NOCURSOR);
	      clrscr();
	      cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	      cout<<setw(45);
	      cout<<" LOADING ";
	      for(int j=0; j<4; j++)
		   cout<<".";
	}
 }

void overview()
 {
       long price;
       if(m==1)
	{
	      Delhi[x-1].show();
	}

       if(m==2)
	{
	      Mumbai[x-1].show();
	}

       if(m==3)
	{
	      Kolkata[x-1].show();
	}

       if(m==4)
	{
	      Banglore[x-1].show();
	}
       cout<<endl;

       if(y==1)
	{
	      Eco[m][x].out();
	      cout<<"\t Floor - #"<<n;
	      price=(booked.ddd-booked.dd)*Eco[m][x].rprice();
	}

       if(y==2)
	{
	      Deluxe[m][x].out();
	      cout<<"\t Floor - #"<<n;
	      price=(booked.ddd-booked.dd)*Deluxe[m][x].rprice();
	}

       if(y==3)
	{
	      Super[m][x].out();
	      cout<<"\t Floor - #"<<n;
	      price=(booked.ddd-booked.dd)*Super[m][x].rprice();
	}
       prz=price;
 }

void login()
 {
       cout<<" Enter name   -  ";
       gets(booked.Name);
       cout<<"\n \n \n";
       cout<<setw(50)<<" Enter phone number   -  ";
       cin>>booked.phone;
 }

void first()
 {
       cout<<"";
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<setw(45)<<" 1. New Booking"<<endl<<endl<<endl<<endl<<setw(45)<<" 2. Old Bookings"<<endl;
 }

void pickoffer()
 {
       if(m==1)
       Delhi[x-1].showoffer();

       if(m==2)
       Mumbai[x-1].showoffer();

       if(m==3)
       Kolkata[x-1].showoffer();

       if(m==4)
       Banglore[x-1].showoffer();
 }

void payment()
 {
       char ans;
       cout<<"\t\t  ____________________________________________________\n ";
       cout<<"\t\t |                 SPECIAL SCHEME                 |\n";
       cout<<"\t\t  ---------------------------------------------------- \n";
       cout<<endl<<endl<<"\t Want to see if you're lucky to get 50% off? (Y/N) ";
       cin>>ans;

       if(ans=='Y'||ans=='y')
	{
	      cout<<endl<<endl<<endl<<"\t \t \t Guess the number in our mind! (0-20)"<<endl;
	      int t, z;
	      srand(time(0));
	      t=rand()%20;
	      cout<<"\t\t";
	      cin>>z;

	      if(t==z)
	       {
		     cout<<"\t \t CONGRATS! YOUR FARE HAS BEEN HALVED ";
		     prz=prz/2;
	       }
	      else
	       {
		     cout<<endl<<endl<<endl<<endl<<"\t \t \t Sorry, our number was "<<t;
	       }
	}
       cout<<endl<<endl<<endl<<endl<<"\t \t Press any key to pay Rs. "<<prz;
 }

void Thanku()
 {
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       cout<<"\t*******  *    *      *      **    *   *    *        *    *"<<endl;
       cout<<"\t   *     *    *     * *     * *   *   *  *          *    * "<<endl;
       cout<<"\t   *     ******    *****    *  *  *   ***           *    *" <<endl;
       cout<<"\t   *     *    *   *     *   *   * *   *   *         *    * "<<endl;
       cout<<"\t   *     *    *  *       *  *    **   *     *        **** " <<endl;
 }

void error()
 {
       cout<<"\n \n \n \n \n ";
       cout<<setw(30)<<"Sorry, the option you chose was incorrect.. \n Please choose again.";
       clrscr();
 }


void main()
 {
       int r;
       char name[30], phone[30];
       textcolor(BLACK);
       textbackground(CYAN);
       clrscr();

       cout<<"\n\n ";
       cout<<"\t  |||    ||   ||   ||||||  ||      ||  ||     |||    ||      ||      "<<endl;
       cout<<"\t  || |   ||   ||   ||   ||  ||    ||  ||||    || |   ||     ||||     "<<endl;
       cout<<"\t  ||  |  ||   ||   ||||||    ||  ||  ||  ||   ||  |  ||    ||  ||    "<<endl;
       cout<<"\t  ||   | ||   ||   || ||      ||||  ||||||||  ||   | ||   ||||||||   "<<endl;
       cout<<"\t  ||    |||   ||   ||  |||     ||  ||      || ||    |||  ||      ||  "<<endl;
       cout<<setw(40);
       cout<<endl<<endl<<endl<<endl<<endl<<endl;
       login();
       clrscr();
       loading();
       clrscr();
       textcolor(BLACK);
       textbackground(CYAN);
       clrscr();
       first();
       cout<<endl<<endl;
       cin>>r;
       clrscr();
       loading();
       clrscr();
       strcpy(name, booked.Name);
       strcpy(phone, booked.phone);

       if(r==1)
	{
	      zero:
	      booking();
	      clrscr();
	      loading();
	      clrscr();
	      int ddd, dd, mmm, mm, yy, yyy;
	      ddd=booked.ddd;
	      dd=booked.dd;
	      mmm=booked.mmm;
	      mm=booked.mm;
	      yy=booked.yy;
	      yyy=booked.yyy;

	      if((yyy<yy)||((yy=yyy)&&(mmm<mm))||((yy=yyy)&&(mm=mmm)&&(ddd<dd))||(mm>12)||(mmm>12)||((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&(dd>31||ddd>31))||((mmm==1||mmm==3||mmm==5||mmm==7||mmm==8||mmm==10||mmm==12)&&(dd>31||ddd>31))||((mm==4||mm==6||mm==9||mm==11)&&(dd>30||ddd>30))||((mmm==4||mmm==6||mmm==11)&&(dd>30||ddd>30))||((yy%4==0)&&(mm==2)&&(dd>29))||((yyy%4==0)&&(mmm==2)&&(ddd>29))||((yy%4!=0)&&(mm==2)&&(dd>28))||((yyy%4!=0)&&(mmm==2)&&(ddd>28)))
	       {
		    cout<<"\n \n \n \n";
		    cout<<setw(45)<<"The dates you entered are incorrect, please try again.";
		    getch();
		    goto zero;
	       }

	      one:
	      menu();
	      cin>>m;
	      clrscr();
	      loading();
	      clrscr();
	      for(int i=0; i<4; i++)
	       {
		     for(int j=0; j<3; j++)
		      {
			   Eco[i][j].preset();
			   Deluxe[i][j].preset();
			   Super[i][j].preset();
		      }
	       }

	      two:
	      switch(m)
	       {
		     case 1:
			     for(int i=0; i<3; i++)
			      {
				    Delhi[i].preset();
				    Delhi[i].show();
				    cout<<endl;
			      }
			     break;

		     case 2:
			     for(i=0; i<3; i++)
			      {
				    Mumbai[i].preset();
				    Mumbai[i].show();
				    cout<<endl;
			      }
			     break;

		     case 3:
			     for(i=0; i<3; i++)
			      {
				    Kolkata[i].preset();
				    Kolkata[i].show();
				    cout<<endl;
			      }
			     break;

		     case 4:
			     for(i=0; i<3; i++)
			      {
				    Banglore[i].preset();
				    Banglore[i].show();
				    cout<<endl;
			      }
			     break;

		     default:
			     {
				   error();
				   getch();
				   goto one;
			     }
	       }

	      cout<<"\n \n \t \t Choose one - ";
	      cin>>x;
	      clrscr();
	      loading();
	      clrscr();

	      if(x>=4)
	       {
		     error();
		     getch();
		     goto two;
	       }

	      three:
	      pickoffer();
	      cout<<endl<<"\n \n \t \t Choose one - ";
	      cin>>r;
	      clrscr();
	      loading();
	      clrscr();

	      if(r>=4)
	       {
		     error();
		     getch();
		     goto three;
	       }

	      four:
	      Eco[m][x].out();
	      cout<<endl;
	      Deluxe[m][x].out();
	      cout<<endl;
	      Super[m][x].out();
	      cout<<endl;
	      cout<<"\n \n \t \t Choose one - ";
	      cin>>y;
	      clrscr();
	      loading();
	      clrscr();

	      if(y>=4)
	       {
		     error();
		     getch();
		     goto four;
	       }
	      cout<<endl<<endl<<endl<<endl<<endl<<endl<<"\t \t \t";

	      five:
	      switch (y)
	       {
		     case 1:
			     cout<<"!!!! Room is available on floor !!!! \n \n \n"<<endl;
			     for(int i=1; i<=4; i++)
			      {
				    if(Eco[m][x].ravail(i)==0)
				    cout<<"\t\t\t\t\t"<<i<<endl;
			      }
			     break;

		     case 2:
			     cout<<"!!!! Room is available on floor !!!! \n \n \n"<<endl;
			     for(i=1; i<=4; i++)
			      {
				    if(Deluxe[m][x].ravail(i)==0)
				    cout<<"\t\t\t\t\t"<<i<<endl;
			      }
			     break;

		     case 3:
			     cout<<"!!!! Room is available on floor !!!! \n \ \n"<<endl;
			     for(i=1; i<=4; i++)
			      {
				    if(Super[m][x].ravail(i)==0)
				    cout<<"\t\t\t\t\t"<<i<<endl;
			      }
			     break;
	       }
	      cout<<endl<<endl<<"Pick a floor ";
	      cin>>n;
	      clrscr();
	      loading();
	      clrscr();

	      if(n>=5)
	       {
		     error();
		     getch();
		     goto five;
	       }

	      cout<<"\t  _________________________________________________________ \n ";
	      cout<<"\t |                OVERVIEW OF YOUR BOOKING                 | \n"<<endl<<endl;
	      cout<<"\t  Name - "<<name<<endl;
	      cout<<"\t  Phone - "<<phone<<endl;
	      cout<<"\t  Start Date - "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	      cout<<"\t  End Date - "<<ddd<<"/"<<mmm<<"/"<<yyy<<endl<<endl;
	      overview();
	      cout<<" \n";
	      cout<<"\t  ------------------------------------------------------------------- \n";
	      cout<<"\t  PRESS ANY KEY TO PROCEED TO PAY";
	      getch();
	      clrscr();
	      loading();
	      clrscr();
	      payment();
	      getch();
	      clrscr();
	      Thanku();

	      ofstream f2("Bookings", ios::app);
	      booked.ddd=ddd;
	      booked.dd=dd;
	      booked.mm=mm;
	      booked.mmm=mmm;
	      booked.choices();
	      f2.write((char*)&booked, sizeof(booked));
	      f2.close();
	}
       else if(r==2)
	{
	      clrscr();
	      ifstream f1("Bookings");
	      while(f1.read((char*)&booked, sizeof(booked)))
	       {
		     if(strcmp(booked.Name, name)==0)
		      {
			    cout<<name<<endl;
			    cout<<booked.phone;
			    cout<<endl;
			    cout<<" START \t END \t CITY \t PRICE"<<endl;
			    cout<<booked.dd<<"/"<<booked.mm<<"\t"<<booked.ddd<<"/"<<booked.mmm<<"\t";
			    booked.rcity();
			    cout<<"\t"<<booked.price;
			    cout<<endl;
		      }
	       }
	      getch();
	      clrscr();
	      Thanku();
   }
 getch();
 }
