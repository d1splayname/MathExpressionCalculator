Grammar:
<expr> -> (<expr>) |
	<term> + <term> |
	<term> - <term> |
	<term> * <term> |
	<term> \ <term> |
<term> -> const

<digit> = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0


Notes:

allowed characters: [0..9] | + | - | * | / | ( | )

Parsed and calculated bottom up, thus precedent is managed automatically

edge cases:
	3(1+2)
	(1+3)(1-3)
	div by 0
	negative vs minus
