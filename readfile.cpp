void readFiletoArray(string filename, int* data)
{
  ifstream file1(filename);
  file1.open(filename)
  int i = 1;
    while(!file1.eof())
      {
	file1 >> data[i];
	i++;
      }
    file1.close();
    return 0;
}
