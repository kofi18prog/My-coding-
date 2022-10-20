#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;
float money;
int bottles;
//int price;


int main()
{ /* Prices for the various drinks and beverages are found below*/
float M=10.00l;
float Co=20.00l;
float T=15.00l;
float BC=15.00l;
    string name;
 int age;
   cout << "\033[1;31mWelcome\n Please enter your name: \033[0m\n";
 getline(cin,name);
 float time;
 cout<<"\033[1;31m Please enter the time\033[0m";
 cin>>time;
 char df;
 cout << "\033[1;38m chose one of the following by typing the 1st letter of your preference\033[0m\n"<< "\033[1;36m Drinks\n Beverages \033[0m\n";
 cin>>df;
 switch(df)
 {
    case 'D':
    cout << "\033[1;31m Please enter your age:\033[0m\n";
 cin>>age;
 char ch;
 cout << "\033[1;34m Confirm your age by typing y or n\033[0m\n";
 cin>>ch;
 switch(ch)
 {
    case 'y':
    cout<<"This is my correct age.";
    break;
    case 'n':
    cout<<"this is not my correct age" ;
    break;
    default:
    cout<<"Enter valid letter";
 }
 //system("Color %");
  if ((age>=18)&&(ch=='y'))
  {
    float Cl=25.00l;
    float G=20.00l;
    float C=40.00l;
    float b= 15.00;
    cout << "\033[1;35m \n Hi!\033[0m"<<name<<endl;
    cout << "\033[1;34m Welcome to the drink menu\033[0m\n";
    //setprecision(5);
    cout << "\033[1;34m 1.Club(Cl)\033[0m\t"<<"\033[1;35m-$"<<Cl<<"\033[0m\n"<<setprecision(5);
    cout << "\033[1;34m 2.Guiness(G)\033[0m\t"<<"\033[1;35m-$"<<G<<"\033[0m\n"<<setprecision(5);
    cout << "\033[1;34m 3.Cocktail(C)\033[0m\t"<<"\033[1;35m-$"<<C<<"\033[0m\n"<<setprecision(5);
    cout << "\033[1;34m 4.Beer(b)\033[0m\t"<< "\033[1;35m-$"<<b<<"\033[0m\n"<<setprecision(5);
     
     
     
    int options;
   cout<< "\033[1;32m Choose your preference\033[0m"<< "\033[1;20m"<<" "<<"NB:Only Numbers(1-4) Can Be Entered\033[0m"; 
   cin>>options;
    switch(options)
    {
    case 1:
    {cout<<"How many bottles of club"<<endl;
    cin>>bottles;
    int price=bottles*Cl;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':
        { float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";
          }
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout << "\033[1;31m Enter a valid letter\033[0m\n";
        } 
        }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change, change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}
       

    }
    else
    {
        cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
    }
    break;
    case 2 :
    {cout<<"How many bottles of Guiness"<<endl;
    cin>>bottles;
    int price=bottles*G;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':{
          float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";
        }
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout<<"Enter a valid character";
       }
        }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change,change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}                                                                         
    }
    else
    {
        cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
    }
    break;
    case 3 :
   { cout<<"How many bottles of cocktail"<<endl;
    cin>>bottles;
    int price=bottles*C;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':
        { float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";
          }
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout<<"Enter a valid character";
       }
       }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change,change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}
       
    }
    else
    {
        cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
   }
    break;
    case 4:
    {cout<<"How many bottles of Beer"<<endl;
    cin>>bottles;
    int price=bottles*b;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':
        {float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";}
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout<<"Enter a valid character";
       }
       }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change,change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}
    }
    else
    {
        cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
    }
    break;
    default:
    cout<<"Enter valid letter";
}
  }
  else{
    cout<<"\033[34;31m Warning!!!\n You do not meet the age requirements\033[0m "<<endl;
  }
  break;
  case 'B': 
    cout<< "\033[1;35m \n Hi!\033[0m"<<name<<"\n"<< "\033[1;34m Welcome to the Beverage menu\033[0m\n";
    //setprecision(5);
    cout << "\033[1;34m 1.Milo(M)\033[0m\t"<<"\033[1;35m-$"<<M<<"\033[0m\n"<<setprecision(5);
    cout << "\033[1;34m 2.Coffee(Co)\033[0m\t"<<"\033[1;35m-$"<<Co<<"\033[0m\n"<<setprecision(5);
    cout << "\033[1;34m 3.Tea(T)\033[0m\t"<<"\033[1;35m-$"<<T<<"\033[0m\n"<<setprecision(5);
    cout << "\033[1;34m 4.BrownCocoa(BC)\033[0m"<<"\033[1;35m-$"<<BC<<"\033[0m\n"<<setprecision(5);
    int option;
    cout<< "\033[1;32m Choose your preference\033[0m"<< "\033[1;20mNB:Only Numbers(1-4) Can Be Entered\033[0m"; 
    cin>>option;
    switch(option)
    {
    case 1:
    {cout<<"How many bottles of Milo"<<endl;
    cin>>bottles;
    int price=bottles*M;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':
        { float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";
          }
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout << "\033[1;31m Enter a valid letter\033[0m\n";
        } 
        }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change,change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}
    }
    else
    {
      cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
    }
    break;
    case 2 :
    {cout<<"How many bottles of Coffee"<<endl;
    cin>>bottles;
    int price=bottles*Co;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':{
          float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";
        }
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout<<"Enter a valid character";
       }
        }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change,change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}                                                                         
    }
    else
    {
        cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
    }
    break;
    case 3 :
   { cout<<"How many bottles of Tea"<<endl;
    cin>>bottles;
    int price=bottles*T;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':
        { float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";
          }
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout<<"Enter a valid character";
       }
       }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change,change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}
    }
    else
    {
        cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
   }
    break;
    case 4:
    {cout<<"How many bottles of BrownCocoa"<<endl;
    cin>>bottles;
    int price=bottles*BC;
   float tax=(price/2)*0.5;
   float Totalprice= tax + price;
    cout<<"Totalprice="<<"\033[1;33m"<<Totalprice<<"\033[0m"<<endl;
    cout<<"Please Enter money being paid:\n";
    cin>>money;
    float change = money-Totalprice;
    if (money>=Totalprice)
    {
        char gh;
       cout<<"Do you want to tip (y or n)"<<endl;
       cin>>gh;
       switch(gh)
       {
        case 'y':
        {float amount;
        cout << "\033[1;34m how much do you want to tip\033[0m\n";
        cin>>amount;
        if (amount>change)
        {cout << "\033[1;31m You need to add more money:$"<<(amount-change)<<"\033[0m\n";
        char ds;
        cout<<"Do you still want to tip(y or n)";
        cin>>ds;
        switch(ds)
        {
          case 'y':
          {
          float additionalmoney;
          cout << "\033[1;32m Yes I Want to tip\033[0m\n";
          cout << "\033[1;32m Please enter this:$"<<(amount-change)<<"to complete the process\033[0m\n";
          cin>>additionalmoney;
          float tip=change+additionalmoney;
          cout << "\033[1;32mThe tip is =$"<<tip<<"\033[0m\n";}
        break;
        case 'n':
        cout << "\033[1;34m I am canceling this tipping process\033[0m\n";
        break;
        default:
        cout<<"Enter a valid character";
       }
       }
        if (amount==change)
        {float tip=change;
        cout <<"The tip is=$"<<tip<<endl;}
        if(amount<change)
        {float tip=amount;
        cout<<"The tip is=$"<<tip<<endl; }
        }
        break;
        case 'n':
        cout<<"I have claimed my change,change=$\n"<<change<<endl;
        break;
        default:
        cout<<"Enter a valid character";
        break;
       }
       if(gh=='y')
       {cout<<"Thank you for the tip"<<endl;}
       else
       {cout<<"see you soon\n"<<"change=$"<<change<<endl;}
        if((time<18))
       {cout<<"\033[1;33m Thank you And have a Good day :)\033[0m";}
       else
       {cout<<"\033[1;33m Thank you And have a Good night :)\033[0m";}
       
    }
    else
    {
        cout<<"\033[1;34mYou owe, \033[0m"<<"\033[1;31m"<<change<<"\nPlease pay for your purchases!!!\033[0m"<<endl; 
    }
    }
    break;
    default:
    cout<<"Enter valid letter";
}  return 0;
  }
}
    