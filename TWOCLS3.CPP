	#include<iostream.h>
	#include<stdlib.h>
	#include<conio.h>
	class stack
     {
	 protected:
	    enum{max=3};
	    int st[max];
	    int top;
	 public:
	     stack():top(-1){}
	 void push(int val)
	     {st[++top]=val;}
	     int pop(int)
	     {return st[top--];}
     };
	   class stack2:public stack
     {
	      public:
	      void push(int val)
	      {
	       if(top>=max-1)
	      {
	       cout<<"stack is full/n";
	       exit(1);
	       }
	       stack::push(val);
	      }
	      int pop(int val)
	      {
		if(top<0)
	      {
	      cout<<"stack is empty";
	      exit(1);
	      }
	      return stack::pop(val);
	      }
     };
	      int main()
	      {
	       stack2 st;
	       getch();
	       clrscr();
	       st.push(11);
	       st.pop(11);
	       return 0;
	       }


