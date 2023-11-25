#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int length = s.size();
    int result_length = length;
    string result(length, ' ');
    int result_count = 0;
    int EGYPT_length = 5;
    for (int i=0; i<length; i++){
        if (s[i] != 'E'){
            result[result_count] = s[i];            
        }
        else {
            if (s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T'){
                result[result_count] = ' ';
                // we are already counting the first 'E'
                i += EGYPT_length - 1;
                // Trim trailing whitespaces equal to the length of EGYPT-1
                result_length -= (EGYPT_length - 1);
                result.resize(result_length);
            }
            else {
                result[result_count] = s[i];
            }
        }
        result_count++;
    }

    cout << result;

    return 0;
}