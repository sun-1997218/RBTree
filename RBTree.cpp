

//  红黑树的节点定义

 class RBTreenode {
 private:
 
   int value;
 
  RBTreenode leftnode;  
  RBTreenode rightnode;
  RBTreenode parentnode;
 
  bool color =true;
  
  public:
         RBTreenode(){};
         ~RBTreenode(){};
         
  void leftroating(RBTreenode);
  void rightroating(RBTreenode);
  
 }
