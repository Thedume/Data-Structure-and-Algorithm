#include <stdio.h>

// 링크드 리스트의 노드 표현
typedef int ElementType; // int 로 선언 했지만, 나중에 작성할 데이터의 자료형에 따라 변환 가능

typedef struct tagNode {
	ElementType Data;
	struct Node* NextNode;
} Node;

// 노드 생성
Node* SLL_CreateNode(ElementType NewData) // SLL : simply linked list
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;	// 데이터를 저장한다.
	NewNode->NextNode = NULL;	// 다음 노드에 대한 포인터는 NULL로 초기화한다.

	return NewNode;
}

// 노드 소멸
void SLL_DestroyNode(Node* _Node) {
	free(_Node);
}

// 노드 추가 연산
void SLL_AppendNode(Node** Head, Node* NewNode)
{
	// 헤드 노드가 NULL이라면 새로운 노드가 Head가 된다.
	if ((*Head) == NULL)
		*Head = NewNode;
	else {
		// 테일을 찾아 NewNode를 연결한다.
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
			Tail = Tail->NextNode;

		Tail->NextNode = NewNode;
	}
}

int main() {
	// Vitamin QUIZ 1-1
	// printf("sizeof(Node): %d, sizeof(Node*): %d.\n", sizeof(Node), sizeof(Node*));


	return 0;
}