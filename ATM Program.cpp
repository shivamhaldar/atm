
	#include <iostream>
	#include <iomanip>
	#include <time.h>
	#include <fstream>
	#include <conio.h>
	#include <string.h>
	#include <stdlib.h>
	#include<process.h>
	#include<dos.h>
	using namespace std;
	 
	class Bank
	{
	public:
	    double startBalance;
	    string COKAccountHolders;
	    double limit;
	  
	};
	 
	class ATMAccountHolders:public Bank
	    {
	    string accountHolders;
	    string accountHoldersAddress, branch;
	    int accountNumber;
	    double startBalance;
	    double accountBalance;
	    double accountInterest;
	    double amount;
	    int count;
	 
	    public:
	    void deposit();
	    void withdraw();
        void details();
	    void payBills();
	    void accountExit();
	    void interest();
	     
	    ATMAccountHolders()
	    {
	    accountNumber = 5678;
	    accountHolders = "  Shivam Haldar";
	    accountHoldersAddress = " House no.103";
	    startBalance = 10000.00;
	    accountBalance = 20000.00;
	    branch  = " GIT-HUB";
	    amount = 20000;                
	    }
	    };

	    void ATMAccountHolders::interest()
	     {
	    system("cls");
	       
	        cout<<"\n==========================  ATM ACCOUNT INTEREST PAYMENT  ==========================\n\n";
	       cout<<"\tThe Interest is calculate over the last SIX months on the average account balance\n";
	       cout<<"\n\t\tInterest Rate payable is 10% per annum."<<endl;
	       cout<<"\t\tView the accumulated interest? Press 1 for Yes OR 0 for NO.\n\n";
	        
	        
	         
	        cout<<"==========================ATM ACCOUNT INTEREST PAYMENT==========================\n\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        accountInterest=accountBalance+(accountBalance*1.050);
	        cout<<"\tPresent available balance + interest for 6 months :$"<<accountInterest<<"\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	        }
	    
	    void ATMAccountHolders::deposit()
	    {
	         system("cls");
	        cout<<"\n===========================ATM ACCOUNT DEPOSIT SYSTEM==========================\n\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Deposited $";
	             
	            double amount;
	            cin>>amount;
	        accountBalance=startBalance+amount ;
	        cout<<"\n\tYour new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"\n\t\t\tThank You!\n\n"<<endl;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	    }

	    void ATMAccountHolders::withdraw()
	    {
	         system("cls");
	        cout<<"\n============================ATM ACCOUNT WTHDRAWAL=============================\n\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Withdrawn $";
	             
	            double amount;
	            cin>>amount;
	             
	            if(amount>accountBalance||amount>9000)
	            {
	        system("cls");
	        cout<<"\n============================ATM ACCOUNT WITHDRAWAL=============================\n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        cout<<"\n\tInsufficient Available Balance in your account.\n\n"<<endl;
	        cout<<"\t\t\tSorry !!\n"<<endl;
	        system("PAUSE");
	            }
            else
	            {
	                double b;
	                accountBalance=startBalance-amount ;
	    system("cls");
	        cout<<"\n============================ATM ACCOUNT WTHDRAWAL=============================\n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        cout<<"Your new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");               
	           }
	     
	    }

	    void ATMAccountHolders::payBills()
	    {
	        system("cls");
	           
	 
	        cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"====================++THANK YOU++============================\n\n";
	        cout<<"Pay Electric Company electricity bill of $2000.00 now?\n\n";
	        cout<<"\t\tPress 1 for Yes OR Press 0 for No\n\n";
	         
	        int r;
	         
	        cin>>r;
	        if(r=1)
	        {accountBalance=startBalance-2000;
	        system("cls");
	        cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n";
	        cout<<"\n\tYour electricity bill of $2000.00 has been paid.\n\n";
	        cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"\n============================+++++++++++++++++++++++===========================\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	       }
	       if(r=0)
	       {
	       cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
	        cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";    
	        cout<<"====================++THANK YOU++============================\n\n";     
	       }
	        system("PAUSE");   
	    };
	     
	void ATMAccountHolders::details()
	    {
	        system("cls");
	           
	 
	        cout<<"\n============================ATM ACCOUNT DETAILS=============================\n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"====================++THANK YOU++============================\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");   
	    }
	 
     void ATMAccountHolders::accountExit()
	    {
	        system("cls");
	           
	 
	        cout<<"\n============================ATM ACCOUNT EXIT=============================\n\n";
	        cout<<"\n\n\t\tEXITING...........EXITING...............EXITING\n\n";
	        cout<<"====================++THANK YOU++============================\n\n";
	        cout<<"============================+++++++++++++++++++++++============================\n\n";
	        system("PAUSE");
	        exit(1);   
	    }
	     
	 
	class Limits:public Bank
	      {
	      public:
	             void SetLimit(double NewLimit)
	             {}
	       
	             double Getlimit()
	             {}
	       
	      };         

	    int main()
	    {
	    int e;
	    ATMAccountHolders p;
	     
	    system ("Color 0b");
	        cout<<"\n============================WELCOME TO ATM==================================\n\n";
        cout<<"\t\t\t--------------------\n"<<endl;
	       cout << "\t\tToday's date is: ";
	         time_t now;
	         time(&now);
	 
	        printf("%s\n", ctime(&now));;
	        cout<<"\t\t\t--------------------\n"<<endl;
	        cout<<"============================WELCOME TO ATM==================================\n\n";
	         
	      cout<<"\tPress 1 and press Enter to Access your account via pin number\n\n";
	      cout<<"\t\t\t\t\t or \n\n";
	      cout<<"\tPress 0 and press Enter to get Help.\n\n";
	         
	      int access;
	      cin>>access;
	      switch(access)
	      {
	      case 1:
	      system("cls");int i, pin;
	       
	      cout<<"\n============================ATM ACCOUNT ACCESS==================================\n\n";
	      cout<<"\n\nWhat is your account Pin access Number? Only one attempt allowed.\n\n"<<endl;
	      cout<<"============================ATM ACCOUNT ACCESS==================================\n\n";               
	      cin>>pin;
	       
	      system("cls");
	       
	      if(pin==123)
	       
	      {
	      system("cls"); 
	       
	      do
	        {
	      system("cls");  
	      system ("Color 0b");
	cout << endl << "\n======================ATM Main Menu Screen======================\n" << endl << endl;
	cout << "\t\tEnter (1) for Cash Deposit" << endl;
	cout << "\t\tEnter (2) for Cash Withdrawal" << endl;
	cout << "\t\tEnter (3) for Balance Inquiry" << endl;
	cout << "\t\tEnter (4) for Pay Bills" << endl;
	cout << "\t\tEnter (5) to Account Interest Payment" << endl;
	cout << "\t\tEnter (0) to Exit ATM" << endl << endl;
	cout << "\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
	cout<<"==========================ATM MAIN MENU================================\n\n";
	         
	        cin>>e;
	        switch(e)
	        {
	            case 1:
	                p.deposit();
	                break;
	            case 2:
	                p.withdraw();
	                break;
	            case 3:
	                p.details();
	                break;
	            case 4:
	                p.payBills();
	                break;
	            case 5:
	                p.interest();
	                break;
	            case 0:
	                p.accountExit();
	                break;
	        default:cout<<"Please Enter the Correct Number Choice"<<endl;
	        }
	    }while(e!=0);
	 
	      break;                                    
	      }
	                
	      else
	      {
	      system("cls");
	      system("Color 0b");
	cout<<"\n===========================THANKS FOR YOU===========================\n\n";
	cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
	cout<<"===========================THANKS===========================\n\n";
	               
	      system("PAUSE");
	      exit (1);
	      }   
	       
	       
	    case 0:
	    system("cls");
	      cout<<"\n==========================ATM ACCOUNT STATUS================================\n\n";
	                    cout<<"\tYou must have the correct pin number to access this acount. See your\n\n";
	                    cout<<"\t  bank representative for assistance during bank opening hours\n\n";
	                    cout<<"\t\tThanks for, your choice today!!\n\n";
	      cout<<"==========================ATM ACCOUNT STATUS================================\n\n";
	      system ("PAUSE");
	      exit(1);      
	      break;         
	    }
	     
	system("PAUSE");
	return 0;
	 
	};

