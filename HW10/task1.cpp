#include <iostream>
#include <cstring>


class Student{
private: 
 char stud_surname[20];
 char stud_initials[5];
 int stud_group_num;
 int stud_grades[5];

public:
 void setSurname(char * surname){
  strcpy(stud_surname, surname);
 }

 void printSurname(){
  std::cout << stud_surname << "\n";  
 } 

 void setInitials(char * initials){
  strcpy (stud_initials, initials);
 }

 void printInitials(){
  std::cout << stud_initials << "\n";  
 }

 void setGroup_num(int group_num){
  stud_group_num = group_num;
 }

 void printGroup_num(){
  std::cout << stud_group_num << "\n";  
 }

 void setGrades(int * grades){
  for(int i =0; i < 5; i++){
   stud_grades[i] = grades[i];
  }
 }
 void printGrades(){
  for(int i = 0; i < 5; i++){
   std::cout << stud_grades[i] << "\n";  
  }
 }
};

int main(){
 Student student;
 char surname[20];
 char initials[5];
 int group_num;
 int grades[5];
 std::cout <<  "Enter surname " << std::endl;
 std::cin.getline(surname, 20); 
 student.setSurname(surname);
 std::cout <<  "Enter initials " << std::endl;
 std::cin.getline(initials, 5);  
 student.setInitials(initials);
 std::cout <<  "Enter group number " << std::endl;
 std::cin >> group_num; 
 student.setGroup_num(group_num);
 std::cout <<  "Enter grades " << std::endl;
 for(int i = 0; i < 5; i++){
  std::cin >> grades[i];
 } 
 student.setGrades(grades);
 std::cout << "Student data\n";
 std::cout << "Surname: ";
 student.printSurname(); 
 std::cout << "Initials: ";
 student.printInitials();
 std::cout << "Group number: "; 
 student.printGroup_num();
 std::cout << "Grades: \n"; 
 student.printGrades();     
 return 0;
}
