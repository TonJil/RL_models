


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
		void addNode(int value, node *p);
};


void tree::addNode(int value, node *p){
	
	if(p == NULL){
	