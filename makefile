# List of all programs

PROGRAMS = hello my_tree my_args tasks
 
# Default rule to build all programs

all: $(PROGRAMS)
 
# Rule to build the 'hello' program

hello: hello.c

	$(CC) hello.c -o hello
 
# Rule to build 'my_tree' (Add more rules for other programs as needed)

my_tree: my_tree.c

	$(CC) my_tree.c -o my_tree
 
# Rule to build 'my_args'

my_args: my_args.c

	$(CC) my_args.c -o my_args
 

tasks: tasks.c

	$(CC) tasks.c -o tasks

# Clean rule to remove generated programs

clean:

	rm -f $(PROGRAMS)

 