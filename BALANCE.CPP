#include<iostream.h>
class wallet
{
  private:
    int Balance;
  public:
    wallet(): Balance(0) {}

    void receipt(int amount)
    {
      Balance+=amount;
    }

    void payment (int amount)
    {
      Balance-=amount;
      if(amount<=Balance)
      {
	 Balance-=amount;
      }
      else
      {
	cout<<"payment cannot be accepted";
      }
    }

    void getbalance ()
    {
      cout<<"get balance";
      cin>>Balance;
    }

    void showbalance ()
    {
      cout<<"value of balance"<< Balance;
    }
 };

  int main ()
  {
    wallet w1;
    w1.showbalance();
    w1.receipt(400);
    w1.showbalance();
    w1.payment(100);
    w1.showbalance();
    return 0;
  }

