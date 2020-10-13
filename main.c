#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "libasm.h"

int	main(void)
{
	char *src;
	char *dest;
	char *ret;
	// int  fd;
	// int  ret_read;
	// int ret_ft_read;

	src = "simon";
	dest = malloc(19);
	// memcpy(src, "hello world", 12);
	// memcpy(dest, "bonan tagon mondo", 18);

	// printf("\n-- ft_strlen --\n");
	// printf("\"test\" : %ld\n", ft_strlen("test"));
	// printf("\"testqsfndkjq\" : %ld\n", ft_strlen("testqsfndkjq"));
	// printf("\"dfvsxwvwestqsfndkjq\" : %ld\n", ft_strlen("dfvsxwvwestqsfndkjq"));

	// printf("\n-- ft_strcpy --\n");
	// printf("before :\n\tsrc : %s, dest : %s\n", src, dest);
	// ret = ft_strcpy(dest, src);
	// printf("after :\n\tsrc : %s, dest : %s\nret : %s\n", src, dest, ret);

	// printf("\n-- ft_strcmp --\n");
	// printf("ret : %d\n",strcmp("aaa","aba"));
	// printf("ret : %d\n",strcmp("aa","aca"));
	// printf("ret : %d\n",strcmp("aaa","aaaa"));
	// printf("ret : %d\n",strcmp("aba","aaa"));
	// printf("ret 5: %d\n\n",strcmp("aca","aaa"));

	// printf("ret : %d\n",ft_strcmp("aaa","aba"));
	// printf("ret : %d\n",ft_strcmp("aaa","aca"));
	// printf("ret : %d\n",ft_strcmp("aaa","aaaa"));
	// printf("ret : %d\n",ft_strcmp("aba","aaa"));
	// printf("ret 5: %d\n\n",ft_strcmp("aca","aaa"));

	// char *ms1 = "hello";
	// char *ms2 = "wello";

	// dest = "hcello";
	// src = "haello";
	// dest[0] = 'w';
	// printf("ret : %d\n", ft_strcmp(src, dest));
	// printf("org : %d\n", strcmp(src, dest));

	// printf("ret : %d\n", ft_strcmp("hello", "hello"));
	// printf("org : %d\n", strcmp("hello", "hello"));

	// printf("ret : %d\n", ft_strcmp("helfo", "hello"));
	// printf("org : %d\n", strcmp("helfo", "hello"));

	// printf("ret : %d\n", ft_strcmp("hello", "helfo"));
	// printf("org : %d\n", strcmp("hello", "helfo"));

	// printf("ret : %d\n", ft_strcmp("hell", "hello"));
	// printf("org : %d\n", strcmp("hell", "hello"));

	// printf("ret : %d\n", ft_strcmp("hello", "hell"));
	// printf("org : %d\n", strcmp("hello", "hell"));

	printf("\n-- ft_write --\n");
	errno = 0;
	printf("write : %ld", write(1, "hello!\n", 7));
	printf(", errno : %d\n", errno);
	errno = 0;
	printf("ft_write : %ld", ft_write(1, "hello!\n", 7));
	printf(", errno : %d\n", errno);

	// printf("\n-- ft_read --\n");
	// fd = open("./Makefile", O_RDONLY);
	// errno = 0;
	// ret_read = read(fd, src, 18);
	// close(fd);
	// printf("read : %s, ret : %d, errno : %d\n", src, ret_read, errno);
	// fd = open("./Makefile", O_RDONLY);
	// errno = 0;
	// ret_ft_read = ft_read(fd, dest, 18);
	// close(fd);
	// printf("ft_read : %s, ret : %d, errno : %d\n", dest, ret_ft_read, errno);
	// fd = open("./Makefileqsdf", O_RDONLY);
	// errno = 0;
	// ret_read = read(fd, src, 18);
	// close(fd);
	// printf("read : %s, ret : %d, errno : %d\n", src, ret_read, errno);
	// fd = open("./Makefileqsdf", O_RDONLY);
	// errno = 0;
	// ret_ft_read = ft_read(fd, dest, 18);
	// close(fd);
	// printf("ft_read : %s, ret : %d, errno : %d\n", dest, ret_ft_read, errno);

	// printf("\n-- ft_strdup --\n");
	// errno = 0;
	// char *duplicated_str = ft_strdup("hello world");
	// if (duplicated_str)
	// 	printf("%p : %s, errno : %d\n", duplicated_str, duplicated_str, errno);
	// else
	// 	printf("%p, errno : %d\n", duplicated_str, errno);
    return 0;
}