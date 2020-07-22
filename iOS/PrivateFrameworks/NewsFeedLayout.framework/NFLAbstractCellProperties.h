//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFLFontCache, NSDictionary;

@interface NFLAbstractCellProperties : NSObject
{
    NFLFontCache *_fontCache;
    double _scaleValue;
    long long _rowSpan;
    NSDictionary *_layout;
    NSDictionary *_columnIrrespectiveProperties;
    CDStruct_3d2913aa _headlineScales;
}

@property(retain, nonatomic) NSDictionary *columnIrrespectiveProperties; // @synthesize columnIrrespectiveProperties=_columnIrrespectiveProperties;
@property(retain, nonatomic) NSDictionary *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) CDStruct_3d2913aa headlineScales; // @synthesize headlineScales=_headlineScales;
@property(nonatomic) double scaleValue; // @synthesize scaleValue=_scaleValue;
@property(retain, nonatomic) NFLFontCache *fontCache; // @synthesize fontCache=_fontCache;
- (void).cxx_destruct;
- (double)scaledLineHeightForFontID:(id)arg1;
- (double)scaledFontSizeForFontID:(id)arg1;
- (_Bool)fontCondensedForFontID:(id)arg1;
- (double)fontWeightForFontID:(id)arg1;
- (id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (id)stringForPropertyKey:(id)arg1;
- (id)dictionaryForPropertyKey:(id)arg1 columnSpan:(long long)arg2;
- (id)arrayForPropertyKey:(id)arg1;
- (id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (id)numberForPropertyKey:(id)arg1;
- (id)scaledNumberForPropertyKey:(id)arg1;
- (struct CGSize)sizeForPropertyKey:(id)arg1;
- (struct CGSize)scaledSizeForPropertyKey:(id)arg1;
- (id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4 headlineScales:(CDStruct_3d2913aa)arg5;

@end

