//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSSPreset-Protocol.h>

@class NSString;

@interface TSWPListStyle <TSSPreset>
{
}

+ (id)presetStyleDescriptor;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1;
+ (id)pLabelTypeArrayForType:(int)arg1;
+ (id)CJKListNameForNumberType:(int)arg1;
+ (id)propertyMapForListNumberType:(int)arg1;
+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;
+ (id)numberedlistStyleForPresets:(id)arg1;
+ (id)harvardStyleWithContext:(id)arg1;
+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultMissingBulletImage;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelIndents;
+ (id)defaultTextIndents;
+ (void)pGetDefaultTextIndentFloats:(double [9])arg1;
+ (_Bool)defaultTieredNumber;
+ (int)defaultLabelNumberType;
+ (id)defaultLabelString;
+ (int)firstLabelTypeForPropertyMapping:(id)arg1;
+ (int)labelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)effectiveTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)pLabelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(_Bool)arg3;
+ (_Bool)isDefaultMissingBulletImage:(id)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
+ (id)stickyOverrideProperties;
- (id)baseStyleForTopicNumbers;
@property(readonly, nonatomic) NSString *presetKind;
- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (int)firstLabelType;
- (int)labelTypeForLevel:(unsigned long long)arg1;
- (int)effectiveTypeForLevel:(unsigned long long)arg1;
- (double)textIndentForLevel:(unsigned long long)arg1 fontSize:(double)arg2;
- (double)labelIndentForLevel:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;

@end

