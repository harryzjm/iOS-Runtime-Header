//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationManagerMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;
    id <HMMLogEventSubmitting> _logEventSubmitter;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;
- (void)submitFailureEventWithFailureCode:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

