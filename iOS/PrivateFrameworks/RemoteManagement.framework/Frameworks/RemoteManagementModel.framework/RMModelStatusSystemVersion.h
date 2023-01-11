//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface RMModelStatusSystemVersion <RMModelRegisteredTypeProtocol>
{
    NSString *_statusOSVersion;
    NSString *_statusBuildVersion;
}

+ (id)buildRequiredOnlyWithOSVersion:(id)arg1 buildVersion:(id)arg2;
+ (id)buildWithOSVersion:(id)arg1 buildVersion:(id)arg2;
+ (id)allowedStatusKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *statusBuildVersion; // @synthesize statusBuildVersion=_statusBuildVersion;
@property(copy, nonatomic) NSString *statusOSVersion; // @synthesize statusOSVersion=_statusOSVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
