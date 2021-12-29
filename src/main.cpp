#include <iostream>
#include <Pen.hpp>
#include <Paper.hpp>
#include <Book.hpp>
#include <PaintingBook.hpp>
int main()
{
  
  //Pen p;
  //std::cout<<p.getRubber()<<std::endl;

  //Pen p2(p);
 // Pen p3;
  //p3=p;

  //Paper pa;

  //Paper pa2(pa); //private constructor

  int a=10,b,c=35;
  int d=10,e,f=35;

  b=c=a;
  std::cout<<"b= "<<b<<",c= "<<c<<",a= "<<a<<std::endl;
  (e=f)=d;
  std::cout<<"e= "<<e<<",f= "<<f<<",d= "<<d<<std::endl;
  std::cout<<std::endl;

  Book b1(10);
  Book b2(20);
  Book b3(30);
  Book b4(40);
  
  b1+=b2+=b3;
  std::cout<<std::endl;

  std::cout<<"Book 1 has "<<b1.getpages()<< " pages"<<std::endl;
  std::cout<<"Book 2 has "<<b2.getpages()<< " pages"<<std::endl;
  std::cout<<"Book 3 has "<<b3.getpages()<< " pages"<<std::endl;
  std::cout<<std::endl;

  //Item 11
  b1+=b1;
  std::cout<<"Book 1 has "<<b1.getpages()<< " pages"<<std::endl;
  std::cout<<std::endl;

  //Item12
  PaintingBook pb1;
  PaintingBook pb2;
  std::cout<<std::endl;

  pb2.pages=50;
  pb1+=pb2;
  std::cout<<"Paintingbook pb1 "<<pb1.pages<< " pages"<<std::endl;



  return 0;
}