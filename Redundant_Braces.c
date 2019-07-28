int Solution::braces(string A) {
    stack<char>str;
   int c1,c2,i=0;
    while(i<sizeof(A))
    {
     char str1=A[i];

     if(str1=='('||str1=='+'||str1=='*'||str1=='/')
       str.push(str1);
       else if(str1==')')
           {
               if(str.top()=='(')
               return 1;
               else
               {
                   while(!str.empty()&&str.top()!='(')
                   str.pop();

               }
           }
           ++i;
    }
    return 0;
}
