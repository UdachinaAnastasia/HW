#include <iostream>
#include <cstring>


using namespace std;

class Buyer
{
private:
 char m_surname[20];
 char m_name[20];
 char m_patronymic[20];
 char m_adress[30];
 char m_card_num[20];
 char m_account_num[20];

public:
 void setSurname(char * surname){
  strcpy (m_surname, surname); 
}
 void printSurname(){
  cout << "Surname: " << m_surname << "\n";
 }  
 void setName(char * name){
  strcpy (m_name, name); 
}
 void printName(){
  cout << "Name: " << m_name << "\n";
 }
 void setPatronymic(char * patronymic){
  strcpy (m_patronymic, patronymic); 
}
 void printPatronymic(){
  cout << "Patronymic: " << m_patronymic << "\n";
 }  
 void setAdress(char * adress){
  strcpy (m_adress, adress); 
}
 void printAdress(){
  cout << "Adress: " << m_adress << "\n";
 }
 void setCard_num(char * card_num){
  strcpy (m_card_num, card_num); 
}
 void printCard_num(){
  cout << "Card number: " << m_card_num << "\n";
 } 
 void setAccount_num(char * account_num){
  strcpy (m_account_num, account_num); 
}
 void printAccount_num(){
  cout << "Account number: " << m_account_num << "\n";
 } 
 
};

int main(){
 char surname[20];
 char name[20];
 char patronymic[20];
 char adress[30];
 char card_num[20];
 char account_num[20];
 cout << "Enter surname\n";
 cin >> surname;
 cout << "Enter name\n";
 cin >> name;
 cout << "Enter patronymic\n";
 cin >> patronymic;
 cout << "Enter adress\n";
 cin.ignore();
 cin.getline(adress, 30);
 cout << "Enter card number\n";
 cin >> card_num;
 cout << "Enter account number\n";
 cin >> account_num;
 
 Buyer buyer;
 buyer.setSurname(surname);
 buyer.setName(name);
 buyer.setPatronymic(patronymic);
 buyer.setAdress(adress);
 buyer.setCard_num(card_num);
 buyer.setAccount_num(account_num);

 cout << "Byer data" << "\n";
 buyer.printSurname();
 buyer.printName();
 buyer.printPatronymic();
 buyer.printAdress();
 buyer.printCard_num();
 buyer.printAccount_num();

 return 0;
}
