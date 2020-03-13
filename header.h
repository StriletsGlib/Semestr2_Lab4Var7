#include <iostream>
using namespace std;
class rectangle{
  public:  
  void setWidth(int w);
  void setLength(int l);
  void setP(int work);
  void setS(int work);
  int getWidth(bool ou = true);
  int getLength(bool ou = true);
  int gets(bool ou = true);
  int getp(bool ou = true);
  void countS();
  void countP();
  rectangle(){
    width = 10;
    length = 10;
  }
  rectangle(int a, int b){
    setWidth(a);
    setLength(b);
  }
  rectangle(rectangle &a){
    cout<<"Copying...\n";
    setWidth(a.getWidth(false));
    setLength(a.getLength(false));
  }
  ~rectangle(){cout<<"\nRectangle dissapeared\n";}
  void getInfo();
  bool testSq();
  virtual rectangle& operator=(rectangle& a){
    length=a.getLength(false);
    width=a.getWidth(false);
    return *this;
  };
protected:
  int width, length, s = 0, p = 0;
};
class collRent: public rectangle{
  public:
  string getCollor(bool ou = true);
  void setCollor(string c);
  collRent(int a, int b, string c):rectangle(a,b){
    setCollor(c);
  }  
  collRent(){
    rectangle();
    setCollor("Black");
  }
  collRent(collRent &a) :rectangle(a){
    setCollor(a.getCollor());
  }
  ~collRent(){
    cout<<endl<<"Collor dissapeared";
  }
  collRent& operator=(collRent& a){
    length=a.getLength(false);
    width=a.getWidth(false);
    collor=a.getCollor(false);
    return *this;
  };
  private:
  string collor;
};

void askQuestion();
void taskCheck(rectangle &n1, rectangle &n2, collRent &c1, collRent &c2);