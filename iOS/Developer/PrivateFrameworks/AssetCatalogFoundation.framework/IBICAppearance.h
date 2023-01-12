//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetCatalogFoundation/IBICCoreUISlotComponent-Protocol.h>

@class NSString;

@interface IBICAppearance <IBICCoreUISlotComponent>
{
    long long _coreUIValue;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 coreUIValue:(long long)arg4 displayOrder:(double)arg5;
+ (id)displayName;
+ (id)groupedAttributeValueForManifestArchiving;
+ (id)groupingKeyForManifestArchiving;
+ (id)contentsJSONKey;
+ (long long)encodingType;
+ (long long)componentID;
@property(readonly, nonatomic) long long coreUIValue; // @synthesize coreUIValue=_coreUIValue;
- (_Bool)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 coreUIValue:(long long)arg4 displayOrder:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
