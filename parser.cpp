#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream parsed("my_file.csv");

  if(!parsed.is_open()) 
  {
    cout<<"Error"<<endl;
  }
  string block;

  while(parsed.good())
  {
    getline(parsed, block, ',');
    cout << block << endl;
  }
  parsed.close();
}
