#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>

main ( )
{
	int fd ;

	fd = dup ( 1 ) ;
	printf ( " fd = %d\n", fd );

	write ( 1, "Hello", sizeof ("Hello" ) );
	write ( fd, "-guys\n" , sizeof ( "-guys\n" ) );
	write ( 1, "-and Goodbye!\n", 14 );

	close ( 1 );
	write ( 1, "No\n", sizeof ( "No\n" ) ) ;

	write ( fd, "Yes\n", sizeof ( "Yes\n" ) ) ;
} 