#include <iostream>
#include <string>
using namespace std;

class classToper {
    public:
    string studentName;
    int rollNum;
    string section;
    
};






int main()
{
    classToper firstPerson;
    firstPerson.studentName = "abc";
    firstPerson.rollNum = 01;
    firstPerson.section = "A1";
    
    classToper secondPerson;
    secondPerson.studentName = "efg";
    secondPerson.rollNum = 02;
    secondPerson.section = "A2";
    
    classToper thirdPerson;
    thirdPerson.studentName = "Sam";
    thirdPerson.rollNum = 03;
    thirdPerson.section = "A1";
    
    classToper fourthPerson;
    fourthPerson.studentName = "john";
    fourthPerson.rollNum = 08;
    fourthPerson.section = "A4";
    
std::cout << "Name" << " "<<"roll no."<<" "<<"Section"<<"\n";

std::cout << firstPerson.studentName << " "<<firstPerson.rollNum<<" "<<firstPerson.section<<"\n";
std::cout << secondPerson.studentName << " "<<secondPerson.rollNum<<" "<<secondPerson.section<<"\n";
std::cout << thirdPerson.studentName << " "<<thirdPerson.rollNum<<" "<<thirdPerson.section<<"\n";
std::cout << fourthPerson.studentName << " "<<fourthPerson.rollNum<<" "<<fourthPerson.section<<"\n";

return 0;
}




