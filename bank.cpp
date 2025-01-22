#include "iostream"
using namespace std;
class Bank_Balance // CREATING A CLASS NAMED BANK BALANCE.
{
private:
     int Serial_Number;
     char Acc_Name[20];
     int Acc_Number;
     int balance;

public:
     void Insert_Data() // FUNCTION FOR INSERTING DATA.
     {
          cout << endl
               << "Enter accountant's serial number : ";
          cin >> Serial_Number;
          cout << endl
               << "Enter accountant name : ";
          cin >> Acc_Name;
          cout << endl
               << "Enter account number : ";
          cin >> Acc_Number;
          cout << endl
               << "Enter balance : ";
          cin >> balance;
     }
     void deposit() // FUNCTION FOR DEPOSITING MONEY.
     {
          int deposit;
          cout << endl
               << "Enter the amount to deposit : ";
          cin >> deposit;
          balance += deposit;
          cout << endl
               << "The amount is added and has now became : " << balance;
     }
     void withdraw() // FUNCTION FOR WITHDRAWING MONEY.
     {
          int withdraw;
          cout << endl
               << "Enter the amount to be withdrawed : ";
          cin >> withdraw;
          if (balance > withdraw)
               balance -= withdraw;
          else
               cout << endl
                    << "The balance is too low to be withdrawed!!!!";
          cout << endl
               << "The balanace is now become : " << balance;
     }
     void Display_Data() // FUNCTION FOR DISPLAYING DATA.
     {
          cout << endl
               << "The accountant's serial number is : " << Serial_Number;
          cout << endl
               << "The accountant's name is : " << Acc_Name;
          cout << endl
               << "The accountant number is : " << Acc_Number;
          cout << endl
               << "The accountant's balance is : " << balance;
     }
     void Balance() // FUNCTION FOR DISPLAYING BALANCE.
     {
          cout << endl
               << "The current balance is : " << balance;
     }
};
int main()
{
     Bank_Balance b[50]; // CREATING AN ARRAY VARIABLE FOR THE CLASS NAMED BANK_BALANCE.
     int n;
     cout << endl
          << "Enter number of accountants : ";
     cin >> n;
     for (int i = 0; i < n; i++)
     {
          b[i].Insert_Data();
          cout << endl
               << "The data is stored and is given below : " << endl;
          b[i].Display_Data();
          cout << endl;
     }
     int Search_Serialno, choice;
     do
     {
          cout << endl
               << "========== BANK OPERATIONS ============";
          cout << endl
               << "1.DEPOSIT";
          cout << endl
               << "2.WITHDRAW";
          cout << endl
               << "3.BALANCE";
          cout << endl
               << "4.EXIT";
          cout << endl
               << "Enter choice : ";
          cin >> choice;

          switch (choice)
          {
          case 1:
               cout << endl
                    << "Enter Serial number to be searched : ";
               cin >> Search_Serialno;
               for (int i = 0; i < n; i++)
               {
                    if (Search_Serialno == i + 1)
                    {
                         b[i].Display_Data();
                         b[i].deposit();
                    }
               }
               break;
          case 2:
               cout << endl
                    << "Enter Serial number to be searched : ";
               cin >> Search_Serialno;
               for (int i = 0; i < n; i++)
               {
                    if (Search_Serialno == i + 1)
                    {
                         b[i].Display_Data();
                         b[i].withdraw();
                    }
               }
               break;
          case 3:
               cout << endl
                    << "Enter Serial number to be searched : ";
               cin >> Search_Serialno;
               for (int i = 0; i < n; i++)
               {
                    if (Search_Serialno == i + 1)
                         b[i].Balance();
               }
               break;
          case 4:
               cout << endl
                    << "You are being exited from the main terminal!!!";
               break;
          default:
               cout << endl
                    << "No such option is found try again!!!";
               break;
          }
     } while (choice != 4);
     return 0;
}