How to compile and run the server code<br>
<br>
// Download source code<br>
1. git clone https://github.com/SLF-ICT-1/Common.git<br>
<br>
// Move the current working directory<br>
2. cd Common/RaspberryPi/Pi<br>
<br>
// Compile<br>
3. gcc -o server server.c -lpthread<br>
<br>
// Run<br>
4. ./server 9998<br>
// - server : execution file<br>
// - 9998 : Port number (9900 ~ 9999)<br>
<br>
5. Data store path<br>
cd ./data/{TODAY_DATE}<br>
cat {YOUR_ID}.txt  or vi {YOUR_ID}.txt<br>
<br>
