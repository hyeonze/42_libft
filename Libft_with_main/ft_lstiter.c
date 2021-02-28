/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunze <hyunze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:40:48 by hann              #+#    #+#             */
/*   Updated: 2020/08/12 18:25:25 by hyunze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 리스트 반복하며 특정함수 적용시키는 함수

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ; // 리스트나 함수가 없을 경우 리턴
	while (lst) // 노드 존재할 때까지 반복
	{
		f(lst->content); // 'lst'의 'content'멤버에 함수 적용
		lst = lst->next; // 'lst'가 다음 노드 가리키도록
	}
}
