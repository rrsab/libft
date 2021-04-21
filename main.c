/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salyce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:56:56 by salyce            #+#    #+#             */
/*   Updated: 2021/02/14 21:58:58 by salyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//void ft_putchar(char c);
//void ft_swap(int *a, int *b);
//void ft_putstr(char *str);
//int ft_strlen(char *str);
//int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *a;
	char *b;
	int i;

	i = 0;
	a = "12as";
	b = "12as1";
	ft_putstr("Hello World!");
	i = ft_strcmp(a, b);
	printf("%d\n", i);
}
