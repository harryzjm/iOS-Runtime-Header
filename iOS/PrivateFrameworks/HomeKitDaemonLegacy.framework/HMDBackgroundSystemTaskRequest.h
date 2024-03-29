//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDBackgroundSystemTaskRequest : HMFObject
{
    _Bool _requiresInexpensiveNetworkConnectivity;
    _Bool _requiresSignificantUserInactivity;
    NSString *_identifier;
    double _interval;
    double _minDurationBetweenInstances;
}

- (void).cxx_destruct;
@property(nonatomic) double minDurationBetweenInstances; // @synthesize minDurationBetweenInstances=_minDurationBetweenInstances;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool requiresSignificantUserInactivity; // @synthesize requiresSignificantUserInactivity=_requiresSignificantUserInactivity;
@property(nonatomic) _Bool requiresInexpensiveNetworkConnectivity; // @synthesize requiresInexpensiveNetworkConnectivity=_requiresInexpensiveNetworkConnectivity;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1;

@end

