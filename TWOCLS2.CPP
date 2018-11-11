  #include<iostream.h>
   const int len=80;
   class Employee
   {
      private:
       char name[len];
       unsigned long number;
      public:
      void getdata()
      {
	cout<<"enter lastname";
	cin>>name;
	cout<<"enter number";
	cin>>number;
      }
      void putdata()
      {
	cout<<"/nname:"<<name<<"/name:"<<number;
      }
   };
    class manager:public Employee
    {
	private:
	    char title[len];
	    double dues;
       public:
	   void getdata()
       {
	 Employee::getdata();
	 cout<<"enter title";
	 cin>>title;
	 cout<<"enter dues";
	 cin>>dues;
       }
	  void putdata()
	  {
	  Employee::putdata();
	  cout<<"/ntitle:"<<title<<"/ndues:"<<dues;
	  }
      };
	   int main()
	   {
	   manager m1;
	   m1.getdata();
	   m1.putdata();
	   return 0;
	   }