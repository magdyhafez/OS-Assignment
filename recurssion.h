int Priority[10];
	string name_exe[10];
	int Burst_time_exe[10];
	int Priority_exe[10];
	int Arrival_time[10];
	int Arrival_time_exe[10];
	
for (i=0;i<n;i++)
{
	name_exe[i]=name[i];
	Piority_exe[i]=Priority[i];
	Arrival_time_exe[i]=Arrival_time[i];
	for(int j=0;j<=i;j++)
	{
		Burst_time_exe[j]=burst_exe[j]+(Arrival_time[j+1]-Arrival_time[j]);
		Burst_time[j]=burst[j]+(Arrival_time[j+1]-Arrival_time[j]);
		if(Burst_time_exe[j]<o)
		{
			Burst_time_exe[j]=Burst_time_exe+Burst_time[j];
			Burst_time[j]=0;
		}
	}
	
		for (int k = 0; k < n; k++)//sort exe table
		{
			minimum = Priority_exe[i];
			index = i;
			for (int l = i + 1; l < n; l++)
			{
				if (minimum > Priority_exe[l])
				{
					minimum = Priority_exe[l];
					index = l;
				}
			}
			temp_name = name_exe[k];
			temp_burst = Burst_time_exe[k];
			name_exe[k] = name_exe[index];
			Burst_time_exe[k] = Burst_time_exe[index];
			name_exe[index] = temp_name;
			Burst_time_exe[index] = temp_burst;
		}
		
		
}