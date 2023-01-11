//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMPredicateBudget <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalendarIdentifier;
    NSString *_payloadMonitor;
    NSArray *_payloadIdentifiers;
    NSArray *_payloadIdentifiersVersion2;
    NSArray *_payloadNotificationTimes;
    NSArray *_payloadTimeBudget;
}

+ (id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withIdentifiersVersion2:(id)arg4 withNotificationTimes:(id)arg5 withTimeBudget:(id)arg6;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *payloadTimeBudget; // @synthesize payloadTimeBudget=_payloadTimeBudget;
@property(copy, nonatomic) NSArray *payloadNotificationTimes; // @synthesize payloadNotificationTimes=_payloadNotificationTimes;
@property(copy, nonatomic) NSArray *payloadIdentifiersVersion2; // @synthesize payloadIdentifiersVersion2=_payloadIdentifiersVersion2;
@property(copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
@property(copy, nonatomic) NSString *payloadMonitor; // @synthesize payloadMonitor=_payloadMonitor;
@property(copy, nonatomic) NSString *payloadCalendarIdentifier; // @synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
