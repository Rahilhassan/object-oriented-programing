    #include<iostream.h>
    #include<stdlib.h>
    #include<conio.h>
     const int LIMIT=10;
     class safearray
    {
       private:
	 int arr[LIMIT];
       public:
	 int& operator[] (int n)
      {
	 if(n<LIMIT)
      {
      cout<<"/nindex out of bounds/n";
	exit(1);
      }
      return arr[n];
      }
   };
      int main()
      {
      safearray sa;
      clrscr();
      getch();
      sa[1]=10;
      cout<<sa[1];
      cout<<sa[10];
      cout<<"end of program";
      return 0;
      }

