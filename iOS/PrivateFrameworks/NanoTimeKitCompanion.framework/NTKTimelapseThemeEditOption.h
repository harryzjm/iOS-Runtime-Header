//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NTKTimelapseThemeEditOption
{
}

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_resourceNameForTheme:(unsigned long long)arg1 videoIndex:(long long)arg2;
+ (id)_resourceBaseNameForTheme:(unsigned long long)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)optionWithTimelapseTheme:(unsigned long long)arg1;
+ (id)optionsDescription;
- (id)_valueToFaceBundleStringDict;
- (id)resourceNameWithVideoIndex:(long long)arg1;
@property(readonly, nonatomic) NSString *resourceName;
@property(readonly, nonatomic) NSString *resourceBaseName;
@property(readonly, nonatomic) unsigned long long timelapseTheme;
- (long long)swatchStyle;

@end

