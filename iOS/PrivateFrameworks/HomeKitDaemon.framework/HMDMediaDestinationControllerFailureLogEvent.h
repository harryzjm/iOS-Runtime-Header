//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerFailureLogEvent
{
    NSString *_destinationControllerErrorCode;
    NSString *_errorCode;
    NSString *_errorDomain;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(readonly, copy) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy) NSString *destinationControllerErrorCode; // @synthesize destinationControllerErrorCode=_destinationControllerErrorCode;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithDestinationControllerErrorCode:(id)arg1 errorCode:(id)arg2 errorDomain:(id)arg3 isTriggeredOnControllerDevice:(id)arg4 userPrivilege:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

