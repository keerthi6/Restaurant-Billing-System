/* ----Restaurant Billing System----

   -B.M.Keerthi Chandra   XII A
  
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<fstream.h>     //For handling files
#include<dos.h>         //For delay()

int no_days=0;

class menuitem           //Implements OOP
{
  public:


  int price;
  char info[100];

}item[6];

class customer
{
 public:
 int cost[6];
 int quantity[6];
 int total;

}cust[100];          // Max. 100 Customers Expected

int days[30]={0};
int check=0;
void displaymenu()
{
 clrscr();
  textcolor(BLACK);
  cprintf("\n        __________________Menu__________________          ");
  cout<<"\n\n\n ";
  cout<<"\n   --Item Number--      ---------  ";
  cout<<"\n              I.Main Course\n ";
  cout<<"\n        1.              Samosa";
  cout<<"\n        2.              Paper Thosai";
  cout<<"\n        3.              Sambhar Vadai";

  cout<<"\n\n              II.Drinks\n";
  cout<<"\n        4.              Masala Tea";
  cout<<"\n        5.              Chennai Filter Coffee";
  cout<<"\n        6.              Coconut Water";

}


void initialise()
{

	 item[0].price=12;
	 strcpy(item[0].info,"# Sizzling hot potatoes and peas deep fried to perfection and\n enclosed in golden coat of maida.");


	 item[1].price=25;
	 strcpy(item[1].info,"# Freshly made thosai with a touch of pure ghee.");

	 item[2].price=20;
	 strcpy(item[2].info,"# Hot vadais dipped in freshly prepared Sambhar.");


	 item[3].price=7;
	 strcpy(item[3].info,"# Hot tea to tantilize your senses.");


	 item[4].price=10;
	 strcpy(item[4].info,"# The best coffee made from the heart of Chennai.");

	 item[5].price=5;
	 strcpy(item[5].info,"# Fresh cocunut water will bring you back to reality");
}


void displaybill(int n)
{
 clrscr();

 cout<<"\n Order Number: "<<n;
 cout<<"\n\n\n\n                    ---BILL---     \n\n\n\n";        //Add name of restaurant, add address

 n++;
    cout<<"   --FOOD ITEM--                  --QUANTITY-- \n";

   if (cust[n-1].quantity[0] > 0)
    cout<<"\n\n Samosa	                	     "<<cust[n-1].quantity[0];

   if (cust[n-1].quantity[1] > 0)
    cout<<"\n\n Paper Thosai                        "<<cust[n-1].quantity[1];

   if (cust[n-1].quantity[2] > 0)
    cout<<"\n\n Sambhar Vadai                       "<<cust[n-1].quantity[2];

   if (cust[n-1].quantity[3] > 0)
    cout<<"\n\n Masala Tea                          "<<cust[n-1].quantity[3];

   if (cust[n-1].quantity[4] > 0)
    cout<<"\n\n Chennai Filter Coffee               "<<cust[n-1].quantity[4];

   if (cust[n-1].quantity[5] > 0)
    cout<<"\n\n Cocunut Water                       "<<cust[n-1].quantity[5];


 cout<<"\n\n\n\n\n  TOTAL= Rs."<<cust[n-1].total;
}

void main()
{
	clrscr();

	textbackground(WHITE);
	clrscr();
	int count=0;

	textcolor(BLUE);
	cprintf("\n\n\n\n\n\n\n\n\n                      ----RESTAURANT BILLING SYSTEM----    ");
	cprintf("                                              ~~~~~~~~~~~~~~~~~~~~~~~~~~~       \n\n");
	textcolor(BROWN);

	char x[7];
	char y[100]="gandhi";
	cout<<endl;
	cprintf("\n\n\n  Enter Password: ");
	for(int t=0;t<6;t++)
	{
		x[t]=getch();
		cprintf("*");
	}
	x[6]='\0';

	cout<<"\n\n";
	cprintf("   Verifying......");
	delay(1000);

	if(strcmp(x,y)==0)
	{
		textcolor(BLACK);
		cprintf("\n\n\n    ACSESS GRANTED!");


	getch();

	clrscr();

	prgbeg:

	char choice;
	int income;

	textcolor(BLACK);
	cprintf("___________________________________GANGOTHRI____________________________________");
	cout<<"                   -----Your Purely Vegetarian Restaurant-----   \n ";


	cout<<"\n\n   Day "<<no_days+1;
	cout<<"\n	 		1.Place Order";
	cout<<"\n\n 			2.Update Order";
	cout<<"\n\n 			3.Delete Order";
	cout<<"\n\n 			4.View Order";
	cout<<"\n\n 			5.Income";
	cout<<"\n\n                        6.View Customer Comments";
	cout<<"\n\n	      		7.Next Day";
	cout<<"\n\n 		        8.Exit";


	int no;
	cout<<"\n\n   Enter choice: ";
	cin>>no;

	switch(no)
	{
	case 1:
		initialise();

		start:
		displaymenu();
		count++;



		for(int k=0;k<6;k++)    // OR  quantity[6]={0};
		{
		cust[count].quantity[k]=0;
		}


		cout<<"\n\n Your order number is: "<< count;
		cust[count].total=0;

		order:

		textbackground(WHITE);

		int choice2;
		cout<<"\n Please place your order by selecting the food item number:";
		cin>>choice2;
		int l=0;
		int as1=0;
		switch(choice2)
		{
		case 1:

			cout<<endl<<item[0].info;
			cout<<"\n\nPrice per item: Rs"<<item[0].price;
			cout<<"\nEnter quantity: ";
			cin>>l;


			cust[count].cost[0]=item[0].price * l;
			cust[count].quantity[0]+=l;

			break;

		case 2:


			cout<<endl<<item[1].info;
			cout<<"\n\nPrice per item: Rs"<<item[1].price;

			cout<<"\nEnter quantity: ";
			cin>>l;
			cust[count].cost[1]=item[1].price * l;
			cust[count].quantity[1]+=l;

			break;

		case 3:

			cout<<endl<<item[2].info;
			cout<<"\n\nPrice per item: Rs"<<item[2].price;

			cout<<"\nEnter quantity: ";
			cin>>l;


			cust[count].cost[2]=item[2].price * l;
			cust[count].quantity[2]+=l;
			break;

		case 4:

			cout<<endl<<item[3].info;
			cout<<"\n\nPrice per item: Rs"<<item[3].price;
			cout<<"\nEnter quantity: ";
			cin>>l;

			cust[count].cost[3]=item[3].price * l;
			cust[count].quantity[3]+=l;
			break;

		case 5:

			cout<<endl<<item[4].info;
			cout<<"\n\nPrice per item: Rs"<<item[4].price;
			cout<<"\nEnter quantity: ";
			cin>>l;

			cust[count].cost[4]=item[4].price * l;
			cust[count].quantity[4]+=l;
			break;

		case 6:

			cout<<endl<<item[5].info;
			cout<<"\n\nPrice per item: Rs"<<item[5].price;
			cout<<"\nEnter quantity: ";
			cin>>l;

			cust[count].cost[5]=item[5].price * l;
			cust[count].quantity[5]+=l;
			break;

		}

		char option;
		cout<<"\nWould you like to order another food item? (y:Yes   Other Character:No)";
		cin>>option;

		if(option=='y')
		{

			as1=cust[count].total;
			cust[count].total=0;

			int i;

			for(i=0;i<6;i++)                        //To calculate total price of food
			{
			cust[count].total+=cust[count].cost[i];
			}

			for(i=0;i<6;i++)                       //To calculate total price of food
			{
			cust[count].cost[i]=0;
			}


			as1+=cust[count].total;
			cust[count].total=as1;
			clrscr();
			displaymenu();
			goto order;
		}

		as1=cust[count].total;
		cust[count].total=0;

		int ki;

		for(ki=0;ki<6;ki++)                        //To calculate total price of food
		{
		cust[count].total+=cust[count].cost[ki];
		}

		for(int bi=0;bi<6;bi++)                    //To calculate total price of food
		{
		cust[count].cost[bi]=0;
		}


		as1+=cust[count].total;
		cust[count].total=as1;



		clrscr();
		cout<<"\n\n\n\n";
		ofstream myfile;

		myfile.open("newfile.txt",ios::app|ios::in);   //Opening a new file
		char comment[50];

		cout<<"\n  Dear Customer,please leave your thoughts about our restaraunt:";
		gets(comment);

		cout<<"\n  Writing into file.....";
		delay(750);

		cout<<"\n\n	 Comments written into file!";

		myfile<<"\n Day "<<no_days+1;
		myfile<<"\n\n Customer "<<count<<" Comment: "<<comment<<endl<<endl;  //Writing into File


		char choice3;
		cout<<"\n\n Any more orders to be placed? (y:Yes   Other Character:No)";
		cin>>choice3;

		if(choice3=='y')
		goto start;


		break;


	case 2:

		clrscr();

		ord:

		cout<<"  Enter the order number: ";
		cin>>count;

		displaymenu();
		int choice6;

		cout<<"\n Please place your order by selecting the food item number:";
		cin>>choice6;

		int f=0;
		int as=0;

		switch(choice6)
		{

		case 1:


			cout<<endl<<item[0].info;
			cout<<"\n\nPrice per item: Rs"<<item[0].price;

			cout<<"\nEnter quantity: ";
			cin>>f;

			cust[count].cost[0]=item[0].price * f;
			cust[count].quantity[0]+=f;

			break;

		case 2:


			cout<<endl<<item[1].info;
			cout<<"\n\nPrice per item: Rs"<<item[1].price;

			cout<<"\nEnter quantity: ";
			cin>>f;


			cust[count].cost[1]=item[1].price * f;
			cust[count].quantity[1]+=f;

			break;

		case 3:

			cout<<endl<<item[2].info;
			cout<<"\n\nPrice per item: Rs"<<item[2].price;

			cout<<"\nEnter quantity: ";
			cin>>f;

			cust[count].cost[2]=item[2].price * f;
			cust[count].quantity[2]+=f;

			break;

		case 4:

			cout<<endl<<item[3].info;
			cout<<"\n\nPrice per item: Rs"<<item[3].price;

			cout<<"\nEnter quantity: ";
			cin>>f;

			cust[count].cost[3]=item[3].price * f;
			cust[count].quantity[3]+=f;

			break;

		case 5:

			cout<<endl<<item[4].info;
			cout<<"\n\nPrice per item: Rs"<<item[4].price;

			cout<<"\nEnter quantity: ";
			cin>>f;

			cust[count].cost[4]=item[4].price * f;
			cust[count].quantity[4]+=f;

			break;

		case 6:

			cout<<endl<<item[5].info;
			cout<<"\n\nPrice per item: Rs"<<item[5].price;

			cout<<"\nEnter quantity: ";
			cin>>f;

			cust[count].cost[5]=item[5].price * f;
			cust[count].quantity[5]+=f;

			break;
		}


		char opt;
		cout<<"\n Would you like to order another food item? (y:Yes   Other Character:No)";
		cin>>opt;

		if(opt=='y')
		{
		clrscr();
		goto ord;
		}


		as=cust[count].total;
		cust[count].total=0;

		int ij;

		for(ij=0;ij<6;ij++)                        //To calculate total price of food
		{
		cust[count].total+=cust[count].cost[ij];
		}

		for(int ip=0;ip<6;ip++)                        //To calculate total price of food
		{
		cust[count].cost[ip]=0;
		}


		as+=cust[count].total;
		cust[count].total=as;

		break;


	case 3:

		clrscr();

		int x;
		cout<<"\n Enter the order number to delete: ";
		cin>>x;

		income=income-cust[x].total;

		for(int b=0;b<6;b++)
		{
		cust[x].quantity[b]=0;
		cust[x].cost[b]=0;
		}

		cust[x].total=0;

		cout<<"\n\n Order "<<x<<" Deleted.";

		break;


	case 4:

		clrscr();

		char choice5;
		int choice4;

		do
		{
		cout<<"\n\n  Enter the order number whose bill you wish you view: ";
		cin>>choice4;

		displaybill(choice4);

		getch();
		clrscr();


		cout<<"\n  Would you like view another order's bill? (y:Yes  Other Character:no)";
		cin>>choice5;

		}while(choice5=='y');

		break;


	case 5:

		income=0;

		for(int j=0;j<10;j++)
		income+=cust[j].total;

		clrscr();

		cout<<"\n\n\n\n";
		cout<<"\n\n 		1.View Income for the day.";
		cout<<"\n\n  		2.Total Income.";
		cout<<"\n\n                3.View Income for all Days.";

		int jh;

		cout<<"\n\n 	Enter the option: ";
		cin>>jh;

		switch(jh)
		{

		case 1:

			clrscr();

			cout<<"\n\n\n\n\n\n\n\n\n			Income for the day is Rs."<<income;

			break;

		case 2:

			clrscr();

			days[no_days]=income;
			int u=0;              //To store total income

			for(int q=0;q<=no_days;q++)
			u+=days[q];

			cout<<"\n\n\n\n\n\n\n\n\n			Total income: Rs."<<u;

			break;

		case 3:

			clrscr();

			cout<<"\n\n\n";
			days[no_days]=income;

			for(int k1=0;k1<=no_days;k1++)
			cout<<"\n\n	     Day "<<k1+1<<" Income: Rs."<<days[k1]<<endl;


			days[no_days]=income;
			int large=days[0];
			int dfg=0;

			for(int lpp=1;lpp<=no_days;lpp++)
			{

			if(days[lpp]>large)
			{
				large=days[lpp];
				dfg=lpp;
			}

		}

		cout<<"\n\n\n\n	The Maximum Income is Rs."<<large<<" earned on Day "<<dfg+1;



		int small=days[0];
		int man=0;

		for(int k2=1;k2<=no_days;k2++)
		{
			if(days[k2]<small)
			{
				small=days[k2];
				man=k2;
			}
		}

		cout<<"\n\n	The Minimum Income is Rs."<<small<<" earned on Day "<<man+1;

		}
		break;

	case 6:

		clrscr();

		textbackground(WHITE);


		ifstream fin;
		fin.open("newfile.txt",ios::in|ios::app);

		fin.seekg(0);

		char line[80];

		while(fin)
		{       fin.getline(line,80);
			cprintf(line);
			cout<<endl;
		}

		break;


	 case 7:                        //Next Day

		count=0;
		income=0;

		for(int q=0;q<10;q++)
		income+=cust[q].total;

		days[no_days]=income;
		income=0;
		no_days++;

		for(int t=0;t<=no_days;t++)
		{
		cust[t].total=0;
		}


		for(int r=0;r<10;r++)     //Customers
		{
			for(int f=0;f<6;f++)     //Menu Items
			{
			cust[r].quantity[f]=0;
			cust[r].cost[f]=0;
			}

		}

		myfile<<"\n\n NEXT DAY \n\n";

		fin.close();

		break;

	case 8:

		clrscr();

		cout<<"\n\n\n\n       Thank You.\n       Goodbye! ";

		myfile.close();

		getch();
		exit(0);

	}


	cout<<"\n\n Press any key to go back to main menu. ";

	getch();
	clrscr();

	goto prgbeg;

	}

	else
	{
	 textcolor(RED);
	 cprintf("\n\n  Incorrect Password.\n  Goodbye.");

	 getch();
	 exit(0);
	}

}
