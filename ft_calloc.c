#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb == 0 || size == 0)
		nmemb = size = 1;
	if (!(memory = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(memory, nmemb * size);
	return (memory);
}
