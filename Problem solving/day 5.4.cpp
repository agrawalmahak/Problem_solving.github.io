bool digit(long long n)
{
    vector<int>a;
    while(n!=0)
    {
        a.push_back(n%10);
        n/=0;
    }
   if(a.size()==1) return false;
   for(int i=0;i<a.size()-1;i++)
   {
       if(abs(a[i]-a[i+1] !=1))
        return false;
   }
   return true;
}
int main()
{

}
