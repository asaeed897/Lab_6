#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class stack{
private:
  vector<string>stack;
public:
  bool empty()
  {

      if(stack.size()==0)
      return true;
      else
      return false;
  }
  void push(string add)
  {
    stack.push_back(add);
  }
  void pop()
  {
    stack.pop_back();
  }
  string top()
  {
    return stack.back();
  }

};

int main(int argc, char const *argv[]) {

  stack Stack1;
  string str;
  char choice;
  while(true){
  std::cout << "\nTo add string: Press 'A'\nTo remove string: Press 'R'\nTo show Recently Added: Press 'T'\nTo Quit: Press 'Q'" << '\n';
  std::cout << "Enter your choice: ";
  cin>>choice;
  if(choice=='A' || choice=='a')
  {
  std::cout << "\nPlease add string: ";
  cin>>str;
  Stack1.push(str);
  }
  else if(choice=='R' || choice=='r')
{
  if(Stack1.empty()==0)
   Stack1.pop();
   else
   cout<<"\nStack is already empty"<<endl;
}
  else if(choice=='T' || choice=='t')
  {
    if(Stack1.empty()==0)
    std::cout << "\nMost recently added string: " <<Stack1.top()<< '\n';
    else
    std::cout << "Stack is Empty" << '\n';
  }

  else if(choice=='Q' || choice=='q')
  break;}
  return 0;
}
