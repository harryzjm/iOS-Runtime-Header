//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMCollector, MISSING_TYPE;

@interface BMManager : NSObject
{
    MISSING_TYPE *collector;
    MISSING_TYPE *configuration;
    MISSING_TYPE *shouldScheduleUpdates;
    MISSING_TYPE *managerQueue;
    MISSING_TYPE *scheduledUpdateWorkItem;
    MISSING_TYPE *$__lazy_storage_$_localStorage;
}

- (void).cxx_destruct;
- (id)init;
- (void)onDidReceiveAppDidBackground:(id)arg1;
- (void)submitEvent:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
@property(nonatomic, readonly) BMCollector *collector; // @synthesize collector;

@end
