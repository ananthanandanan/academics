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
    
"""
https://r2---sn-gwpa-h55e.googlevideo.com/videoplayback?expire=1600634072&ei=eGhnX-fsDM3Kpge70qWwBg&ip=2405%3A201%3Af003%3Ab837%3A4c23%3A26c1%3Aeebb%3A9762&id=o-AFhSYygCzv9INTCFesbd52xkXnvi9y5ohbvZ74xU27up&itag=137&aitags=133%2C134%2C135%2C136%2C137%2C160%2C242%2C243%2C244%2C247%2C248%2C278%2C394%2C395%2C396%2C397%2C398%2C399&source=youtube&requiressl=yes&mh=rz&mm=31%2C29&mn=sn-gwpa-h55e%2Csn-h557snlz&ms=au%2Crdu&mv=m&mvi=2&pl=38&initcwndbps=1865000&vprv=1&mime=video%2Fmp4&gir=yes&clen=110647582&dur=290.373&lmt=1574718746712020&mt=1600612367&fvip=2&keepalive=yes&fexp=23915654&c=WEB&txp=5535432&sparams=expire%2Cei%2Cip%2Cid%2Caitags%2Csource%2Crequiressl%2Cvprv%2Cmime%2Cgir%2Cclen%2Cdur%2Clmt&lsparams=mh%2Cmm%2Cmn%2Cms%2Cmv%2Cmvi%2Cpl%2Cinitcwndbps&lsig=AG3C_xAwRgIhAL8TbEcHCvsjjN9LPhWjHWfSyL3yRWDRRSHkvu-u8xFNAiEA_p8mAe7J5c9v48nNNdhnZvSbSq9QrhjBD15a5SQs_Os%3D&sig=AOq0QJ8wRQIgHEfcftgtkl2saG3NmoA7qtnieoPlpHEvGLhHdw4Dz6ECIQCp2h1oNjenq-EK2L3CP01vQgPSM8AUeGFOAgudS0OLKg==&ratebypass=yes
https://r2---sn-gwpa-h55e.googlevideo.com/videoplayback?expire=1600634072&ei=eGhnX-fsDM3Kpge70qWwBg&ip=2405%3A201%3Af003%3Ab837%3A4c23%3A26c1%3Aeebb%3A9762&id=o-AFhSYygCzv9INTCFesbd52xkXnvi9y5ohbvZ74xU27up&itag=251&source=youtube&requiressl=yes&mh=rz&mm=31%2C29&mn=sn-gwpa-h55e%2Csn-h557snlz&ms=au%2Crdu&mv=m&mvi=2&pl=38&initcwndbps=1865000&vprv=1&mime=audio%2Fwebm&gir=yes&clen=4432482&dur=290.401&lmt=1574717524697820&mt=1600612367&fvip=2&keepalive=yes&fexp=23915654&c=WEB&txp=5531432&sparams=expire%2Cei%2Cip%2Cid%2Citag%2Csource%2Crequiressl%2Cvprv%2Cmime%2Cgir%2Cclen%2Cdur%2Clmt&lsparams=mh%2Cmm%2Cmn%2Cms%2Cmv%2Cmvi%2Cpl%2Cinitcwndbps&lsig=AG3C_xAwRgIhALn4s0p9REa6SmFudcQrDpXjKe9l5zE6zi5vkVqz9OukAiEA6xpR-5hT7q314PniGDmBmaPqsIM0carslYGxC3ACGdI%3D&sig=AOq0QJ8wRAIgaP7kkCCl3MnTjaajuJgYai6Zzl_qbx9zCZy1Df5k3LUCIEB-eoXxXFy8ogqXlKne4n8QdCsCrPRuv2VQpmnbhb3v&ratebypass=yes


"""