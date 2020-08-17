/* ���� ����Ʈ */

/* ��ü ��� */
typedef struct node {
	int value;
	node_t* next;
} node_t;

void print_node(const node_t* head)
{
	node_t* p;
	
	p = head;
	while(p != NULL){
		/* ���⼭ ��� */
		p = p->next;
	}
}

/* ��� �޸� ���� */ 
void destroy(node_t* head)
{
	node_t* p = head;
	
	while(p != NULL){
		node_t* next = p->next;
		free(p);
		p = next;
	}
}

node_t* head = NULL;

/* �ϰ� ���� ���� �մϴ� */

destroy(head);
head = NULL; 
