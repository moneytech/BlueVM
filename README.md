## todo
- [x] bv_variable_equal, bv_variable_greater_than, bv_variable_cast, bv_variable_operator_add, etc.. + object operators
- [ ] new_array [dim] -> push array on stack
- [ ] more control over arrays - pushing arrays on stack, copying, global arrays, etc...
- [ ] change order of subtract, add, etc operations... (for example, subtract var2 - var1, not var1-var2)
- [ ] typedef bv_stack bv_vector;
- [ ] use bv_name_list to store function names
- [ ] fix all warnings
- [x] better casting
- [ ] fix bv_stack_pop in opcode calls (remove bv_variable_copy(bv_stack_top()) or put bv_stack_pop on proper lines)
- [ ] better var copying (for example, copying bv_array will copy pointer address not data)
- [ ] #2 external bv_object & external bv_object methods
- [ ] #2 make private_property and static_property last 2 bits in bv_type ===> 0bSPXXXXXX S-> static, P-> private, X-> any
- [ ] #2 remove types from argument list
- [ ] #2 cast when using malloc
- [ ] #2 pack external_* in seperate struct
- [ ] #2 remove some appereances of char* and int
- [ ] #2 object cast overload

speed up bv_stack_push and bv_stack_delete (which take 50% of processing time)
- [ ] #2 try linear_function_stack when calling functions in BlueVM (instead of using recursion with bv_program_call)
and/or
- [ ] #2 bv_memory

more speed:
- [ ] #2 implement string look up table

to gain more speed:
- [ ] #2 pointers (for example, local0 pointing to object on stack so when that object changes the value of local0 also changes - removes the need for pushing object on stack after modifying it)
BVM will push object on stack after modifying it with function which causes bugs... int x = Animal().status() will cause bugs unless we first pop the value from stack