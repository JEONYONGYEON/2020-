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
