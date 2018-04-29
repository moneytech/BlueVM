#pragma once
#include <BlueVM/types.h>

typedef struct bv_name_list {
	u16 name_count; // number of global variables with names
	bv_string* names;	// name for a global variable
} bv_name_list;

bv_name_list bv_name_list_create(byte** mem);
bv_name_list bv_name_list_create_empty();
u16 bv_name_list_get_id(bv_name_list nlist, const bv_string name);
void bv_name_list_add(bv_name_list* nlist, const bv_string name);
void bv_name_list_delete(bv_name_list* nlist);