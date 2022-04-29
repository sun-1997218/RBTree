
void leftroating (RBTreenode &P)
{
  if(p){
    RBTreenode r=p.right;
         //先将
    r.right=p.left;
  
    if(p.left==nullptr)
    {
       r.left.parent=p;
    }
  
    //  操作父节点
    r.parent=p.parent;
  
    if(p.parent==nullptr)
    {
     this.root=r;
    }
    else if(p.parent.left==p)
    {
     p.parent.left=r;
    }
    else {
      p.parent.right=r;
    }
  
  r.left=p;
  p.parent=r;
  }
}

void rightroating (RBTreeNode &p)
{
  if(p)
  {
    RBTreeNode l=p.left;
    p.left=l.right;
    
    if(l.left)
    {
      l.left.parent=p;
    }
    
    //操作父节点
    
    if(!p.parent){
      this.root=l;
    }
    else if(p.parent.left==p)
    {
      p.parent.left=l;
    }
    else {
      p.parent.right=l;
    }
    
    l.right=p;
    p.parent=l;
  }
}
