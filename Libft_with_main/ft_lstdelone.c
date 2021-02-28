/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunze <hyunze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:10:52 by hann              #+#    #+#             */
/*   Updated: 2020/08/12 18:07:59 by hyunze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 노드 제거하고 free해주는 함수
// lst->next는 제거하지 말고 차후 연결해주는 방식
// content를 먼저 삭제 후 메모리 해제

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ; // lst가 존재하지 않을 경우 리턴
	del(lst->content); // lst의 content멤버 제거
	free(lst); // lst의 메모리 해제
}
