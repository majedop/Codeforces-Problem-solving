
void solve()
{
  string s;
  cin >> s;
  bool found=true;
  for (int i = 0; i < s.size(); i++)
  {
    if (i + 3 <=s.size() && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
    {
      i += 2;
    }
    else if (i +2  <=s.size() && s[i] == '1' && s[i + 1] == '4')
    {
      //cout << "2nd" << " " << i <<endl;
      i+=1;
    }else if (s[i]=='1'){
      //faltu(i);
      // continue;
    }else{
      //cout<<i<<endl;
      found=false;
      break;
    }
  }

  if(found){
    yess;
  }else{
    noo;
  }
}
