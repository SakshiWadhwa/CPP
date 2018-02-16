 #include<iostream>  
 #include<stdlib.h>  
 using namespace std;  
   
 class matrix  
 {  
   int row,col,mat[10][10];  
   public:  
     matrix()  
     {  
       row=col=0;  
       for(int i=0;i<10;i++)  
         for(int j=0;j<10;j++)  
         mat[i][j]=0;  
     }  
   
    friend void operator >>(istream& din,matrix& m);  
     friend ostream& operator <<(ostream& dout,matrix& m);  
   
     matrix operator +(matrix m2);  
     matrix operator -(matrix m2);  
     matrix operator *(matrix m2);  
     int operator !=(matrix m2);  
   
 }; 
  void operator >>(istream& din,matrix& m)  
 {  
     cout<<"Enter the size\n";  
     din>>m.row>>m.col;  
   
     cout<<"Enter the elements\n";  
     for(int i=0;i<m.row;i++)  
      for(int j=0;j<m.col;j++)  
      din>>m.mat[i][j];  
    
 } 
 ostream& operator <<(ostream& dout,matrix& m)  
 {  
    for(int i=0;i<m.row;i++)  
    {  
      for(int j=0;j<m.col;j++)  
      {  
        dout<<m.mat[i][j]<<"\t";  
      }  
    dout<<endl;  
    }  
    return dout;  
 }  
   
   matrix matrix :: operator +(matrix m2)  
 {  
  matrix m3;  
  m3.row=m3.col=row;  
   
  for(int i=0;i<row;i++)  
   for(int j=0;j<col;j++)  
   m3.mat[i][j]=mat[i][j]+m2.mat[i][j];  
   return m3;  
 }  
   
   
 matrix matrix :: operator -(matrix m2)  
 {  
  matrix m3;  
  m3.row=m3.col=row;  
   
  for(int i=0;i<row;i++)  
   for(int j=0;j<col;j++)  
   m3.mat[i][j]=mat[i][j]-m2.mat[i][j];  
   return m3;  
 }  
   
    matrix matrix :: operator *(matrix m2)  
 {  
  matrix m3;  
  m3.row=m3.col=row;  
   
  for(int i=0;i<row;i++)  
  {  
   for(int j=0;j<col;j++)  
   {  
   m3.mat[i][j]=0;  
   for(int k=0;k<m2.row;k++)  
   m3.mat[i][j]+=mat[i][k]*m2.mat[k][j];  
   }  
  }  
   return m3;  
 }  
   
   int matrix ::operator !=(matrix m2)  
 {  
   if(row!=m2.row && col!=m2.col)  
   return 1;  
   else  
   return 0;  
 }  
   
 int main()  
 {  
    matrix m1,m2,m3;  
     
    repeat:  
    cout<<"Matrix 1:\n" ;  
    cin>>m1;  
   
    cout<<"Matrix 2: \n";  
    cin>>m2;  
   
    if(m1!=m2)  
    {  
    cout<<"Matrix size needs to be equal\nTry Again\n";  
    goto repeat;  
     }  
    int ch;  
    cout<<"Menu: ";  
    cout<<"1.Addition  2.Subtraction 3.Multiplication: ";  
    cin>>ch;  
   
    switch(ch)  
    {  
      case 1:  
      cout<<"Addition:\n ";  
      m3=m1+m2;  
      cout<<m3<<endl;  
      break;  
   
      case 2:  
      cout<<"Subtraction:\n ";  
      m3=m1-m2;  
      cout<<m3<<endl;  
      break;  
   
      case 3:  
      cout<<"Multiplication:\n ";  
      m3=m1*m2;  
      cout<<m3<<endl;  
      break;  
   
      default: cout<<"Invalid choice";  
    }  
   
 } 
