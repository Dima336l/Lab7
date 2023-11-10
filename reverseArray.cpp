    #include <iostream>
    using namespace std;
    
    void reverse(char s[], int size);

    int main( int argc, char *argv[] ) {
        char arr[] = {'H', 'A', 'R', 'R' , 'Y' };
        reverse(arr,5);
    }
    
    void reverse(char s[], int size) {
        for (int i = 0; i < size/2; i++) {
            int temp = s[i];
            s[i] = s[size-1-i];
            s[size-1-i] = temp;
        }
        for (int i = 0; i < size; i++) {
            cout << s[i];
        }
    } 
