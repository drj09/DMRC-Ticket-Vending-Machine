#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

int x=0,f=6,tk=0,ps=0,i,j,n=0,nwst=10,ch,temp=0,fare,moneyt=0,moneyc=0;

class admin
{private :
	  double card_phno[20];
	  int pass,st_id[20],st_price[20],card_id[20],card_amount[20];
	  char st_name[20][100],card_name[20][100],card_address[20][100];
 public  :
	  admin()
	  { temp=0;
	     for(i=0;i<10;i++)
		{ st_id[i]=100+i;
		}
	     for(i=0;i<10;i++)
		{ st_price[i]=100+temp;
		  temp+=2;
		}
	     pass=1234;
	  }

	  void newstn()
	  {clrscr();
	   cout<<"\n\nENTER NAME OF NEW STATION \t\t\t";
	   nwst++;
	   gets(st_name[nwst]);
	   cout<<"\n\n\n\n\t\t\tNEW STATION CREATED";
	   cout<<"\n\t\t\tSTATION NAME\t\t\t"<<st_name[nwst];

	   cout<<"\n\t\t\tSTATION ID  \t\t\t"<<100+nwst;
	   getch();
	  }


	  void station()
	  {strcpy(st_name[0],"SHASTRI NAGAR");
	   strcpy(st_name[1],"INDERLOK");
	   strcpy(st_name[2],"PRATAP NAGAR");
	   strcpy(st_name[3],"PULBANGASH");
	   strcpy(st_name[4],"KASHMIRI GATE");
	   strcpy(st_name[5],"CIVIL LINES");
	   strcpy(st_name[6],"VISHANSABHA");
	   strcpy(st_name[7],"DELHI UNIVERSITY");
	   strcpy(st_name[8],"SHAHDRA");
	   strcpy(st_name[9],"DILSHAAD GARDEN");
	   strcpy(st_name[10],"BADARPUR");
	   cout<<"done";
	  }

	  void show_station()
	  { clrscr();
	    cout<<"\n\n\t\t    STATION\t\t\t   "<<"id";
	    cout<<"\n\t\t------------------------|----------------";
	    for(i=0;i<=nwst;i++)
	       cout<<"\n\t\t  "<<st_name[i]<<"\t\t\t   "<<100+i;
	  }


	void cal_fare()
	 { int st1,st2;
	   cout<<"\n\nEnter id of Boarding Station\t\t\t";
	   cin>>st1;
	   cout<<"Enter id of Destination Station\t\t\t";
	   cin>>st2;
	   if(st1>nwst+100 || st1<100)
	      {cout<<"\nINVALID STATION 1 ID";
	       getch();
	       menu();
	      }
	   else if(st2>nwst+100 || st2<100)
	      {cout<<"INVALID STATION 2 ID";
	       getch();
	       menu();
	      }
		else
		   { if(st2>st1)
		       fare=f+(st2-st1);
		     else
			fare=f+(st1-st2);
			moneyt+=fare;
			cout<<"This Trip will cost\t\t\t\t"<<fare<<"rs";
			cout<<"\nPress any key to proceed \t\t\t";
			getch();
			cout<<"\n\n\t\t\tTOKEN IS GENERATED \n\t\t\tCOLLECT YOUR TOKEN\n\t\t\tTHANKS FOR BEING PART OF DMRC";
			tk++;
			getch();
		  }

	}

	void admenu()
	{ clrscr();
	  cout<<"\n\n\n\n\t\t\tEnter password\t\t ";
	  cin>>temp;
	  if(temp==pass)
	      { clrscr();
		do{ clrscr();
		    x=0;
		    cout<<"TICKET SOLD           -->"<<tk;
		    cout<<"\t\tPASS ISSUED           -->"<<ps;
		    cout<<"\nMONEY COLLECTED TOKEN -->"<<moneyt;
		    cout<<"\t\tMONEY COLLECTED PASS  -->"<<moneyc;
		    cout<<"\n\n\t\t\tADMINISTRATION  MENU";
		    cout<<"\n\n\t\t\tPRESS YOUR CHOICE";
		    cout<<"\n\n\t\t\t1.ADD NEW STATION";
		    cout<<"\n\n\t\t\t2.FARE INCREMENT";
		    cout<<"\n\n\t\t\t3.FARE DECREMENT";
		    cout<<"\n\n\t\t\t4.SHOW CARD HOLDER DETAILS";
		    cout<<"\n\n\t\t\t5.SYSTEM RESET";
		    cout<<"\n\n\t\t\t6.EXIT\n\t";
		    cin>>ch;
		    switch(ch)
			{ case 1 : newstn();
				   break;
			  case 2 : cout<<"\nEnter incriment amount \t\t\t";
				   cin>>temp;
				   f+=temp;
				   cout<<"\nNew Min fare  -->\t\t\t"<<f+1;
				   getch();
				   break;
			  case 3 : cout<<"\nEnter decrement amount \t\t\t";
				   cin>>temp;
				   f-=temp;
				   cout<<"\nNew Min fare  -->\t\t\t"<<f+1;
				   getch();
				   break;
			  case 4 : show();
				   break;
			  case 5 : cout<<"PRESS ANY KEY TO RESET SYSTEM OR PRESS 0 TO DISCARD";
				   cin>>temp;
				   if(temp==0)
				     {admenu();
				     }
				   else
				   {
				     moneyt=0;
				     moneyc=0;
				     tk=0;
				     ps=0;
				   }
				   break;
			  case 6 : x=1;
				   break;
			  default:
				   break;
			}

		  }while(x==0);
		   x=0;

	   }
	  else
	    { cout<<"\n\t\t#@#@#@@  PASSWORD DOESNT MATCH  #@#@#@@";
	      getch();
	    }
	}

	void show()
	   { clrscr();
	     cout<<"\nCARD ID | HOLDER NAME | HOLDER ADDRESS   | PHONE NO | AMOUNT";
	     for(i=0;i<n;i++)
	     { cout<<"\n"<<card_id[i]<<"     | ";
	       cout<<card_name[i]<<"     |  ";
	       cout<<card_address[i]<<"      | ";
	       cout<<card_phno[i]<<"  | ";
	       cout<<card_amount[i];
	     }
	     getch();
	   }



	void ashow()
	   { clrscr();
	     for(i=0;i<n;i++)
	     { cout<<"\n\n\n\n\n\t\tCARD ID                 \t\t"<<card_id[i];
	       cout<<"\n\t\tCARD HOLDER NAME        \t\t"<<card_name[i];
	       cout<<"\n\t\tCARD HOLDER ADDRESS     \t\t"<<card_address[i];
	       cout<<"\n\t\tCARD HOLDER PHONE NO    \t\t"<<card_phno[i];
	       cout<<"\n\t\tCard INITIAL AMOUNT     \t\t"<<card_amount[i];
	     }
	     getch();
	   }


       void card()
	  { clrscr();
	    int t=0;
	    card_id[n]=501+n;
	    cout<<"\n\n\n\n\t\tEnter card holder name        \t\t";
	    cin>>card_name[n];
	    cout<<"\n\t\tEnter Adress                  \t\t";
	    cin>>card_address[n];
	    cout<<"\n\t\tEnter Phone no.               \t\t";
	    cin>>card_phno[n];
	    do
	     {cout<<"\n\t\tEnter Initial Amount  >100    \t\t";
	      cin>>temp;
	      if(temp>=100)
		{card_amount[n]=temp;
		 t=1;
		}
	      else
		 cout<<"\n@$@$@$   AMOUNT SHOULD BE MORE THAN 100RS    @$@$@$";
	     }while(t==0);


	    cout<<"\n\n\t\t++==PRESS ANY KEY TO CREATE CARD==++";
	    getch();

	    clrscr();
	    cout<<"\n\n\n\n\tCARD ID                 \t\t"<<card_id[n];
	    cout<<"\n\tCARD HOLDER NAME        \t\t"<<card_name[n];
	    cout<<"\n\tCARD HOLDER ADDRESS     \t\t"<<card_address[n];
	    cout<<"\n\tCARD HOLDER PHONE NO    \t\t"<<card_phno[n];
	    cout<<"\n\tCard INITIAL AMOUNT     \t\t"<<card_amount[n];
	    cout<<"\n\n\n\t####   CHECK DETAILS IF SATISFIED PRESS 1 AND PRESS 0 TO DISCARD  ####\n\n\t";
	    cin>>ch;
	    if(ch==1)
	       {cout<<"\n\n\n\n\t\t\t  $$  CARD IS CREATED  $$";
		n++;
		ps++;
		moneyc+=card_amount[n];
	       }
	    else
		cout<<"\n\n\t\t\t$$  CARD IS NOT CREATED  $$";

	    getch();
	  }



       void addmoney()
	  { clrscr();
	    int id;
	    cout<<"\n\n\n\t\tEnter id         \t\t";
	    cin>>id;
	    for(i=0;i<n;i++)
	       if(id==card_id[i])
		 { cout<<"\t\tAmount present    \t\t"<<card_amount[i];
		   cout<<"\n\t\tEnter Money to Add  \t\t";
		   cin>>temp;
		   card_amount[i]+=temp;
		   cout<<"\t\t\t****----AMOUNT ADDED----****\n";
		   cout<<"\n\n\t\tCARD ID                 \t\t"<<card_id[i];
		   cout<<"\n\t\tCARD HOLDER NAME        \t\t"<<card_name[i];
		   cout<<"\n\t\tCARD HOLDER ADDRESS     \t\t"<<card_address[i];
		   cout<<"\n\t\tCARD HOLDER PHONE NO    \t\t"<<card_phno[i];
		   cout<<"\n\t\tCARD UPDATED AMOUNT     \t\t"<<card_amount[i];
		   moneyc+=card_amount[i];
		   getch();

		   break;
		 }
	      else
		{cout<<"*&*&*&    wrong id    &*&*&*";
		 getch();
		}

	  }





	void menu()
	{ clrscr();
	  cout<<"\n\n\n\t\t\tWELCOME TO TICKET VENDING MACHINE";
	  cout<<"\n\n\t\t\tPRESS YOUR CHOICE";
	  cout<<"\n\n\t\t\t1.GET TOKEN TICKET";
	  cout<<"\n\n\t\t\t2.GET PASS ";
	  cout<<"\n\n\t\t\t3.ADD MONEY IN PASS";
	  cout<<"\n\n\t\t\t4.GET SHOWPIECE TOKEN";
	  cout<<"\n\n\t\t\t5.ADMINISTRATION MENU";
	  cout<<"\n\n\t\t\t6.EXIT\n\n\t\t\t";
	}


};





void welcome()
{ cout<<"\n\n\n\n\n\n\n\n\n\t\t   ";
  cout<<"# # #  #####  #     ####  ####  ## ##  ####"
      <<"\n\t\t   "
      <<"# # #  ###    #     #     #  #  # # #  ### "
      <<"\n\t\t   "
      <<"#####  #####  ####  ####  ####  #   #  ####";
  getch();
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\t   ";
  cout<<"###   ## ##  ####  ####    ### ### ### # # ### ###  ###"
      <<"\n\t   "
      <<"#  #  # # #  ###   #        #   #  #   ##  ##   #   #"
      <<"\n\t   "
      <<"####  #   #  #  #  ####     #  ### ### # # ###  # ### ";
  getch();

}



void showpiece()
{clrscr();
 cout<<"\n\n\n\n\t\tPRESS ANY KEY TO GENERATE AN SHOWPIECE TOKEN "
     <<"\n\n\t\tIT WILL COST ONLY 10 RS";
     getch();
 cout<<"\n\n\n\n\t\tCOLLECT YOUR SHOWPIECE TOKEN\n\n\t\tTHANKS FOR BEING A PART OF DMRC ";
 getch();
}




void main()
{ clrscr();
  admin obj1;
  welcome();
  obj1.station();
  do
  {x=0;
   obj1.menu();
   cin>>ch;
   switch(ch)
      {
	case 1 :obj1.show_station();
		obj1.cal_fare();
		break;
	case 2 :obj1.card();
		break;
	case 3 :obj1.addmoney();
		break;
	case 4 :showpiece();
		break;
	case 5 :obj1.admenu();
		break;
	case 6 :x=1;
		break;
	default:cout<<"\t\t\t^^^^# WRONG KEY #^^^^";
		getch();
      }
   }while(x==0);
   clrscr();
   cout<<"\n\n\n\n\n\n\n\\\t\t\tPROJECT BY ::-->   DHEERAJ\n\t\t\tPRESS ANY KEY TO EXIT ";
   getch();
}

