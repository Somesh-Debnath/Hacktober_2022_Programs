class BinaryTree:
    def __init__(self, key=None):
        self.key = key
        self.left = None
        self.right = None
 
    def set_root(self, key):
        self.key = key
 
    def insert_left(self, new_node):
        self.left = new_node
 
    def insert_right(self, new_node):
        self.right = new_node
 
    def search(self, key):
        if self.key == key:
            return self
        if self.left is not None:
            temp =  self.left.search(key)
            if temp is not None:
                return temp
        if self.right is not None:
            temp =  self.right.search(key)
            return temp
        return None
 
    def is_bst_p(self):
        if self.left is not None:
            if self.key < self.left.key:
                return False
            elif not self.left.is_bst_p():
                return False
        if self.right is not None:
            if self.key > self.right.key:
                return False
            elif not self.right.is_bst_p():
                return False
        return True
 
 
btree = None
 
print('Menu (this assumes no duplicate keys)')
print('insert <data> at root')
print('insert <data> left of <data>')
print('insert <data> right of <data>')
print('bst')
print('quit')
 
while True:
    do = input('What would you like to do? ').split()
 
    operation = do[0].strip().lower()
    if operation == 'insert':
        data = int(do[1])
        new_node = BinaryTree(data)
        suboperation = do[2].strip().lower() 
        if suboperation == 'at':
                btree = new_node
        else:
            position = do[4].strip().lower()
            key = int(position)
            ref_node = None
            if btree is not None:
                ref_node = btree.search(key)
            if ref_node is None:
                print('No such key.')
                continue
            if suboperation == 'left':
                ref_node.insert_left(new_node)
            elif suboperation == 'right':
                ref_node.insert_right(new_node)
 
    elif operation == 'bst':
        if btree is not None:
            if btree.is_bst_p():
                print('Tree is a binary search tree.')
            else:
                print('Tree is not a binary search tree.')
        else:
            print('Tree is empty.')
 
    elif operation == 'quit':
        break
