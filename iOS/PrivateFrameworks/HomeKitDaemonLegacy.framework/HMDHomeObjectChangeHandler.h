//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeObjectChangeHandler : HMFObject
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void)handleObjectUpdate:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)handleObjectRemove:(id)arg1 message:(id)arg2;
- (void)handleObjectAdd:(id)arg1 message:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

