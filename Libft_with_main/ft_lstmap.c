/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:        <                    >              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:44:05 by                   #+#    #+#             */
/*   Updated: 2020/08/15 10:01:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 'lst'를 반복하며 각 노드의 'content'멤버에 함수 'f' 적용하는 함수
// 필요할 경우 'del'함수를 사용해서 노드의 'content'삭제

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_head; // 새로만들 리스트의 머리노드 주소
	t_list *tmp;
	t_list *curr;

	if (lst == NULL || (new_head = ft_lstnew(f(lst->content))) == NULL)
		return (NULL); // 'new_head'에 노드를 생성하고 'lst'의 content멤버에 'f'적용 후 저장
	// 'lst'가 없거나 'new_head'의 할당에 실패할 경우 NULL리턴
	curr = new_head; // 임시 노드에 new_head 주소저장
	tmp = lst->next; // 템프에 lst의 다음 노드 주소저장
	while (tmp) // 템프의 주소가 NULL이 아닐 경우 반복
	{
		if ((curr->next = ft_lstnew(f(tmp->content))) == NULL)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		curr = curr->next; // 'curr'에 다음 노드주소 저장
		tmp = tmp->next; // 'tmp'에 다음 노드주소 저장
	}
	return (new_head); // f적용된 새 리스트 리턴
}
