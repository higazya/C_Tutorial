/*
 ============================================================================
 Name        : Lab17.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Functions"
 
 ========================================================
 This program demonstrate a modem simulation to practice using structure
  
Fixed command is sent
you have three choices as a reciever
A to reply command OK
B to reply command NOT OK
C to issue a time out response
 ============================================================================
*/
#include <stdio.h>
#include <string.h>
#include <time.h>
 
/* function declaration */
#define MODEM_TX_BUFFER_SIZE 10
#define MODEM_RX_BUFFER_SIZE 50 

#define MODEM_ON    1
#define MODEM_OFF   0


struct ModemStruct
{
    unsigned char RxBuffer[MODEM_RX_BUFFER_SIZE];        //receive from modem data
    unsigned char TxBuffer[MODEM_TX_BUFFER_SIZE];        //transmit to modem
    unsigned char Index;
    volatile unsigned char TimeOutFlag;
    unsigned char CommandSuccessful;            //command in progress
    unsigned char ModemState;                  //modmem status during normal condition
};
const char GetSimNumberCmd[]="AT+CIMI"; //AT Command

void modemlog(void); 
struct ModemStruct simcom340;
int main()
{

	
	char rex;
	unsigned char Onoff;
    long startT = time(NULL);
 //stuff

   //struct ModemStruct simcom340;

   simcom340.ModemState = MODEM_ON;
   
   // Fill modem buffer with the AT command from the MCU side
   strcpy((char*)simcom340.TxBuffer, GetSimNumberCmd);
        
    // Display the AT Command from the microcontroller side
    for(simcom340.Index=0; simcom340.Index<MODEM_TX_BUFFER_SIZE; simcom340.Index++)
    {
     	  printf("%c",simcom340.TxBuffer[simcom340.Index]);   
    }
    printf("\n");  

	if(simcom340.ModemState == MODEM_ON)
	{
		
		scanf("%c",&rex);
		switch(rex)
		{
			case 'A':
			strcpy((char*)simcom340.RxBuffer , "RESPONSE ID: 1254 OK");
			printf("OK\n"); 
			simcom340.CommandSuccessful = 1;
			break;
			case 'B':
			strcpy((char*)simcom340.RxBuffer , "RESPONSE ID: 8962 NOT OK");
			printf("NOT OK\n"); 
			//TODO succ
			break;
			
			case 'C':
			 _sleep(5000);
			strcpy((char*)simcom340.RxBuffer , "TIME OUT RESPONSE");
			//TODO succ
			 //TODO Timeout

			break;
			
			default:
			printf("UNDEFINED RESPONSE\n");
			//TODO rx buffer, succ, index init
			//flush all modem struct
			break;
			
		}
	}
	else
	{
		printf("MODEM IS OFF PLZ TURN IT ON...\n");
		//flush all modem struct
	}	

  modemlog(); 
  long finalTime = time(NULL) - startT;
  printf("Modem full processing time:%ds\n",finalTime);
  
   return 0;
}

void modemlog(void)
{
	time_t rawtime;
	time(&rawtime);
	printf("WAIT 3 SECONDS TO LOG INTO SIMCOM MODEM .....QUALCOM INC.\n");
	printf("Firmware Version: 1.00\n");  
	printf(".\n");
	_sleep(1000);
	_sleep(1000);
	printf("..\n");
	_sleep(1000);
	printf("...\n"); 
	_sleep(1000);
	printf("-------------------------------------------------------------------------\n"); 
	printf("-----------------------------GSM MODEM Simulator VER 1.0-----------------\n"); 
	printf("-------------------------------------------------------------------------\n"); 
	printf("-----------------------------Modem Internal State------------------------\n"); 	
 	printf("MODEM TX: %s\n",simcom340.TxBuffer); 	
 	printf("MODEM RX: %s\n",simcom340.RxBuffer);
    printf("MODEM cmd success:%d\n",simcom340.CommandSuccessful);
	printf("MODEM state: %d\n",simcom340.ModemState);
	printf("MODEM buffer index: %d\n",simcom340.Index);	
	_sleep(2000);
	printf("MODEM LOG TIME: %s",ctime(&rawtime));
	printf("-------------------------------------------------------------------------\a\n"); 
}
