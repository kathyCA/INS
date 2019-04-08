BEGIN {
 tcp=0;
 udp=0;
}
{
if ($1=="+" ||$3=="0" || $4=="2" || $5=="tcp")
 tcp++;
if ($1=="+" ||$3=="1" || $4=="2" || $5=="cbr")
 udp++;
}
END {
printf("the packet sent by tcp:%d\n",tcp);
printf("the packet sent by udp:%d\n",udp);
}
