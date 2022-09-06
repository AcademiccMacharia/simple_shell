#include "main.h"

char *c_strdup(char *str, int cs)
{
	char *duplicate_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	len++;

	duplicate_str = malloc(sizeof(char) * (len - cs));
	if (duplicate_str == NULL)
		return (NULL);

	i = 0;
	while (i < (len - cs))
	{
		*(duplicate_str + i) = *(str + cs + i);
		i++;
	}
	return (duplicate_str);
}
char *get_env(char *str, list_t *env)
{
	int j = 0, cs = 0;

	while (env != NULL)
	{
		j = 0;
		while ((env->var)[j] == str[j]) /* find desired env variable */
			j++;
		if (str[j] == '\0' && (env->var)[j] == '=')
			break;
		env = env->next;
	}

	while (str[cs] != '\0') /* find how many bytes in env variable title */
		cs++;
	cs++; /*counts 1 more for = sign*/
	return (c_strdup(env->var, cs));
}
