#include <bits/stdc++.h>
#include "skip_list.h"
using namespace std;


skip_list::skip_list()
{
  head->next = tail;
  tail->prev=head;
}

node* skip_list::find(long val)
{
  node *temp=head;
  
  while(temp)
  {
    if(temp->next->val<val)
    {
      temp=temp->next;
    }
    else if(temp->next->val==val)
    {
      if(temp->down)
	temp=temp->down;
      else
	return temp;
    }
    else
    {
      temp=temp->down;
    } 
  }
  return temp;
}


//delete this:
node* skip_list::get_head()
{
  return head;
}
int main()
{
  skip_list s;
  node *temp = s.find(2);
  if(temp)
    cout<<temp->val<<endl;
  else
    cout<<"Nahi hai be"<<endl;
  //cout<<s.index;
  return 0;
}