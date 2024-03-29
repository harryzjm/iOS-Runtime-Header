//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInputPassDescription;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputFigAssetWriterEndPassOperation
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _trackID;
    AVAssetWriterInputPassDescription *_nextPassDescription;
}

@property(readonly, nonatomic) AVAssetWriterInputPassDescription *descriptionForNextPass; // @synthesize descriptionForNextPass=_nextPassDescription;
- (void)_notifyWhetherMorePassesAreNeeded:(_Bool)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;
- (void)start;
- (_Bool)isAsynchronous;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 trackID:(int)arg2;
- (id)init;

@end

