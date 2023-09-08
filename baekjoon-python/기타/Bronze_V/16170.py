import datetime

dt_utc = datetime.datetime.utcnow()
date = dt_utc.strftime('%Y\n%m\n%d')

print(date)