#include "header.h"
ostream& operator <<(ostream& s, rectangle& a){
  s<<"With of the rectangle = "<<a.getWidth(false)<<"\nLength of rectangle = "<<a.getLength(false)<<"\n";
  return s;
};
istream& operator >>(istream& s, rectangle& a){
  int l, w;
  s>>l>>w;
  a.setLength(l);
  a.setWidth(w);
  return s;
};
ostream& operator <<(ostream& s, collRent& a){
  s<<"With of the rectangle = "<<a.getWidth(false)<<"\nLength of rectangle = "<<a.getLength(false)<<"\nCollor of rectangle = "<<a.getCollor(false)<<endl;  
  return s;
};
istream& operator >>(istream& s, collRent& a){
  int l, w;
  string col;
  s>>l>>w>>col;
  a.setLength(l);
  a.setWidth(w);
  a.setCollor(col);
  return s;
};