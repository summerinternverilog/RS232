# RS232
FPGA based implementation of RS232

*Modules and their description*
  
  -BaudRateGenerator
  
    - Input:- clock, reset and baud rate
    
    - Output:- generates a high signal for the given baud rate.
   
   
   -PISO
   
    - Input:- clock, reset and data in parallel form
   
    - Output:- data in serial form
    
   -ParityDetector
    
    - Input:- clock, reset and 8-bit data
    
    - Output:- generates 1 if it is even parity or true
     
   -ParityGenerator
    
    - Input:- clcok, reset and 7-bit data
    
    - Output:- yields the 8th bit for data so as to make it a even parity data. 
