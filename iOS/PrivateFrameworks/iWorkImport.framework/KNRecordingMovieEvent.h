//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDMovieInfo, TSPLazyReference;

__attribute__((visibility("hidden")))
@interface KNRecordingMovieEvent
{
    TSPLazyReference *_movieInfoReference;
    long long _movieEventType;
    double _movieEventValue;
}

@property(readonly, nonatomic) double movieEventValue; // @synthesize movieEventValue=_movieEventValue;
@property(readonly, nonatomic) long long movieEventType; // @synthesize movieEventType=_movieEventType;
- (void).cxx_destruct;
- (_Bool)isIgnoredWhenSeeking;
@property(readonly, nonatomic) _Bool stopsPlayback;
@property(readonly, nonatomic) _Bool startsPlayback;
@property(readonly, nonatomic) _Bool endsScrubbing;
@property(readonly, nonatomic) _Bool beginsScrubbing;
@property(readonly, nonatomic) double rate;
@property(readonly, nonatomic) double seekTime;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 endingScrubbingForMovieInfo:(id)arg2 withRate:(double)arg3;
- (id)initWithStartTime:(double)arg1 beginningScrubbingForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 stoppingPlaybackForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 startingPlaybackForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 rate:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 seekTime:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 movieEventType:(long long)arg3 movieEventValue:(double)arg4;
- (void)saveToArchive:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive *)arg2 unarchiver:(id)arg3;

@end

