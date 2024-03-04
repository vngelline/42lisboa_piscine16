

int main(void) 
{  char ch;
  for(ch = 'a'; ch <= 'z'; ch++)
  {
    write(1, &ch, 1)
  }
}
