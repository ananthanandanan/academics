var youtube = new YoutubeClient();

var streamManifest = await youtube.Videos.Streams.GetManifestAsync("bnsUkE8i0tU");