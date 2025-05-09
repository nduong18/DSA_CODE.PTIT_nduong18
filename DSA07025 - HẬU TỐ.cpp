#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        int n;
        cin >> n;
        cin.ignore(); 
        
        string s;
        getline(cin, s); 
        
        stack<long long> st;

        stringstream ss(s);
        string token;


        while (ss >> token) {
            if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1 && isdigit(token[1]))) {
                st.push(stoll(token));
            } else {
    
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                switch (token[0]) {
                    case '+': st.push(a + b); break;
                    case '-': st.push(a - b); break;
                    case '*': st.push(a * b); break;
                    case '/': st.push(a / b); break;
                }
            }
        }
        cout << st.top() << '\n';
    }

    return 0;
}
