#include<iostream>

class Tollboth{
private:
  unsigned int total_cars;
  double total_amount;
public:
 Tollboth():total_cars(0),total_amount(0){};
 ~Tollboth(){};
 void payingCar()
 {
   total_cars+=1;
   total_amount+=150.50;
 }
 void nopayCar()
 {
   total_cars+=1;
 }
void Display()
{
  double loss;
  loss=(total_cars*150.50)-total_amount;
  std::cout << "\nTotal Cars: " <<total_cars<<"    Total Amount: "<<total_amount<< '\n';
  std::cout << "\nTotal loss due to non paying Cars: " <<loss<< '\n';
}

};
int main(int argc, char const *argv[]) {
  Tollboth tollboth;
  char key;
  while(true){
    std::cout << "\nFor Paying Cars press: 'P'\nFor Non Paying Cars Press: 'N'\nFor Display Press: 'Q'\nEnter Key: ";
    std::cin >> key;
    if(key=='p' || key=='P')
    tollboth.payingCar();
    else if(key=='n' || key=='N')
    tollboth.nopayCar();
    else if(key=='q' || key=='Q')
    {tollboth.Display();
      break;}
  }

  return 0;
}
