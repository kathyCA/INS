BEGIN{
c=0;
}
{
if($1=="d")
c++;
}
END{
printf("the total no of packets dropped are: %d\n",c);
}
