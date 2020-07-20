from pytube import YouTube


def Download(url):
    myVideo = YouTube(url)
    print("The title is :" + myVideo.title)
    print("the available streams:")
    print(myVideo.streams.all())
    myStream = YouTube(url).streams.first()
    choice = input("do you wanna download[y/n]")
    if choice == 'y':
        myStream.download("/home/ananthan2k/Videos")


def main():
    url = input("Insert the url of the YT video")
    Download(url)
    
if __name__ == "__main__":
    main()