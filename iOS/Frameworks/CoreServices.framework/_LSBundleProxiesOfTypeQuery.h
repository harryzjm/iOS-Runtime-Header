//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSBundleProxiesOfTypeQuery
{
    unsigned long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)queryWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)bundleUnitMeetsRequirements:(unsigned int)arg1 bundleData:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3;

@end

