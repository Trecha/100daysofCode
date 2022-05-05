bool solve(string s) {
    stack<char> st;
    char x;
    int flag=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
            continue;
        }
        if (st.empty())
        {
            flag=0;
            return false;
        }

        switch(s[i])
        {
            case ')':x = st.top();
                     st.pop();
                     if (x == '{' || x == '[')
                     {
                         flag=0;
                         return false;                         
                     }
                     break;
            case '}':x = st.top();
                     st.pop();
                     if (x == '(' || x == '[')
                     {
                         flag=0;
                         return false;
                     }
                     break;
            case ']':x = st.top();
                     st.pop();
                     if (x == '{' || x == '(')
                     {
                         flag=0;
                         return false;
                     }
                     break;
        }

    }
    if(flag==1 && st.empty())
    return true;
    else
    return false;
}

