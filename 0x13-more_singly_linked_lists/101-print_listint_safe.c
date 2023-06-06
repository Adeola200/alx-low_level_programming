#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * In a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t check.
 *
 * Return: if the list is not looped - 0
 * Otherwise - the number of the unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if(head == NULL || head->next == NULL)
		return (0);
