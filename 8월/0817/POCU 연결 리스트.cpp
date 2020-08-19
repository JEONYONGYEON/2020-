/* 연결 리스트 */

/* 전체 출력 */
typedef struct node {
	int value;
	node_t* next;
} node_t;

void print_node(const node_t* head)
{
	node_t* p;
	
	p = head;
	while(p != NULL){
		/* 여기서 출력 */
		p = p->next;
	}
}

/* 노드 메모리 해제 */ 
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

/* 하고 싶은 것을 합니다 */

destroy(head);
head = NULL; 

/* 삽입하기 예 */

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

/* 오름차순으로 삽입하기 예 */

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

/* 노드 삭제 */
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
	
	/* 리스트 순서 : 2 -> 3 -> 5 */
	
	remove(&head, 2); 
	remove(&head, 5);
	
	destroy(head);
	head = NULL;
}
