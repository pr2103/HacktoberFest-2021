# Python program to demonstrate insert operation in binary search tree A utility class that represents an individual node in a BST
class Node:
	def __init__(self, key):
		self.left = None
		self.right = None
		self.val = key
# A utility function to insert a new node with the given key
def insert(root, key):
	if root is None:
		return Node(key)
	else:
		if root.val == key:
			return root
		elif root.val < key:
			root.right = insert(root.right, key)
		else:
			root.left = insert(root.left, key)
	return root
# A utility function to do inorder tree traversal
def inorder(root):
	if root:
		inorder(root.left)
		print(root.val)
		inorder(root.right)
# Insert the element in the Tree
n = Node(10)
n = insert(n, 20)
n = insert(n, 30)
n = insert(n, 40)
n = insert(n, 50)
n = insert(n, 60)
n = insert(n, 70)

# Print inoder traversal of the BST
print("Inorder traversal of the BST is - ")
inorder(n)