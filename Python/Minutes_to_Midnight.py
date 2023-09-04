import datetime

today = datetime.datetime.now()
d = datetime.datetime(today.year, today.month, today.day, 12, 15, 45)

midhour = 24 * 60
print(midhour)
hours = d.hour
minutes = d.minute

print(hours * 60 + minutes)

minremain = midhour - (hours * 60 + minutes)

print(minremain)
