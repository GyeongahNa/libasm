/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@Student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:09:55 by gna               #+#    #+#             */
/*   Updated: 2021/01/24 18:10:06 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	test_strlen()
{
	char	*empty = "";
	char	*helloWorld = "helloWorld";
	char	*helloWorldwithN = "helloWorld\n";

	printf("*****************strlen******************\n");
	printf("original>>\n");
	printf("strlen(empty): %lu\n", strlen(empty));
	printf("strlen(helloWorld): %lu\n", strlen(helloWorld));
	printf("strlen(helloWorld\\n): %lu\n", strlen(helloWorldwithN));
	printf("ft>>\n");
	printf("ft_strlen(empty): %zu\n", ft_strlen(empty));
	printf("ft_strlen(helloWorld): %zu\n", ft_strlen(helloWorld));
	printf("ft_strlen(helloWorld\\n): %zu\n", ft_strlen(helloWorldwithN));
	printf("\n");
}

void	test_strcmp()
{
	char	*empty = "";
	char	*empty2 = "";
	char	*helloWorld = "helloWorld";
	char	*helloWorld2 = "helloWorld";
	char	*helloWorldClanguage = "helloWorldClanguage";
	
	printf("*****************strcmp*****************\n");
	printf("original>>\n");
	printf("strcmp(empty, empty): %d\n", strcmp(empty, empty2));
	printf("strcmp(empty, helloWorld): %d\n", strcmp(empty, helloWorld));
	printf("strcmp(helloWorld, helloWorld): %d\n", strcmp(helloWorld, helloWorld2));
	printf("strcmp(helloWorld, helloWorldClanguage): %d\n", strcmp(helloWorld, helloWorldClanguage));
	printf("ft>>\n");
	printf("ft_strcmp(empty, empty): %d\n", ft_strcmp(empty, empty2));
	printf("ft_strcmp(empty, helloWorld): %d\n", ft_strcmp(empty, helloWorld));
	printf("ft_strcmp(helloWorld, helloWorld): %d\n", ft_strcmp(helloWorld, helloWorld2));
	printf("ft_strcmp(helloWorld, helloWorldClanguage): %d\n", ft_strcmp(helloWorld, helloWorldClanguage));
	printf("\n");
}

void	test_strcpy() 
{
	char	empty[50] = "";
	char	helloWorld[50] = "helloWorld";
	char	helloWorldClanguage[50] = "helloWorldClanguage";
	char	empty2[50] = "";
	char	helloWorld2[50] = "helloWorld";
	char	helloWorldClanguage2[50] = "helloWorldClanguage";

	printf("*****************strcpy*****************\n");
	printf("original>>\n");
	printf("empty: (%s)\n", empty);
	printf("helloWorld: (%s)\n", helloWorld);
	strcpy(empty, helloWorld);
	printf("empty after strcpy(empty, helloWorld): (%s)\n", empty);
	printf("helloWorld: (%s)\n", helloWorld);
	printf("helloWorldClanguage: (%s)\n", helloWorldClanguage);
	strcpy(helloWorld, helloWorldClanguage);
	printf("helloWorld after strcpy(helloWorld, helloWorldClanguage): (%s)\n", helloWorld);
	printf("\n");
	printf("ft>>\n");
	printf("empty: (%s)\n", empty2);
	printf("helloWorld: (%s)\n", helloWorld2);
	ft_strcpy(empty2, helloWorld2);
	printf("empty after ft_strcpy(empty, helloWorld): (%s)\n", empty2);
	printf("helloWorld: (%s)\n", helloWorld2);
	printf("helloWorldClanguage: (%s)\n", helloWorldClanguage2);
	ft_strcpy(helloWorld2, helloWorldClanguage2);
	printf("helloWorld after ft_strcpy(helloWorld, helloWorldClanguage): (%s)\n", helloWorld2);
	printf("\n");
}

void	test_strdup()
{
	char	empty[50] = "";
	char	helloWorld[50] = "helloWorld";
	
	printf("*****************strdup*****************\n");
	printf("original>>\n");
	printf("empty: (%s)\n", empty);
	printf("helloWorld: (%s)\n", helloWorld);
	printf("strdup(empty): (%s)\n", strdup(empty));
	printf("strdup(helloWorld): (%s)\n", strdup(helloWorld));
	printf("ft>>\n");
	printf("empty: (%s)\n", empty);
	printf("helloWorld: (%s)\n", helloWorld);
	printf("ft_strdup(empty): (%s)\n", ft_strdup(empty));
	printf("ft_strdup(helloWorld): (%s)\n", ft_strdup(helloWorld));
	printf("\n");
}

void	test_read_ok()
{
	char	buf[50];
	char	buf2[50];
	int		i;
	int		result;

	i = 0;
	while (i < 50)
	{
		buf[i] = '\0';
		buf2[i] = '\0';
		i++;
	}

	printf("*****************read_ok****************\n");
	printf("original>>\n");
	printf("read(0, buf, 50)\n");
	result = read(0, buf, 50);
	buf[result - 1] = '\0';
	printf("buf: (%s)\n", buf);
	printf("return value: %d\n", result);
	printf("ft>>\n");
	printf("ft_read(0, buf2, 50)\n");
	result = ft_read(0, buf2, 50);
	buf2[result - 1] = '\0';
	printf("buf2: (%s)\n", buf2);
	printf("return value: %d\n", result);
	printf("\n");
}

void	test_read_error()
{
	char	buf[50];
	char	buf2[50];
	int		i;
	int		result;

	i = 0;
	while (i < 50)
	{
		buf[i] = '\0';
		buf2[i] = '\0';
		i++;
	}

	printf("****************read_err***************\n");
	printf("original>>\n");
	printf("read(-1, buf, 50)\n");
	result = read(-1, buf, 50);
	buf[result - 1] = '\0';
	printf("buf: (%s)\n", buf);
	printf("return value: %d\n", result);
	printf("ft>>\n");
	printf("ft_read(-1, buf2, 50)\n");
	result = ft_read(-1, buf2, 50);
	buf2[result - 1] = '\0';
	printf("buf2: (%s)\n", buf2);
	printf("return value: %d\n", result);
	printf("\n");
}

void	test_write_ok()
{
	char	empty[50] = "";
	char	helloWorld[50] = "helloWorld";
	int		result;
	
	printf("****************write_ok****************\n");
	printf("original>>\n");
	printf("write(0, empty, 50)\n");
	result = write(0, empty, 50);
	printf("return value: %d\n", result);
	printf("write(0, helloWorld, 50)\n");
	result = write(0, helloWorld, 50);
	printf("\n");
	printf("return value: %d\n", result);
	printf("ft>>\n");
	printf("ft_write(0, empty, 50)\n");
	result = ft_write(0, empty, 50);
	printf("return value: %d\n", result);
	printf("ft_write(0, helloWorld, 50)\n");
	result = ft_write(0, helloWorld, 50);
	printf("\n");
	printf("return value: %d\n", result);
	printf("\n");
}

void	test_write_error()
{
	char	empty[50] = "";
	char	helloWorld[50] = "helloWorld";
	int		result;
	
	printf("****************write_err****************\n");
	printf("original>>\n");
	printf("write(-1, empty, 50)\n");
	result = write(-1, empty, 50);
	printf("return value: %d\n", result);
	printf("write(-1, helloWorld, 50)\n");
	result = write(-1, helloWorld, 50);
	printf("return value: %d\n", result);
	printf("ft>>\n");
	printf("ft_write(-1, empty, 50)\n");
	result = ft_write(-1, empty, 50);
	printf("return value: %d\n", result);
	printf("ft_write(-1, helloWorld, 50)\n");
	result = ft_write(-1, helloWorld, 50);
	printf("return value: %d\n", result);
	printf("\n");
}

int main() {
	test_strlen();
	test_strcmp();
	test_strcpy();
	test_strdup();
	test_read_ok();
	test_read_error();
	test_write_ok();
	test_write_error();
	return (0);
}
