int _strlen(char *s)
{
    int lenght;
    lenght = 0;
    while  ( *(s + lenght) != '\n')
    {

        lenght++;
    
    }
  
    return lenght;
    
    
}
