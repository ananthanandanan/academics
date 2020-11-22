import os
import subprocess

"""
path = os.path.realpath('.')
print(path)
subprocess.run(["youtube-dl", "--write-info-json", "4X4Fy8YqysY", "-o", path + '/%(title)s.%(ext)s' ])"""
link = "https://www.youtube.com/watch?v=4X4Fy8YqysY&ab_channel=VideoCollectables"
video_id = link.split("=")[1].split('&')[0]
print(video_id)