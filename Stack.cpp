#include <bits/stdc++.h>

#define MAX_STACK 1000

using namespace std;

/*class Stack
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
*/
int main()
{
    stack <int> s1;
    int k;
    cin>>k;
    string x[MAX_STACK];
    for(int i = 0; i <k;++i)
    {
        cin>>x[i];
    }
    int flag;
    int a = 0;
    int b = 0;
    for(int i = 0; i < k ; ++i)
        {   flag = 1;

            for(int j = 0; j < x[i].size(); ++j)
            {
                //Open parentheses
                if(x[i][j] == '('|| x[i][j] == '{' || x[i][j] =='<'||x[i][j] == '[')
                    {
                        //cout<<x[i][j]<<" is pushed into stack\n";
                        s1.push(x[i][j]);
                    }
                //Close parentheses
                if((x[i][j] == ')')||(x[i][j] == '}')||(x[i][j] =='>')||(x[i][j] == ']'))
                    if(s1.empty())
                        {cout<<"NO"<<endl;
                        flag = 0;
                            break;}
                else if(!s1.empty()&&((x[i][j] == ')' && s1.top() == '(')||(x[i][j] == '}'&& s1.top() == '{')||(x[i][j] =='>'&& s1.top() =='<')||(x[i][j] == ']'&& s1.top() =='[')))
                        {
                        //cout<<x[i][j]<<" is poped from stack\n";
                        s1.pop();
                        }
                else {
                    flag = 0;
                    cout<<"NO"<<endl;
                    break;
                }

            }
            //Pushed = popped
            //Missing parentheses
            if(flag&&s1.empty())
            {
                cout<<"YES"<<endl;
            }
            else if(flag&&!s1.empty())
                cout<<"NO"<<endl;

            while(!s1.empty())
                    s1.pop();

        }

    return 0;
}
