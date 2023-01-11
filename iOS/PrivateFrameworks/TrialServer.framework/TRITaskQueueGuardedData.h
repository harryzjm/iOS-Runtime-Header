//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol TRITaskPersisting;

@interface TRITaskQueueGuardedData : NSObject
{
    _Bool stopRequested;
    id <TRITaskPersisting> taskStore;
    NSMutableDictionary *queuedTasks;
    NSDate *nextScheduledTaskStartTime;
    unsigned long long currentCapabilities;
    NSMutableDictionary *xpcDescriptorToState;
    CDUnknownBlockType taskQueueCompletionBlock;
}

- (void).cxx_destruct;

@end
