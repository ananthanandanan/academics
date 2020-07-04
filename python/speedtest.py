import speedtest 

test = speedtest.Speedtest()
download = test.download()
upload = test.upload()

print(f"Download Speed : {download}\n Upload Speed : {upload}")