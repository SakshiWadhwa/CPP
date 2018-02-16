# include<iostream>
using namespace std;
class university
  {
     public:
        virtual void getdata(int)=0;
        virtual void show()=0; 
   };
class dept1:public university
  {
      int n;
      char names[20][20];
      float salary[5];
    public:
         void getdata(int num)
             {
                 n=num;
                 for(int i=0;i<n;i++)
                  {
                     cout<<"enter the name of "<<i+1<<" employee of department 1 ";
                     cin.get();
                     cin.get(names[i],20);
                     cout<<"enter the salary : ";
                     cin>>salary[i];
                    }
              }
         void show()
           {
               cout<<"total number of employees in department 1 :"<<n<<endl;
               cout<<"names of employees along with their salary :\n";
               for(int i=0;i<n;i++)
                   {
                       cout<<i+1<<" employee :"<<names[i]<<" - Rs"<<salary[i]<<endl; 
                     }     
   };
class dept2:public university
  {
      int n;
     char names[20][20];
     float salary[5];
   public:
      void getdata(int num) 
           {
              n=num;
             for(int i=0;i<n;i++)
                {
                    cout<<"enter the name of "<<i+1<<" employee of department 2 ";
                    cin.get();
                   cin.get(names[i],20);  cout<<"enter the salary : ";
                  cin>>salary[i];
              }
           }
         void show()
           {
              cout<<"total number of employees in department 2 :"<<n<<endl;
              cout<<"names of employees along with their salary :\n";
              for(int i=0;i<n;i++)
                  {
                   cout<<i+1<<" employee :"<<names[i]<<" - Rs"<<salary[i]<<endl;          
                    }
             }
 }; 
int main()
 {
     int choice,n;
     university *u,*s;
    dept1 d1;
    dept2 d2;
     u=&d1;
    cout<<"enter the no. of employees in department 1 :";
    cin>>n;
    u->getdata(n);
    u=&d2;
     cout<<"enter the no. of employees in department 2 :";
     cin>>n;
     u->getdata(n);
     cout<<"enter 1 for accessing detail of deptartment 1  & 2 for department 2"<<endl;
     cin>>choice;
     switch(choice)
        {
           case 1:
              u=&d1;
              s->getdata();
              u->show();
              break;
          case 2:
               u=&d2;
               s->getdata();
               u->show();
               break;
          default:
               cout<<"wrong choice";
        }
    }

