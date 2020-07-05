 #include<iostream.h>
 #include<conio.h> 
         
  class add
{
  int a,b,c;

 public:
   void get();
   void sum();
   void show();
};

   void add::get()
{
   cout<<"Enter two int:";
   cin>>a>>b;
}
   void add::sum()
{
   c=a+b;
}
   void add::show()
{
   cout<<"Intgers are"<<a<<"and"<<b;
   cout<<"sum="<<c;
}

    int main()
 {
     add A;
     clrscr();
     A.get();
     A.add();
     A.show();
     getch();
     return 0;
 }