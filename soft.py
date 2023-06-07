sum_time = 0
for i in range(5):
    start,end = map(str,input().split())
    start_hour = int(start[:2]); start_min = int(start[3:])
    start_time = start_hour*60 + start_min
    end_hour = int(end[:2]); end_min = int(end[3:])
    end_time = end_hour*60 + end_min
    sum_time+=end_time - start_time
print(sum_time)