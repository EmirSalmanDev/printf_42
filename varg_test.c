#include <stdarg.h>
#include <stdio.h>

/*
| Macro      | Ne yapar               |
| ---------- | ---------------------- |
| `va_list`  | Argümanları tutan yapı |
| `va_start` | Okumaya başlar         |
| `va_arg`   | Sıradaki argümanı alır |
| `va_end`   | Temizlik yapar         |
| `va_copy`  | Listeyi kopyalar       |


stack:
+--------+
| count  |
+--------+
| arg1   |  ← va_list burayı gösterir
+--------+
| arg2   |
+--------+

*/

int	sum(int count, ...)
{
	va_list	args;
	int		total;
	int		i;

	total = 0;
	va_start(args, count); // count'tan sonrasını okumaya başla
	i = 0;
	while (i < count)
	{
		total += va_arg(args, int); // sıradaki int
		i++;
	}
	va_end(args); // BİTTİ
	return (total);
}

int	main(void)
{
	printf("%d\n", sum(4, 10, 20, 30)); // 60
}
