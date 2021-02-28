/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunze <hyunze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:51:41 by hann              #+#    #+#             */
/*   Updated: 2020/08/12 18:20:12 by hyunze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 리스트 전체 노드 데이터 삭제하는 함수

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr; // 제거할 노드의 위치를 가리키는 포인터
	t_list *next; // 임시노드의 다음노드를 가리키는 포인터

	curr = *lst; // 'curr'이 첫 노드를 가리키도록
	while (curr)
	{
		next = curr->next; // 'next'에 'curr'의 다음 노드 주소 저장
		ft_lstdelone(curr, del); // 'curr'의 노드 제거 후 해제
		curr = next; // 'curr'이 next를 가리키도록
	}
	*lst = NULL; // 연결리스트에 빈 리스트 저장
}