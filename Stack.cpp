#include <bits/stdc++.h>

#define MAX_STACK 1000

using namespace std;

class Stack
{   private:
    char a[MAX_STACK];
    int size; //how filled the stack is
    public:
    Stack(){size = 0;}
    void push(char c)
    {   assert(size<1000);
        a[size] = c;
        size++;
    }
    void pop()
    {  assert(size>0);
        size--;

    }
    char top()
    {  assert(size>0);
       return a[size-1];
    }
    char popAll()
    {
        assert(size>0);


    }
    bool isEmpty()
    {
        if(size == 0)
            return true;
        return false;
    }
    void clear()
    {
        size = 0;
    }
};
int main()
{
    Stack s1;
    int k;
    cin>>k;
    string x[MAX_STACK];
    for(int i = 0; i <k;++i)
    {
        cin>>x[i];
    }
    /*cout<<"\n\n";
    for(int i = 0; i <k;++i)
    {
        for(int j =0; j<x[i].size(); ++j)
            cout<<x[i][j]<<" ";
    }*/

    for(int i = 0; i < k ; ++i)
        {
            for(int j = 0; j < x[i].size(); ++j)
            {
                //Open parentheses
                if(x[i][j] == '('|| x[i][j] == '{' || x[i][j] =='<'||x[i][j] == '[')
                    {
                        //cout<<x[i][j]<<" is pushed into stack\n";
                        s1.push(x[i][j]);
                    }
                //Close parentheses
                else if((x[i][j] == ')' && s1.top() == '(')||(x[i][j] == '}'&& s1.top() == '{')||(x[i][j] =='>'&& s1.top() =='<')||(x[i][j] == ']'&& s1.top() =='['))
                        {
                        //cout<<x[i][j]<<" is poped from stack\n";
                        s1.pop();
                        }
                else
                {   //parentheses don't match
                    cout<<"NO\n";

                    break;
                }

            }

            //Pushed = popped
            //Missing parentheses
            if(s1.isEmpty())
                {cout<<"YES\n";}
            s1.clear();//Reset the stack for next line

        }

    return 0;
}
//Test Case 1:
    /*s1.clear();
            for(int j = 0; j < x[0].size(); ++j)
            {
                //Open parentheses
                if(x[0][j] == '('|| x[0][j] == '{' || x[0][j] =='<'||x[0][j] == '[')
                    {
                        cout<<x[0][j]<<" is pushed into stack\n";
                        s1.push(x[0][j]);
                    }
                else if((x[0][j] == ')' && s1.top() == '(')||(x[0][j] == '}'&& s1.top() == '{')||(x[0][j] =='>'&& s1.top() =='<')||(x[0][j] == ']'&& s1.top() =='['))
                        {
                        cout<<x[0][j]<<" is poped from stack\n";
                        s1.pop();
                        }
                else
                {
                    cout<<"NO\n";
                    break;
                }

            }
            if(s1.isEmpty())
                cout<<"YES\n";*/

    // Test Case 2:
   /* s1.clear();
            for(int j = 0; j < x[1].size(); ++j)
            {
                //Open parentheses
                if(x[1][j] == '('|| x[1][j] == '{' || x[1][j] =='<'||x[1][j] == '[')
                    {
                        cout<<x[1][j]<<" is pushed into stack\n";
                        s1.push(x[1][j]);
                    }
                else if((x[1][j] == ')' && s1.top() == '(')||(x[1][j] == '}'&& s1.top() == '{')||(x[1][j] =='>'&& s1.top() =='<')||(x[1][j] == ']'&& s1.top() =='['))
                        {
                        cout<<x[1][j]<<" is poped from stack\n";
                        s1.pop();
                        }
                else
                {
                    cout<<"NO\n";
                    break;
                }

            }
            if(s1.isEmpty())
                cout<<"YES\n";*/
