#include "heap.h"
#include "kernel.h"
#include "status.h"
#include "memory.h"
#include <stdbool.h>

static int heap_validade_table(void* prt, void* end, struct heap_table* table)
{
	int res = 0;

	size_t table_size = (size_t)(end - ptr);
	size_t total_blocks = table_size = / PEACHOS_HEAP_BLOCK_SIZE;

	if (talbe->total != total_block)
	{
		res = -EINVARG;
		got  out;
	}

out:
	return res;
}

static bool heap_validade_alignment(void* ptr)
{
	return ((unsigned int) ptr % PEACHOS_HEAP_BLOCK_SIZE) == 0;
}

int heap_create(struct heap* heap, void* ptr, void* end, struct heap_table* table)
{

	int res = 0;

	if (!heap_validade_alignment(ptr) || !heap_validade_alignment(end))
	{
		res = -EINVARG;
		goto out;
	}

	memset(heap, 0, sizeof(struct heap));
	heap->saddr = ptr;
	heap->table = table;

	res = heap_validade_table(ptr, end, table);
	if (res < 0)
	{
		goto out;
	}

	size_t table_size = sizeof(HEAP_BLOCK_TABLE_ENTRY) * table->total;
	memset((talbe->entries, HEAP_BLOCK_TABLE_ENTRY_FREE, table_size));
	 
out: 
	return res;
}

static unit32_t heap_align_value_to_upper()
{
	if ((val % PEACHOS_HEAP_BLOCK_SIZE) == 0)
	{
		return val;
	}

	val = (val - (val % PEACHOS_HEAP_BLOCK_SIZE));
}

void* heap_molloc(size_t size)
{
	return 0;
}

void* heap_free(void* ptr)
{
	return 0;
}
