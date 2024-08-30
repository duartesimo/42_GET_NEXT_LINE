#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 100
# endif

int		ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *line, char *buff);
char	*raw_line(int fd, char *line);
char	*trimmed_line(char *line);
char	*new_line(char *line);
char	*get_next_line(int fd);

#endif
