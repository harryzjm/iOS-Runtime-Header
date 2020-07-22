//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVPlayerLooperInternal, NSArray, NSError;

@interface AVPlayerLooper : NSObject
{
    AVPlayerLooperInternal *_looper;
}

+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2;
+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
+ (void)initialize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_cleanupAfterPlayingLastLoopingCopy;
- (_Bool)_isWaitingForLastCopyToFinishSet;
- (void)_turnOffLooping;
- (_Bool)_setupLoopingReturningError:(id *)arg1;
- (int)_calculateNumberOfCopiesNeeded;
- (void)_configureLoopingItem:(id)arg1;
@property(readonly, nonatomic) NSArray *loopingPlayerItems;
@property(readonly) long long loopCount;
- (void)disableLooping;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (id)init;

@end

