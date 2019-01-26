|Operator   |	Description                                         |	Associativity|
|-----------|-------------------------------------------------------|----------------|
| ` ()     `  |	Parentheses (function call)                         |	left-to-right
| ` []     `  |	Brackets (array subscript) 	
| ` .      `  |Member selection via object name 	
| ` ->     `  |	Member selection via pointer 	
| ` ++/–   `  |	Postfix increment/decrement 	
| ` ++/–   `  |	Prefix increment/decrement                          |	right-to-left
| ` +/-    `  |	Unary plus/minus 	
| ` !~     `  |	Logical negation/bitwise complement 	
| ` (type) `  |	Cast (convert value to temporary value of type) 	
| ` * 	    ` |   Dereference 	
| ` &      `  |   Address (of operand) 	
| ` sizeof `  |	Determine size in bytes on this implementation 	
| ` *,/,%  `  |	Multiplication/division/modulus                     |	left-to-right
| ` +/-    `  |	Addition/subtraction 	                            |   left-to-right
| ` <> 	   `  |   Bitwise shift left, Bitwise shift right             |	left-to-right
| ` < , <= `  |	Relational less than/less than or equal to          |	left-to-right
| ` > , >= `  |	Relational greater than/greater than or equal to    |	left-to-right
| ` == , !=`  |	Relational is equal to/is not equal to 	            |   left-to-right
| ` & 	    ` |   Bitwise AND 	                                    |   left-to-right
| ` ^      `  |	Bitwise exclusive OR                                |	left-to-right
| ` |      `  |	Bitwise inclusive OR                                |	left-to-right
| ` &&     `  |	Logical AND                                         |	left-to-right
| ` ||     `  |	Logical OR                                          |	left-to-right
| ` ?:     `  |	Ternary conditional                                 |	right-to-left
| ` = 	    ` |   Assignment 	                                        |   right-to-left
| ` += , -=`  |	Addition/subtraction assignment 	
| ` *= , /=`  |	Multiplication/division assignment 	
| ` %= , &=`  |	Modulus/bitwise AND assignment 	
|  `^= ,|=`   |	Bitwise exclusive/inclusive OR assignment 	
| ` <>= `     |	Bitwise shift left/right assignment 	
| ` ,  `      |	expression separator                                |	left-to-right