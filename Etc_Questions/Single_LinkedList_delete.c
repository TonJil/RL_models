


struct node{
	int value;
	node *next;
};

class Node{
	public:
		Node();

	private:
		node *head;
		void deleteNode(Node *node);
};
