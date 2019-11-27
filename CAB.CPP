#include<iostream>//Header File
#include<string>
#include<fstream>
#include<conio.h>
#include<cctype>
#include<windows.h>
using namespace std;
void CheckBookingRecord();//Function Prototype
ofstream MYFILE;
string NewworkerName;
string NewworkerPassword;
string AdminName="admin";
string AdminPassword="admin";
void BookingFromjayanagarTosilkboard();//Function Prototype

 const int Size=10;
string NumberOfCab[Size]={"","215","210","456","789","123"};//initializing
int CABSTATUS[Size]={1,1,1,1,1,1};//initializing
int ChargesPerKm=5;//initializing
int Counting=4;//initializing
int count=0;//initializing
int *PChargesPerKm=&ChargesPerKm;//initializing

bool wrong = false;//initializing
int main()
{
//*              Displaying Welcome screen                  //*
      int count=0;
      system("color 1E");//Setting The Color Of Console
   cout<<endl;
   cout<<"\t******************************\n";
   cout<<"\t*           Wel Come         *\n";
   cout<<"\t*             To              *\n";
   cout<<"\t*    Cab Booking System      *\n";
   cout<<"\t*****************************\n";
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"\t LoaiIng ";
   Sleep(100);//For Pause
   cout<<"<";
   Sleep(100);//For Pause
   cout<<">";
   Sleep(100);//For Pause  
   cout<<"<";
      Sleep(100);//For Pause
   cout<<">";
   cout<<"\n\n\t Successful\n";

   Sleep(2000);//For Pause
   system("CLS");//To Clear The Screen


//*                                      Login Menu       //*                                                *

   
   
 char Wish;
 string Choice;
do{
 
    system("CLS");
 cout<<"\t********************"<<endl;
 cout<<"\t*CaB Booking System*"<<endl;
 cout<<"\t********************"<<endl;
 cout<<endl;
 
 cout<<"*************************"<<endl;
 cout<<"*<1>  For Login Admin   *"<<endl;
 cout<<"*************************"<<endl;
 cout<<endl;  
 cout<<"**************************"<<endl;
 cout<<"*<2> For Login Worker    *"<<endl;
 cout<<"**************************"<<endl;
 cout<<endl;
 cout<<"******************"<<endl;
 cout<<"*<3> For Exit    *"<<endl;
 cout<<"******************"<<endl;
 cout<<endl;
 cout<<"Select: ";
 cin>>Choice;

    int choice = atoi( Choice.c_str() );
 switch(choice)
 {
  case 1:
             {
            string UserName;//declaration
                  string Password;
                  bool LoginSuccess= false;
   
                  do
      {
//*                           Admin Login                    //*    
     system("CLS");
     cout<<"\t********************"<<endl;
                 cout<<"\t*  Admin login    *"<<endl;
                 cout<<"\t********************"<<endl;
     cout<<endl;
     Sleep(500);//For Pause
     cout<<"Hint:- admin\n";
     cout<<"\n UserName: ";
     cin>>UserName;
     cout<<"Password: ";
     cin>>Password;
 
     if(UserName== AdminName && Password == AdminPassword)
     {
      cout<<"Login Successful \n";
      Loginsuccess= true;
      Sleep(2000);
      system("CLS");
      char Wish;
      do
      {
                             system("CLS");
        string Choice;//declaration
        cout<<"\t********************"<<endl;
                             cout<<"\t* Administration   *"<<endl;
                             cout<<"\t********************"<<endl;
                             cout<<endl;
        cout<<"<1> Customer Record"<<endl;
                             cout<<endl;
        cout<<"<2> Cab Driver Record"<<endl;
                             cout<<endl;
        cout<<"<3> Cab Status"<<endl;
                             cout<<endl;
        cout<<"<4> Canceled Booking Record"<<endl;
                             cout<<endl;
        cout<<"<5> Change The Rate Of Per Km Charges"<<endl;
                             cout<<endl;
        cout<<"<6> New Worker Account"<<endl;
        cout<<endl;
        cout<<"<7> To Log Out"<<endl;
        cout<<"Select :";
                             cin>>Choice;
        int choice = atoi( Choice.c_str() );
                             switch(choice)
                    {
                                 case 1:
                                 {
           CheckBookingRecord();
                                       break;
                                 }//end of case 1
                                 
                                 case 2:
                                 {
                                      system("CLS");
                                      ifstream InFile;//creating Object to read from file
                                      char ch;//initiailzing
                                      InFile.open("Registration.txt");//file open
                                      while (!InFile.eof())  
                                      {    
                                         InFile.get ( ch ) ;
                                         cout << ch ;  
                                      }
                                      InFile.close();//file close
                                      cout<<endl;
                                      break;
                                 }//end of case 2                              
                                 case 3:
                                 {
          //cab Status
                                    system("CLS");
         int size=6;
         cout<<"CAB STATUS\n";
         for(int i=1;i<size;i++)
         {
                                         if(CABSTATUS[i] ==1)
                                         {
                                              cout<<"Cab "<<NumberOfCab[i]<<" IS FREE\n";
                                         }
                                         else
                                         {
                                             cout<<"Cab "<<NumberOfCab[i]<<" IS NOT FREE\n";
                                         }
                                         
         }
                                    break;  
                                 }
         case 4:
                                 {
                                      system("CLS");
                                      ifstream InFile;//creating Object to read from file
                                      char ch;//initiailzing
                                      InFile.open("CancelBooking.txt");//file open
                                      while (!InFile.eof())  
                                      {    
                                         InFile.get ( ch ) ;
                                         cout << ch ;  
                                      }
                                      InFile.close();//file close
                                      cout<<endl;
                                      break;
                                 }//end of case 4
                                 case 5:
                                      {
               char Wish;
            do{
             //Increment  and decrement On rate
                                             system("CLS");
            cout<<"\t********************"<<endl;
            cout<<"\t*     WeL CoME     *"<<endl;
            cout<<"\t********************"<<endl;
            cout<<endl;
            int Charges;
                                             cout<<"Enter The Amount That You Want To Increment or Decrement On Km Per Charges :";
                                             do
            {
             cin>>Charges;
             wrong = cin.fail();//if type is opposite
             if(wrong)
              cout<<"Error Wrong Input\nEnter again"<<endl;
             cin.clear();
             cin.ignore(200, '\n');//ignore upto 200 characters
            }while(wrong);
         
            *PChargesPerKm+=Charges;
            cout<<"\nThe Changes Has Been Done SuccessFully"<<endl;
           cout<<"Do you Want TO Change The Rate Again(Y/N):  ";
           cin>>Wish;
           }while(Wish=='Y' || Wish=='y');
            break;
                                      }//end of case 4
                                 case 6:
          {
           system("CLS");
           cout<<"\t WELCOME"<<endl;
           cout<<endl;
           cout<<"Enter The New Worker User Name: ";
           cin>>NewWorkerName;
           cout<<endl;
           cout<<"Enter New Worker Password: ";
           cin>>NewWorkerPassword;
           cout<<endl;
           cout<<"The Account Has Been Made Successfully\n";
           cout<<endl;
           cout<<"\tThank YOu"<<endl;

           break;
          }
         case 7:
                                 {
          system("CLS");
                                       cout<<"\tFor Logout\n";
            break;
                                 }//end of case 5  
                                 
                                 default:
                                 {
                                 cout<<"You Enter Wrong Choice"<<endl;
                                 break;
                                 }      
                    }//end of switch
     if(choice==7)
     {
      break;
     }
                      cout<<"Press any key to continue...... ";
       Wish=getch();
                      }while(Wish);
                  }
                  else
                  {
                       cout<<"Incorrect User Name And Password\n"
                           <<"Please Try Again";
        Sleep(1000);
                  }
               }while(!LoginSuccess);
               break;  
             }//end of case 1
             
             case 2:
                  {
                       string UserName="";
                       string Password="";
                       bool LoginSuccess= false;
                       do{
                       system("CLS");
        cout<<"\t********************"<<endl;
                    cout<<"\t*  WoRkeR LoGiN     *"<<endl;
                    cout<<"\t********************"<<endl;
        cout<<"\nHint:- worker\n";
        cout<<"UserName: ";
                       cin>>UserName;
                       cout<<"Password: ";
                       cin>>Password;
         
                       if(UserName== "worker" && Password == "worker" || UserName== NewWorkerName && Password == NewWorkerPassword )
                       {
                            cout<<"LOgin Successful \n";
                            LoginSuccess= true;
       Sleep(2000);
                           
                            system("CLS");
                           
//*********************************************************************************************************
//*                             Displaying Menu On The Screen                                             *
//*********************************************************************************************************

 char Wish;
 string Choice;
    do{
           x:
    system("CLS");
 cout<<"\t********************"<<endl;
 cout<<"\t*    Workerr        *"<<endl;
 cout<<"\t********************"<<endl;
 cout<<endl;
 cout<<endl;
    cout<<"<1> Booking"<<endl;
 cout<<endl;
 cout<<"<2> cab Status    "<<endl;
 cout<<endl;
 cout<<"<3> Customer Record    "<<endl;
 cout<<endl;
 cout<<"<4> Update Cab Status    "<<endl;
 cout<<endl;
 cout<<"<5> To LogOut         "<<endl;
    cout<<endl;
 
 cout<<"Select :";
 cin>>Choice;
    int choice = atoi( Choice.c_str() );
    switch(choice)
 {
                  case 1:
                       {
           
                  //*************************************************************************
                  //*                       BoOkInG                                         *
                  //*************************************************************************
         
         do{
       
       system("CLS");
                  char Wish;
                  string Choice;
               cout<<"\t********************"<<endl;
               cout<<"\t*    Booking        *"<<endl;
               cout<<"\t********************"<<endl;
               cout<<endl;
                  cout<<endl;
                  cout<<"<1> To Book Cab From jayanagar To silkboard"<<endl;
               cout<<endl;
           
               cout<<"<2> To Go Back to Previous Menu"<<endl;
               cout<<endl;
                  cout<<"Select :";
               cin>>Choice;
                  int choice = atoi( Choice.c_str() );//converting string to int
                  switch(choice)
               {
       count++;
                        case 1:
                             {
                                   BookingFromjayanagarTosilkboard();//Calling function
                 break;
                             }
                 
                            }
                       case 2:
                            {
                                goto x;
                            }
                            default:
                                    {
                                          cout<<"You Enter Wrong Choice\n";
                                    }
                          }
       cout<<"Do you want to continue...... ";
       Wish=getch();
         }while(Wish);
                       
                          break;
                      }
                      case 4:
                           {
                               
                                system("CLS");
                                string UpdatingStatus;
        char Wish;
        do{
                                cout<<"\t********************"<<endl;
                             cout<<"\t* UpDating Status  *"<<endl;
                             cout<<"\t********************"<<endl;
                             cout<<endl;
                             cout<<"Enter The Cab Id Number To UPdate status: ";
        cin>>UpdatingStatus;
           long int choice = atoi( UpdatingStatus.c_str() );
                             switch(choice)
        {
       
        case 215:
         {
          char Statuss;
          cout<<"The Cab Id Number 215 Returned Or Not(Y/N) :";
          cin>>Statuss;
          if(toupper(Statuss=='N'))
          {
           CABSTATUS[1]=0;
          }
          else
          {
           CABSTATUS[1]=1;
          }
          break;
         }
         case 210:
         {
          char Statuss;
          cout<<"The Cab Id Number 210 Returned Or Not(Y/N) :";
          cin>>Statuss;
          if(toupper(Statuss=='N'))
          {
           CABSTATUS[2]=0;
          }
          else
          {
           CABSTATUS[2]=1;
          }
          break;
         }
         case 456:
         {
          char Statuss;
          cout<<"The Cab Id Number 456 Returned Or Not(Y/N) :";
          cin>>Statuss;
          if(toupper(Statuss=='N'))
          {
           CABSTATUS[3]=0;
          }
          else
          {
           CABSTATUS[3]=1;
          }
          break;
         }
         case 789:
         {
          char Statuss;
          cout<<"The Cab Id Number 789 Returned Or Not(Y/N) :";
          cin>>Statuss;
          if(toupper(Statuss=='N'))
          {
           CABSTATUS[4]=0;
          }
          else
          {
           CABSTATUS[4]=1;
          }
          break;
         }
         case 123:
         {
          char Statuss;
          cout<<"The Cab Id Number 789 Returned Or Not(Y/N) :";
          cin>>Statuss;
          if(toupper(Statuss=='N'))
          {
           CABSTATUS[5]=0;
          }
          else
          {
           CABSTATUS[5]=1;
          }
          break;
         }

         default:
          {
           cout<<"You Enter Wrong Choice."<<endl;
          }
        }
        cout<<"Do You Want To update The Another CAb Status(Y/N): ";
        cin>>Wish;
        }while(Wish=='Y' || Wish=='y');
        break;
                           }//end of case 2
       
                     case 3:
                                 {
          CheckBookingRecord();
                                       break;
                                 }//end of case 3
                     case 2:
                          {
                                 system("CLS");
         int size=6;
         cout<<"CAB STATUS\n";
                                 for(int i=1;i<size;i++)
                                 {
                                         if(CABSTATUS[i] ==1)
                                         {
                                              cout<<"Cab "<<NumberOfCab[i]<<" IS FREE\n";
                                         }
                                         else
                                         {
                                             cout<<"Cab "<<NumberOfCab[i]<<" IS NOT FREE\n";
                                         }
                                         
                                 }
         
            break;
                                 
                          }                          
                     case 5:
                         {
                             system("CLS");
                             cout<<"\tFor Logout\n";
                              break;
                         }
      default:
       {
        cout<<"You Enter Wrong Choice\n";
        break;
       }
    }//end of switch
                 if(choice==5)
     {
      break;
     }
 cout<<"Press any key to continue...... ";
    Wish=getch();
    }while(Wish);  
                       }        
                       else
                       {
                            cout<<"Incorrect User Name And Password\n"
                                <<"Please Try Again";
       Sleep(2000);
       
                       }
                       }while(!LoginSuccess);
                       break;
                  }//end of case 2
                 
            case 3:
                 {
                          system("CLS");
                          ifstream InFile;//creating object to read from file
                 char ch;//initializing
                 InFile.open("Exit.txt");//file open
                 while (!InFile.eof())  
                 {    
                   InFile.get ( ch ) ;
                    cout << ch ;  
                    }
                    InFile.close();//file close
                 cout<<endl;
                 Sleep(2000);
        exit(0);
                 break;
                 }//end of case 3
                 
            default:
                    {
                        cout<<"You Enter Wrong Choice"<<endl;
      break;
                    }//end of default
    }//end of Switch

    cout<<"Press any key to continue...... ";
    Wish=getch();
    }while(Wish);
 
 
 return 0;
 
}
void BookingFromjayanagarTosilkboard()
{
  if(CABSTATUS[1]==0 && CABSTATUS[2]==0 && CABSTATUS[3]==0 && CABSTATUS[4]==0 && CABSTATUS[5]==0 )
  {
   cout<<"All The cabs Are Book"<<endl;
   cout<<"We Can Not Book Cab for You"<<endl;
   
  }
  else
  {
   
   for(int i=1;i<=6;i++)
   {
    if(CABSTATUS[i]==1)
    {
     count=i;
     break;
    }

   }
     
    system("CLS");
    ofstream MyFile;//Creating Object Due To Which we Write On File
    float Distance=40;//Declaration
 float Charges;//Initializing
 ofstream MYFile;//Creating Object Due To Which we Write On File
 string Name;//Initializing
 ofstream MYFILE;
      MYFILE.open("CabStatus.txt",ios::app);
 MYFILE.open("Customer Record.txt",ios::app);//File Open
 MYFILE.open("Cancelbooking.txt",ios::app);//File Open
 cout << "\t\tbooking\n";
    cout<<"--------------------------------------"<<endl;
    cout<<"guide lines while filling The form: "<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<endl;
    cout<<"After Entering Your Name Put fullstop After Ending The name.\n";
    cout<<"Your Must Put fullstop at The end If You didn't So Program \n";
    cout<<"Will Not Go Further.\n";
    cout << "What is your Name : ";
    getline(cin,Name,'.');

    Charges=Distance*ChargesPerKm - Distance*0.10;//Computing Charges
    cout <<"\nPick : jayanagar";
 cout <<"\n drop:silkboard";
 cout <<"\n distance: 40Km";
 cout <<"\nCharges: Rs"<< Charges<<"\n";
 char PaidCharges;
 cout<<"Did You pay The Charges(Y/N) :- ";
 PaidCharges=getch();
 if(PaidCharges =='Y')
 {
        cout<<"Cab id Num "<<NumberofCab[count]<<" is Booked For You\n";
        cout<<"Your Booking Has Been Done\n";
     MyFile <<"\n\t\tCustomer Record\n";
     MyFile << "\name : "<< Name;
     MyFile <<"\nPick : jayanagar";
     MyFile <<"\n Drop:silkboard";
     MyFile <<"\n Distance: 40Km";
     MyFile <<"\nCharges: Rs"<< Charges;
     MyFile.close();//File Close
     CABSTATUS[count]=0;
     Sleep(1000);
     
   
 }
 else if(PaidCharges =='y')
 {
                                             cout<<NumberOfCab[count]<<" is Booked For You\n";
                                       
                               
   cout<<"Your Booking Has Been Done\n";
   MyFile <<"\n\t\tCustomer Record\n";//writing on file
   MyFile << "\nNAme : "<< Name;//writing on file
   MyFile <<"\nPick : jayanagar";//writing on file
   MyFile <<"\nDrop:silkbord";//writing on file
   MyFile <<"\nDistance: 40Km";//writing on file
   MyFile <<"\nCharges: Rs"<< Charges;//writing on file
   MyFile.close();//File Close
   CABSTATUS[count]=0;
   Sleep(1000);
     
 
 }
 else
 {
  cout<<"Your Booking Has Been Canceled Due to Unpaid Charge. \n";
  MYFile <<"\n\t\tBooking Caceled\n";//writing on file
  MYFile << "\nNAme : "<< Name;//
  MYFile.close();//File Close
  count--;
 }
 MYFILE.close();
 Sleep(2000);
}
  }

                                             
 

 

 system("CLS");
                                       ifstream InFile;//creating Object to read from file
                                       char ch;//initializing
                                       InFile.open("Customer Record.txt");//file open
                                       while (!InFile.eof())  
                                       {    
                                               InFile.get ( ch ) ;
                                               cout << ch ;  
                                 }
                                       InFile.close();//file close
                                       cout<<endl;
}
