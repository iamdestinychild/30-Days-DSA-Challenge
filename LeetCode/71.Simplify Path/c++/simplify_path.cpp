#include<bits/stdc++.h>

using namespace std;

string simplifyPath(string path) {
    deque<string> s;
    string t = "";
    for(int i=0;i<path.size();i++) {
        if(path[i] == '/') {
            if(!t.empty()) {
                if(t == ".." && !s.empty()) s.pop_back();
                else if(t != "." && t != "..") s.push_back(t);
                t = "";                    
            }
        }
        else {
            t.push_back(path[i]);
        }
    }
    if(!t.empty()) {
        if(t == ".." && !s.empty()) s.pop_back();
        else if(t != "." && t != "..") s.push_back(t);
    }
    string final = "/";
    while(!s.empty()) {
        final.append(s.front());
        s.pop_front();
        final.push_back('/');
    }
    if(final.size() > 1) final.pop_back();
    return final;
}

int main() {
	string s;
	cout<<"Enter Path: ";
	cin>>s;
	cout<<"Simplified Path: "<<simplifyPath(s)<<"\n";
	return 0;
}