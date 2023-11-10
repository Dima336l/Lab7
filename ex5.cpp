    #include <iostream>
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
        Employee employeeRecords[numOfStaff];
        
        for (int i = 0; i < numOfStaff; i++) {
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
            
            employeeRecords[i] = employer;
        }
        cout << "ID" << "\tName" << endl;
        for (int i = 0; i < numOfStaff; i++) {
            cout << employeeRecords[i].id << "\t";
            cout << employeeRecords[i].firstName << endl;
        }
    }
