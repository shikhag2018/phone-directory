#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<string>names;
vector<string>phone_nos;

class contact
  {
   private:
   int value;
   string name;
   string phone_no;
   string userName;
   string Password;
   public:
   void login();
   void Register();
   void searchByName();
   void AddContact();
   void searchById();
};
int main()
{ 
contact person;
int sel;
cout<<"*****************************Agenda++*******************************\n";
while(1)
 {
cout<<"[1]LOGIN\n";
cout<<"[2]New user? Register to access\n";
 cout<<"[3]ADD contact\n";
 cout<<"[4]Search by id\n";
 cout<<"[5]search by name\n";
 cout<<"[6]Exit\n";
 cout<<"your choice\n";
cin>>sel;
switch(sel)
{     case 1 :person.login();
              break;
      case 2 :person.Register();
               break;
	  case 3 : person.AddContact();
               break;
      case  4 :person.searchById();
                break;
      case  5 :person.searchByName();
                break;
}
if(sel==6)	
{
	break;	
	
	
}}
	return 0;
}
void contact ::AddContact()
{
	
	cout<<"enter contact name\n";
	cin>>name;
	cout<<"\n";
	cout<<"enter contact phone no\n";
	cin>>phone_no;
	cout<<"\n";
	cout<<"The ID for this contct will be"<<names.size()<<"\n";
	names.push_back(name);
	phone_nos.push_back(phone_no);
	
	
}
void contact ::searchById()
{
  
   cout<<"enter the id of the contact to search\n";
   cin>>value;
   if(value>=names.size())
   {
   	cout<<"the ID does not exist";
   	return ;
   }
	cout<<"Information for contact "<<value<<"\n";
	cout<<"name:"<<names[value]<<"\n";
	cout<<"phone no: "<<phone_nos[value]<<"\n";
	    
}
void contact:: searchByName()
{  bool found=false;
  string identity;
  cout<<"\n Enter name to search";
  cin>>identity;
  for(int i=0;i<=names.size();i++)
  {
  if(names[i]==identity)
   {    cout<<"id: "<<i<<"\n";
        cout<<"phone no: "<<phone_nos[i]<<"\n";
  }
  found=true;
}
if(!found)
{ 
}
}
void contact :: login()
{
}
void contact::Register()
{
	
}

