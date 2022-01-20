#include <stdio.h>
#include <stdint.h>
#include <string.h>

char* Func( char* Text )
{
	char *TempBuffer;
	
	uint8_t flag;

	uint8_t textLength;	
	
	textLength = strlen( Text );
	
	do{

			flag = 0;
	   TempBuffer = Text;
		do{
						TempBuffer++;
						
			if( *TempBuffer == *Text)
			{
			flag = 1;
			}	

		}while( *TempBuffer != '\0');
		
		 if(flag == 0) 
		 {
		 	 *Text = '-';	
	
		 }
		 
			Text++;
	}while( *Text != '\0');

	Text -=textLength;
	return Text;

}

int main()
{
	char ucTxBuff[ 30 ] = "SSERJAJAJABAGHSAGGHHMAKKTKHL";
	
	char* ucRxBuff;
	
	printf("  Transmited Buffer  -> %s\n",ucTxBuff);
	
	ucRxBuff = Func( ucTxBuff );
	
	printf("  Returned Buffer    -> %s\n",ucRxBuff);
	
	return 0;
}
