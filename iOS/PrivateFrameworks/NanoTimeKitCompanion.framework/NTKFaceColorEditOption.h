//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKFaceColorEditOption
{
}

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)__orderedValues;
+ (id)__allOrderedColors;
+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (id)optionWithFaceColor:(unsigned long long)arg1;
- (id)_valueToFaceBundleStringDict;
- (_Bool)optionExistsInOSVersion:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long faceColor;
- (long long)swatchStyle;

@end
