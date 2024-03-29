//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCSyncContext, NSMutableSet, PQLResultSet;

__attribute__((visibility("hidden")))
@interface BRCFSDownloaderBatchEnumerator : NSObject
{
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
    NSMutableSet *_enumeratedThrottleIds;
    BRCSyncContext *_syncContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BRCSyncContext *syncContext; // @synthesize syncContext=_syncContext;
- (void)close;
- (long long)transferQOS;
- (long long)transferSize;
- (long long)completedUnitCount;
- (id)stageID;
- (id)etag;
- (id)nextDocumentItem;
- (id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long *)arg4;

@end

