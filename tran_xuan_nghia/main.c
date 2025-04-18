#include <stdio.h>
#include <malloc.h>

typedef struct
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;

linked_list_t ll;
// Câu 3: Thêm một node vào cuối linked_list
void add(linked_list_t* list, int value)
{
	node_t* new_node = malloc(sizeof(node_t));
	new_node->value = value;
	new_node->previous_node = list->last_node;
	list->last_node = new_node;
	list->len++;
}
// Câu 4: Chèn môt node vào list
void Insert(linked_list_t* list, int value, int index)
{
	if (index == list->len)
		add(&ll, 10);
	else
	{
		//tạo node mới
		node_t* new_node = (node_t*)malloc(sizeof(node_t));
		new_node->value = value;

		node_t* current = list->last_node;
		for (int i = list->len - 1; i > index; i--)
		{
			current = (node_t*)current->previous_node;
		}

		// Cập nhật liên kết node
		new_node->previous_node = current->previous_node;
		current->previous_node = new_node;
	}
    list->len++;
}

void main()
{
	add(&ll, 1);
	add(&ll, 2);
	add(&ll, 3);
	add(&ll, 4);
    add(&ll, 5);
    Insert(&ll, 6, 3);

}