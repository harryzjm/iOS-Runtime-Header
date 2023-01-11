//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMActivationAdvancedDeclaration_StatusInstalledConfigurationsItem
{
    NSString *_statusIdentifier;
    NSString *_statusServerHash;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withServerHash:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withServerHash:(id)arg2;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusServerHash; // @synthesize statusServerHash=_statusServerHash;
@property(copy, nonatomic) NSString *statusIdentifier; // @synthesize statusIdentifier=_statusIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

