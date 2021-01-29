// selection sort function module in C
void selectionSort(int data[], int length)
{
int i, j, m, mi;
for (i = 0; i < length - 1; i++)
{
/* find the minimum */
mi = i;
for (j = i+1; j < length; j++)
{
if (data[j] < data[mi]) { mi = j; }
}
m = data[i];
data[i] = data[mi];
data[mi] = m;
}
}