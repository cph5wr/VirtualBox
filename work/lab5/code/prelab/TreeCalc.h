/* Colin Harfst
cph5wr
10/2/16 */

#ifndef TREECALC_H
#define TREECALC_H

#include <stack>
#include "TreeNode.h"
using namespace std;

class TreeCalc {
public:

    TreeCalc();						//Constructor
    ~TreeCalc();					//Destructor

    void cleanTree(TreeNode * ptr);	//Deletes tree/frees memory
    void readInput();			//gets data from user
    void insert(const string & val);	//puts value in tree

    // print methods
    void printPrefix(TreeNode * curNode) const;	//prints data in prefix form
    void printInfix(TreeNode * curNode) const;	//prints data in infix form
    void printPostfix(TreeNode * curNode) const;//prints data in postfix form
    void printOutput() const;			//prints in pre,in,post form

    int calculate();				//calls private calculate method

private:
    stack<TreeNode*> mystack;
    int calculate(TreeNode* ptr) const;		//Evaluates tree, returns value

};

#endif
