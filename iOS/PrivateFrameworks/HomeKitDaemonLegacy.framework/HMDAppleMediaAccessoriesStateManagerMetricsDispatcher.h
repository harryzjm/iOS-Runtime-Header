//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoriesStateManagerMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;
    id <HMMLogEventSubmitting> _logEventSubmitter;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;
- (void)submitMatchingIdentifierRemovalEventWithRemovalCount:(long long)arg1;
- (void)submitMatchingIdentifierEventWithMatchingCount:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

