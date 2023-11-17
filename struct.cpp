    #include <iostream>
#include <vector>
    using namespace std;
    
   struct Employee {
            string firstName;
            string lastName;
            string id;
            string email;
            string phoneNumber;
            float salary;
            Employee *manager;
            Employee() : firstName(""), lastName(""), id(""), email(""), phoneNumber(""), salary(0), manager(nullptr) {}
            Employee( string firstName, string lastName, string id, string email, string phoneNumber, float salary, Employee* manager = nullptr)
            : firstName(firstName), lastName(lastName), id(id), email(email), phoneNumber(phoneNumber), salary(salary), manager(manager) {}
        } ;

    int main( int argc, char *argv[] ) {
        
        cout << "Enter the number of staff member you want to introduce: ";
        int numOfStaff;
        cin >> numOfStaff;
        
        cout << "How many managers will there be ? ";
        int numOfManager;
        cin >> numOfManager;
        
        Employee employeeRecords[numOfStaff];
        Employee managerRecords[numOfManager];
        
        string managerName;
        for (int j = 0; j < numOfManager; j++) {
            
            Employee manager;
            
            cout << "Enter manager first name: ";
            cin >> manager.firstName;
            
            cout << "Enter manager last name: ";
            cin >> manager.lastName;
            
            cout << "Enter manager id: ";
            cin >> manager.id;
            
            cout <<"Enter manager email: ";
            cin >> manager.email;
            
            cout << "Enter manager phone number: ";
            cin >> manager.phoneNumber;
            
            cout << "Enter manager salary: ";
            cin >> manager.salary;
            
            managerRecords[j] = manager;
            employeeRecords[j] = manager;
        }
        
        
        for (int i = 0; i < numOfStaff - numOfManager; i++) {
            
            Employee employer;
            
            cout << "Enter employer first name: ";
            cin >> employer.firstName;
            
            cout << "Enter employer last name: ";
            cin >> employer.lastName;
            
            cout << "Enter employer id: ";
            cin >> employer.id;
            
            cout <<"Enter employer email: ";
            cin >> employer.email;
            
            cout << "Enter employer phone number: ";
            cin >> employer.phoneNumber;
            
            cout << "Enter employer salary: ";
            cin >> employer.salary;
            
            cout << "Select a manager from the following: ";
            for (int i = 0; i < numOfManager; i++) {
                cout << managerRecords[i].firstName << " ";
            }
            
           cin >> managerName;
           
           for (const auto& manager : managerRecords) {
               if ( manager.firstName == managerName) {
                   employer.manager = new Employee(manager);
                   break;
               }
               else {
                   cout << "Manager not found" << endl;
               }
           }
            employeeRecords[numOfManager + i] = employer;
        }
        cout << "ID" << "\tName" << endl;
        for (int i = 0; i < numOfStaff; i++) {
            cout << employeeRecords[i].id << "\t";
            cout << employeeRecords[i].firstName << endl;
        }
    }
        
        
    
