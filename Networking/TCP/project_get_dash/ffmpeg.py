import ffmpeg_streaming
from ffmpeg_streaming import Formats, Bitrate, Representation, Size
from ffmpeg_streaming import FFProbe



video = ffmpeg_streaming.input('https://www.youtube.com/watch?v=FHHKZp5gvl4&ab_channel=elisssa')

dash = video.dash(Formats.h264())
dash.auto_generate_representations()

dash.output('/home/ananthan2k/Desktop/academics/Networking/dash_2.mpd')
ffprobe = FFProbe('vid.mkv')
all_media = ffprobe.all()

print("all:")
print(all_media)
#1I-3vJSC-Vo