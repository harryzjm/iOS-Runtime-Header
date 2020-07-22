//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ISLivePhotoSeekBehavior
{
    _Bool _isSeeking;
    _Bool _needsSeek;
    _Bool _needsTransitionToVideo;
    CDUnknownBlockType _seekCompletionHandler;
    CDStruct_1b6d18a9 _seekTime;
}

@property(copy, nonatomic) CDUnknownBlockType seekCompletionHandler; // @synthesize seekCompletionHandler=_seekCompletionHandler;
@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
- (void).cxx_destruct;
- (long long)behaviorType;
- (void)_handleDidSeekToSeekTime:(_Bool)arg1;
- (void)_callSeekCompletionHandler:(_Bool)arg1;
- (void)_seekIfNeeded;
- (void)activeDidChange;
- (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2;

@end

