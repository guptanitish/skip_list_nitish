struct node
{
  long val,offset;
  node *next,*down,*prev,*up;
  node(long i,long o)
  {
    val = i;
    offset = o;
    next=down=prev=up=NULL;
  }
};

class skip_list {

private:
  
   node *head = new node(LONG_MIN,0);
   node *tail = new node(LONG_MAX,0);
   int val;
   int index;
public:
    skip_list();
    node* get_head();
    node* find(long); //if not found return null, else return the node itself.
    //void insert(long); 
    //long get_offset(node*);
};
