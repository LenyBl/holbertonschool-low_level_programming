#ifndef CALC_H
#define CALC_H
/**
 * struct op - Structure operateur
 *
 * @op: L'operateur
 * @f: La fonction associee
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /* CALC_H */
