void mySort(int d[], unsigned int n)
{
int current =0;
int previous;
int time = 1;
	for(time; time<n; time++){
		current = d[time];
		previous = time-1;
			while (d[previous]>current && previous>=0){
				d[previous+1] = d[previous];
				previous--;
			}
			d[previous+1] = current;
			
	}
}
