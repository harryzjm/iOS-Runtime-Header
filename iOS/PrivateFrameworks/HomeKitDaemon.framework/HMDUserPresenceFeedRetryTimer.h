//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceFeedRetryTimer : HMFObject
{
    HMFTimer *_retryTimer;
    unsigned long long _retryCount;
    NSUUID *_timerID;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSUUID *timerID; // @synthesize timerID=_timerID;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
- (id)logIdentifier;
- (_Bool)shouldRetryImmediately:(double)arg1;
@property(readonly) double retryTimeInterval;
- (void)cancel;
- (void)startWithDelegate:(id)arg1 delegateQueue:(id)arg2 responseTime:(double)arg3;
- (id)attributeDescriptions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

