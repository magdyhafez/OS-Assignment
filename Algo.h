int n;
      string name[10];
  int Burst_time[10];
int Priority[10];
	string name_exe[10];
	int Burst_time_exe[10];
	int Priority_exe[10];
	int Arrival_time[10];
	int Arrival_time_exe[10];
for (int exe=0;exe<10;exe++)
{
	name_exe[i]=name[i];
Burst_time_exe[i]=Burst_time;
Priority_exe[i]=Burst_time;
if (i>0){
	        Burst_time_exe[i-1]=Burst_time_exe[i-1]
         }
		for (int i = 0; i < n; i++)
				{
					
					minimum = Priority[i];
					index = i;
					for (int j = i + 1; j < n; j++)
					{
						if (minimum > Priority_exe[j])
						{
							minimum = Priority_exe[j];
							index = j;
						}
					}
					temp_name = name_exe[i];
					temp_burst = Burst_time_exe[i];
					name_exe[i] = name[index];
					Burst_time_exe[i] = Burst_time_exe[index];
					name[index] = temp_name;
					Burst_time_exe[index] = temp_burst;
				}
				
	void display()
	{
		int startOfProcess = 0;
		int endOfProcess;
		for (int i = 0; i < n; i++)
		{
			endOfProcess = startOfProcess + Burst_time_exe[i];
			cout << endl << name_exe[i] << "\t" << "From  " << startOfProcess << "  to  " << endOfProcess << endl;
			startOfProcess = endOfProcess;
		}
	}
}