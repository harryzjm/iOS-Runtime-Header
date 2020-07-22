//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface GEOReportedProgress : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    CDUnknownBlockType _cancellationHandler;
}

+ (id)progressWithTotalUnitCount:(long long)arg1;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(copy) CDUnknownBlockType cancellationHandler;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
@property long long completedUnitCount;
@property long long totalUnitCount;
@property(copy) NSString *kind;
- (id)initWithTotalUnitCount:(long long)arg1;

@end
