//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionaryANYrestrictionname
{
    NSNumber *_statusValue;
}

+ (id)buildRequiredOnlyWithValue:(id)arg1;
+ (id)buildWithValue:(id)arg1;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSNumber *statusValue; // @synthesize statusValue=_statusValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

