//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSThread.h>

@interface NSThread (DVTObjectAllocationTracking)
+ (id)countedSetOfObjectAllocationDescriptionsOnCurrentThreadWhileInvokingBlock:(CDUnknownBlockType)arg1;
+ (void)stopTrackingObjectAllocationsOnCurrentThread;
+ (_Bool)isTrackingObjectAllocationsOnCurrentThread;
+ (void)startTrackingObjectAllocationsOnCurrentThreadUsingBlock:(CDUnknownBlockType)arg1;
@end

