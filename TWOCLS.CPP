    #include<iostream.h>
    #include<conio.h>
    class counter
    {
       protected:
	 unsigned int count;
       public:
	 counter():count(0){}
	 counter(int c):count(c){}
	unsigned int getcount()
      {
	  return count;
      }
	counter operator++()
      {
	  return counter(++count);
      }
   };
       class countdn:public counter
       {
       public:
	counter operator--()
	 {
	  return counter(--count);
	 }
       };
	 int main()
       {
	 countdn c1;
	 clrscr();
	 getch();
	 cout<<c1.getcount();
	 ++c1; ++c1;
	 cout<<c1.getcount();
	 --c1;
	 cout<<c1.getcount();
	 return 0;
       }
