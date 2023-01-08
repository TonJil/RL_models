


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


void deleteNode(Node *node){
	if(node == NULL){
		return;