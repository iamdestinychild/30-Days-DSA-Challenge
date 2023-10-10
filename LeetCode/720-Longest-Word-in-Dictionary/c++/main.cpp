#include<bits/stdc++.h>

using namespace std;

// Trie Node
struct node {
    bool isWord;	// Stores if this node has ending of a word
    map<char,node*> m;	// Next character nodes
    node(bool x) {
        isWord = x;
    }
};

// Add Word to Trie
void add(string &s, node *n) {
    for(int i=0;i<s.size();i++) {
        if(n->m.find(s[i]) == n->m.end()) n->m[s[i]] = new node(false);
        n = n->m[s[i]];
    }
    n->isWord = true;
    return;
}

// Checks whether string 't' is longer than string 's'
bool shouldReplace(string &s, string &t) {
    if(t.size() < s.size()) return false;
    if(t.size() > s.size()) return true;
    int i=0;
    while(i<s.size()) {
        if(s[i]==t[i]) i++;
        return t[i] < s[i];
    }
    return false;
}

// perform Depth-First-Travel on Trie to find longest word
void getString(node *n, string &s, string &t) {
    for(char c = 'a'; c <= 'z'; c++) {
        if(n->m.count(c) && n->m[c]->isWord) {
            t.push_back(c);
            getString(n->m[c], s, t);
            t.pop_back();
        }
    }
    if(shouldReplace(s,t)) s = t;
    return;
}

// Find Longest Word by creating Trie
string longestWord(vector<string>& words) {
    node *root = new node(false);
    for(auto s: words) {
        add(s, root);
    }
    string s = "";
    string t;
    getString(root, s, t);
    return s;
}

// Driver Function
int main() {
	int n;
	cout<<"Enter Number of Words: ";
	cin>>n;
	vector<string> words;
	cout<<"Enter Words:\n";
	for(int i=0;i<n;i++) {
		string s;
		cin>>s;
		words.push_back(s);
	}

	cout<<"Longest Word: "<<longestWord(words)<<"\n";
	return 0;
}
