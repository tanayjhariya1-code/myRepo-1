#include<iostream>
using namespace  std;
class DailyCommandCentre
{
 private:
 //for addTaks()...
 string taskName;
 int time;
 int importance;
 int urgency;
 int taskTime; 
 
 //for BasicDuties...
 int energyLevel;
 int collage;
 int homeWork;
 int y;

 public:
 void day()
 {
    cout << "ADD YOUR TODAY'S SESSIONS" << endl;
    cout << "=========================" << endl;
    cout << endl;
    cout << "What is enery level(1-10): ";
    cin >> energyLevel;
    cout << "Did you attend your collage today(1/0): ";
    cin >> collage;   
    cout << "Do you have any HomwWork/Assignment(1/0): ";
    cin >> homeWork;
    
 } 
 
 void show()
 {
    if(energyLevel < 6)
    {
        cout << "Take the break for 60 minutes " << endl;
    }
    else
    {
        cout << "Take break for 30 minutes " << endl;
    }
    //
    if(homeWork == 1)
    {
        cout << "After break do your homewor/assignment " << endl;
    }
    else
    {
        cout << "No homework ! so revise the topics of today's session " << endl;
    }
    //
 }

 void input()
 {
  cout << "How much free time do you have?(minutes)" << endl;
  cin >> time;
  if(time)
  {
   cout << "Do some meaningful works" << endl;
   cout << endl;
  }
 }
 void addTask()
 {
  cout << "ADD TASK" << endl;
  cout << "========" << endl;
  cout << endl;
  cout << "Name: ";
  cin >> taskName;
  cout << "Time reqired(minutes): ";
  cin >> taskTime;
  cout << "Importance(1-5): ";
  cin >> importance;
 }
 
 //Var for expanses
   
   int avg;
   int number;      
   int total = 0;
   double prctg;
   string what[10];
   int spend[10];
 void expanses()
 {
    cout << "What is your average budget plan(In rupees): " ;
    cin >> avg;
    cout << "How many things did you spend on?: " ;
    cin >> number;
    
    for(int i = 0 ; i < number ; i++)
    {
        cout << "Add: ";
        cin >> what[i];
        cout << "Spend Amount(in rupees): ";
        cin >> spend[i];
        cout << endl;  
    }
   
 }
 void totalSpent()
 {
   for(int i = 0 ; i < number ; i++)
   {
    total = total + spend[i];
   
   }
   cout << "Total Spend money: " << total << endl; 
   if(total < avg)
   {
    cout << "You saved " << (avg - total) << "rupees" << endl;
   } 
   else if(total > avg)
   {
    cout << "You spent " <<(total - avg ) << " Rupees more than your daliy budget! ";
   }
}

};

int main()
{
    int choice;
    DailyCommandCentre a1;
    a1.day();
    cout << endl;
    a1.show();
    cout << endl;
    a1.input();
    cout << "How many task do you wanna do? ";
    cin >> choice;
    for(int i = 0 ; i < choice ; i++)
    {
        a1.addTask();
        cout << endl;
    } 
    cout << endl;
    
    cout << "Lets tell about your today's financial budget " << endl;
    a1.expanses(); 
    cout << endl;
    a1.totalSpent(); 
     
     
     
    cout << "==========EXECUTED==========" ;
    return 0;
}
