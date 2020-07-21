


struct node{
	int value;
	node *leftNode;
	node *rightNode;
};

class tree{
	public:
		tree();

	private:
		node *root;