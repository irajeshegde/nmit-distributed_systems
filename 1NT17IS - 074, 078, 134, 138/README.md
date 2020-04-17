# RPCGEN - DS ASSIGNMENT 1

## Submitted by:
<li>JayaaShree Laxmi K. 1NT17IS074</li>
<li>Kalpan Mukherjee 1NT17IS078</li>
<li>Rajesh Hegde 1NT17IS134</li>
<li>Rashmitha S. 1NT17IS138</li>

#### Step1  : Specify the protocol for client server communication</h4>
An interface description language (IDL) to let various platforms call the RPC. The IDL files can then be used to generate code to interface between the client and servers. So, in IDL file, we define the program structure like below. Save this IDL file with .x extension.
<br>
Refer <b>conversion.x</b> file
<br>
Now your PC is ready to execute rpc commands. The next step is to compile your IDL file using <b>rpcgen</b> command.
<br>
#### Step 2 – Develop the client program and server program
#### Step 3 - Object files
Run ```$ make -f Makefile.calculate``` to create object files and execute server first and client followed by IP as command line argument
