//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject
{
    NSString *_productGroup;
    NSString *_productNumber;
    HMFVersion *_firmwareVersion;
}

+ (id)createWithProductData:(id)arg1 firmwareVersion:(id)arg2;
+ (id)identifierFromRecordID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *productNumber; // @synthesize productNumber=_productNumber;
@property(readonly, nonatomic) NSString *productGroup; // @synthesize productGroup=_productGroup;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3;
- (id)cloudKitRecordID;
@property(readonly, nonatomic) NSString *cloudKitRecordName;
@property(readonly, nonatomic) NSString *cloudKitZoneName;

@end

