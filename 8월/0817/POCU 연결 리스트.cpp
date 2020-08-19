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

/* �����ϱ� �� */

void insert_front(node_t** phead, int n)
{
	node_t* new_node;
	
	new_node = malloc(sizeof(node_t));
	new_node->value = n;
	
	new_node->next = *phead;
	*phead = new_node;	
}

node_t* head = NULL;

insert_front(&head, 3);
insert_front(&head, 5);
insert_front(&head, 2);
insert_front(&head, 0);

destroy(head);
head = NULL;

/* ������������ �����ϱ� �� */

void insert_sorted(node_t** phead, int n)
{
	node_t** pp;
	node_t* new_node;
	
	new_node = malloc(sizeof(node_t));
	new_node->value = n;
	
	pp = phead;
	while(*pp != NULL){
		if((*pp)->value >= n){
			break;
		}
		
		pp = &(*pp)->next;
	}
	
	new_node->next = *pp;
	*pp = new_node;
}

int main(void)
{
	node_t* head = NULL;
	
	insert_sorted(&head, 3);
	insert_sorted(&head, 5);
	insert_sorted(&head, 2);
	insert_sorted(&head, 0);
	
	destroy(head);
	head = NULL;
}

/* ��� ���� */
void remove(node_t** phead, int n)
{
	node_t** pp;
	
	pp = phead;
	while (*pp != NULL) {
		if((*pp)->value == n){
			node_t* tmp = *pp;
			*pp = (*pp)->next;
			free(tmp);
			break;
		}
		
		pp = &(*pp)->next;
	}
}

int main(void)
{
	node_t* head = NULL;
	
	/* ����Ʈ ���� : 2 -> 3 -> 5 */
	
	remove(&head, 2); 
	remove(&head, 5);
	
	destroy(head);
	head = NULL;
}
