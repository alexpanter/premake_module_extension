#include <stdlib.h>
#include "module_unit.h"


void module_unit_init(module_unit_t* info)
{
	info->module_name = NULL;
}

void module_unit_free(module_unit_t* info)
{
	if (info->module_name != NULL) free(info->module_name);

	info->module_name = NULL;
}


void print_dependencies(module_unit_t* info)
{

}


const char* get_module_type_string(module_type_t mt)
{
	switch (mt)
	{
	case MODULE_TYPE_NONE:      return "MODULE_TYPE_NONE";
	case MODULE_TYPE_INVALID:   return "MODULE_TYPE_INVALID";
	case MODULE_TYPE_MODULE:    return "MODULE_TYPE_MODULE";
	case MODULE_TYPE_PARTITION: return "MODULE_TYPE_PARTITION";
	default:
		return "Invalid module_type\n";
	}
}
