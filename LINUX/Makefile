#################
##  VARIABLES  ##
#################

#	Sources

SRCS =	$(SRCSDIR)/ft_strlen.s $(SRCSDIR)/ft_strcpy.s $(SRCSDIR)/ft_strcpy.s \
$(SRCSDIR)/ft_strcmp.s $(SRCSDIR)/ft_write.s $(SRCSDIR)/ft_strdup.s \
$(SRCSDIR)/ft_read.s

SRCSDIR = ./srcs

#	Objects

OBJS = $(SRCS:.s=.o)


#	Headers

HEADER =	libasm.h
HEADERDIR = .

#	Name

NAME =	libasm.a


#	Compiler

CC = gcc
AS = nasm

#	Flags

ASFLAGS = -f elf64 -D__LINUX__=1
CFLAGS =


###############
##  TARGETS  ##
###############

all:	$(NAME) Art

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "libasm compiled succesfully"

test: fclean all
	${CC} main.c libasm.a -o test

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f test

re: fclean all

.PHONY: all clean fclean re

Art:
	@echo ""
	@echo " _       _________ ______   _______  _______  _______ "
	@echo "( \      \__   __/(  ___ \ (  ___  )(  ____ \(       )"
	@echo "| (         ) (   | (   ) )| (   ) || (    \/| () () |"
	@echo "| |         | |   | (__/ / | (___) || (_____ | || || |"
	@echo "| |         | |   |  __ (  |  ___  |(_____  )| |(_)| |"
	@echo "| |         | |   | (  \ \ | (   ) |      ) || |   | |"
	@echo "| (____/\___) (___| )___) )| )   ( |/\____) || )   ( |"
	@echo "(_______/\_______/|/ \___/ |/     \|\_______)|/     \|"
	@echo ""
	@echo "This assembly library is ready to survive your tester"