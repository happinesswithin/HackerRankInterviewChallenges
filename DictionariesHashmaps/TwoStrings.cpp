#include <bits/stdc++.h>

using namespace std;



// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    
    // bool common;
    // string result;
    
    //
    unordered_map<char, char> map;
    
    int n1 = s1.length();
    int n2 = s2.length();
    
    const char* s1Char;
    const char* s2Char;
    
    // strcpy(s1Char, s1.c_str());
    // strcpy(s2Char, s2.c_str());
    
    // Returns a pointer to an array that contains 
    // a null-terminated sequence of characters (i.e., a C-string
    // representing the current value of the string object
    s1Char = s1.c_str();
    s2Char = s2.c_str();
    
    // int forN;
    
    // if (n1 > n2 || n1 == n2){
    //     forN = n1;
    // } else {
    //     forN = n2;
    // }
    
    // for (int i = 0; i < forN; i++){
    //     if (s1Char[i] == s2Char[i]){
    //         common = true;
    //         break;
    //     }
    //     common = false;
    // }
    
    for (int i = 0; i < n1-1; i++){
        map[ s1Char[i] ] = s1Char[i + 1];
    }
    
    for(int i = 0; i < n2; i++){
        if(map[s2Char[i] ] != NULL)            
            return "YES";
    }
    
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    
    int q;
    cin >> q;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
