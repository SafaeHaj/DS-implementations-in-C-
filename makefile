#-*- MakeFile -*-

## compiler options
CC = gcc
CFLAGS = -I includes 

## paths
vpath %.c srcs/linked_lists: srcs/queues : srcs/stacks: srcs/stacks_queues_uses : srcs/maps_hashtables
vpath %.h includes
vpath %.o obj

## object files

OBJECTS :=  $(addprefix bin/, linkedlists.o sort_reverseLL.o doublylinkedlists.o \
			 queues.o queuesLL.o stacks.o stacksLL.o)

USES := $(addprefix bin/uses/, stack_sorting.o string_reversal.o \
		 postfix_expression_evaluation.o)

all : $(OBJECTS) $(USES)

bin/%.o: %.c %.h
		$(CC) -c $< -o $@ $(CFLAGS)

bin/uses/%.o : %.c stacks.h
			$(CC) -c $< -o $@ $(CFLAGS)

#$(CC) -o $@ $^ $(CFLAGS)

##############################################################################

.PHONY: clean

clean :
	rm -rf bin/*.o bin/uses/*.o bin/*.exe