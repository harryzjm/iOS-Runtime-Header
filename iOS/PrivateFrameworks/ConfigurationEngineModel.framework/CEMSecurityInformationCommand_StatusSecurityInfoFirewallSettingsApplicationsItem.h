//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem
{
    NSNumber *_statusAllowed;
    NSString *_statusBundleID;
    NSString *_statusName;
}

+ (id)buildRequiredOnly;
+ (id)buildWithAllowed:(id)arg1 withBundleID:(id)arg2 withName:(id)arg3;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusName; // @synthesize statusName=_statusName;
@property(copy, nonatomic) NSString *statusBundleID; // @synthesize statusBundleID=_statusBundleID;
@property(copy, nonatomic) NSNumber *statusAllowed; // @synthesize statusAllowed=_statusAllowed;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

