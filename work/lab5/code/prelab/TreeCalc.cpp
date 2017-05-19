/* Colin Harfst
cph5wr
10/2/16 */

#include "TreeCalc.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Constructor
TreeCalc::TreeCalc() {
  mystack = stack<TreeNode*>();
}

//Destructor- frees memory
TreeCalc::~TreeCalc() {
  cleanTree(mystack.top());
}

//Deletes tree/frees memory
void TreeCalc::cleanTree(TreeNode* ptr) {
  if (ptr->left==NULL && ptr->right==NULL)
    delete ptr;
  else {
    cleanTree(ptr->left);
    cleanTree(ptr->right);
    delete ptr;
  }
}

//Gets data from user
void TreeCalc::readInput() {
    string response;
    cout << "Enter elements one by one in postfix notation" << endl
         << "Any non-numeric or non-operator character,"
         << " e.g. #, will terminate input" << endl;
    cout << "Enter first element: ";
    cin >> response;
    //while input is legal
    while (isdigit(response[0]) || response[0]=='/' || response[0]=='*'
            || response[0]=='-' || response[0]=='+' ) {
        insert(response);
        cout << "Enter next element: ";
        cin >> response;
    }
}

//Puts value in tree stack
void TreeCalc::insert(const string& val) {
  if (val=="*"||val=="/"||val=="+"||val=="-") {
    TreeNode* tr=new TreeNode(val);
    tr->right=mystack.top();
    mystack.pop();
    tr->left=mystack.top();
    mystack.pop();
    mystack.push(tr);
  }
  else {
    TreeNode* tr=new TreeNode(val);
    mystack.push(tr);
  }
}

//Prints data in prefix form
void TreeCalc::printPrefix(TreeNode* ptr) const {
  if (ptr!=NULL) {
    cout << ptr->value << " ";
    printPrefix(ptr->left);
    printPrefix(ptr->right);
  }
}

//Prints data in infix form
void TreeCalc::printInfix(TreeNode* ptr) const {
  if (ptr!=NULL) {
    string val=ptr->value;
    if (val=="*"||val=="/"||val=="+"||val=="-") {
      cout << "(";
      printInfix(ptr->left);
      cout << " " << ptr->value << " ";
      printInfix(ptr->right);
      cout << ")";
    }
    else
      cout << ptr->value;
  }
}

//Prints data in postfix form
void TreeCalc::printPostfix(TreeNode* ptr) const {
  if (ptr!=NULL) {
    printPostfix(ptr->left);
    printPostfix(ptr->right);
    cout << ptr->value << " ";
  }
}

// Prints tree in all 3 (pre,in,post) forms
void TreeCalc::printOutput() const {
    if (mystack.size()!=0 && mystack.top()!=NULL) {
        cout << "Expression tree in postfix expression: ";
        printPostfix(mystack.top());
        cout << endl;
        cout << "Expression tree in infix expression: ";
        printInfix(mystack.top());
        cout << endl;
        cout << "Expression tree in prefix expression: ";
        printPrefix(mystack.top());
        cout << endl;
    } else
        cout<< "Size is 0." << endl;
}

//Evaluates tree, returns value
// private calculate() method
int TreeCalc::calculate(TreeNode* ptr) const {
  string s=ptr->value;
  if (ptr->left==NULL && ptr->right==NULL) {
    return atoi(s.c_str());
  }
  else {
    if (s=="+") {
      int x = calculate(ptr->left);
      int y = calculate(ptr->right);
      return x+y;
    }
    if (s=="-") {
      int x = calculate(ptr->left);
      int y = calculate(ptr->right);
      return x-y;
    }
    if (s=="*") {
      int x = calculate(ptr->left);
      int y = calculate(ptr->right);
      return x*y;
    }
    else {
      int x = calculate(ptr->left);
      int y = calculate(ptr->right);
      return x/y;
    }
  }
}

//Calls calculate, sets the stack back to a blank stack
// public calculate() method. Hides private data from user
int TreeCalc::calculate() {
    int i = 0;
    i = calculate(mystack.top());
    return i;
}
