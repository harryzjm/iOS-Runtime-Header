//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CNScheduler : NSObject
{
}

+ (id)synchronousSerialDispatchQueueWithName:(id)arg1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)inlineScheduler;
+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end

