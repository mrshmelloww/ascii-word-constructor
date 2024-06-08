#include <iostream>
#include <unistd.h> 
using namespace std;

int main() {

    string word, cur = "";
    cout << "Enter the target word: ";
    getline(cin, word);
    cout << "Constructed word:\n";

    int idx = 0;
    while(idx < word.size()) {
        for(int i = 32; i < 200; i++) {
            usleep(17500);
            cout << cur + char(i) << '\n';
            if(word[idx] == char(i)) {
                cur += char(i);
                break;
            }
        }
        idx++;
    }
  
    return 0;
}
