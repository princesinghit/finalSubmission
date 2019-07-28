int Solution::threeSumClosest(vector<int> &A, int B) {
     int i,j,k,sum,Dif=INT_MAX,sum1,value,temp,l;

      l=A.size();
     for(i=0;i<l-2;)
     {
         j=i+1;
         k=l-1;
         while(k>j)
           {
               sum1=A[i]+A[j]+A[k];
               value=abs(sum1-B);
             if(value==0)
               {
                return B;
                }
               if(value<Dif)
               {
                Dif=value;
                sum=sum1;
                }
              if(sum1<B)
               {
                j++;
                }
              else{
                k--;
               }

            }
           i++;
     }
      return sum;
     }
