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
            Employee( string firstName, string lastName, string id, string email, string phoneNumber, float salary, Employee* manager = nullptr)
            : firstName(firstName), lastName(lastName), id(id), email(email), phoneNumber(phoneNumber), salary(salary), manager(manager) {}
        } ;

    int main( int argc, char *argv[] ) {
        Employee manager ("Dumitru", "Nirca", "1", "Nircadmitrii@icloud.com", "012345", 24.500);
        Employee employer1 ("Paul", "Arsenii", "2", "Paularsenii@gmail.com", "12345", 25.600, &manager);
        Employee employer2("Stefan", "Arsenii","3", "Stefanarsenii@gmail.com", "23456",36.000, &manager);
        cout << (*(employer2.manager)).firstName << endl;
    }
