#-*- MakeFile -*-

## compiler options
CC = gcc
CFLAGS = -I includes 

## paths
vpath %.c srcs/linked_lists: srcs/queues : srcs/stacks: srcs/stacks_queues_uses
vpath %.h includes
vpath %.o obj

## object files

OBJECTS :=  $(addprefix bin/, linkedlists.o sort_reverseLL.o doublylinkedlists.o \
			 queues.o queuesLL.o stacks.o stacksLL.o)

uses := $(addprefix bin/,stack_sorting.o string_reversal.o \
		 postfix_expression_evaluation.o)

all : $(OBJECTS) $(uses)
	$(CC) -c $< -o $@ $(CFLAGS)

bin/%.o: for s in $(OBJECTS); do \
 					%.c %.h
			$(CC) -c $< -o $@ $(CFLAGS)
		done

$(uses) : stacks.h
		$(CC) -c $< -o $@ $(CFLAGS)

#$(CC) -o $@ $^ $(CFLAGS)

##############################################################################

.PHONY: clean

clean :
	rm -rf bin/*.o bin/*.exe