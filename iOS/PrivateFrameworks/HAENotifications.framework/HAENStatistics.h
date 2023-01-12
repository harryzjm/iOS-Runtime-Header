//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HAENStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1;
- (void)processMessage:(id)arg1;
- (void)processStatsForLocationGating:(CDStruct_a62c2e44)arg1;
- (id)volumeActionString:(unsigned int)arg1;
- (void)processStatsForEvent:(id)arg1;
- (id)init;

@end
