//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKExplorerColorEditOption
{
}

+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) unsigned long long color;
- (long long)swatchStyle;

@end

