    #include <iostream>
#include <string>
    using namespace std;
     
    int main() {
        int count;
        string word;
     
        cin >> count;
        for (int i = 0; i < count; ++i) {
            cin >> word;
            if (word.length() > 10)
                cout << "\n" << word[0] << word.length()- 2 << word[word.length()- 1] << endl;
            else
                cout << word <<endl;
        }
        return 0;
    }