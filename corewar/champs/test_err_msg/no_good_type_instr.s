.name "zorkex"
.comment "I'M ALIIIIVE"

l2:		sti r1, %:live, %0
		and r1, %0, 7

live:	live %1
		zjmp %:live