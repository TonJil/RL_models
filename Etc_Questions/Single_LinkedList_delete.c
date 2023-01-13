


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
	}
	
	if(node == head){   
       head = head->next;
	}else{
		node * temp = head;
		while(temp->next != node){
			temp = temp->next;
		}

		temp->next = node->next;
	}

	delete node;
}