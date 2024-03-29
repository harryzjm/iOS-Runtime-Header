//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, TSUImage;

@interface TSCHFillSet : NSObject
{
    NSString *_identifier;
    NSString *_PListPath;
    NSDictionary *_PListProperties;
    TSUImage *_swatchImage;
    NSMutableArray *_seriesSwatchImages;
    struct CGRect *_seriesSwatchImageRects;
}

+ (double)defaultScaleFactor;
+ (struct CGSize)defaultMacSwatchSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *plistPath; // @synthesize plistPath=_PListPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)seriesStylesForSeriesTypes:(id)arg1 context:(id)arg2;
- (id)propertyMutationTuplesForPreviewOnChart:(id)arg1;
- (void)p_createSeriesSwatchImagesWithSeriesCount:(unsigned long long)arg1 swatchSize:(struct CGSize)arg2 scaleFactor:(double)arg3;
- (void)primeSwatchImageCache;
- (id)seriesSwatchImageWithSize:(struct CGSize)arg1 scaleFactor:(double)arg2 seriesIndex:(unsigned long long)arg3;
- (id)swatchFillsWithSwatchSize:(struct CGSize)arg1 scaleFactor:(double)arg2;
- (id)fillsForDefaultSeriesType;
- (id)swatchImageWithSize:(struct CGSize)arg1 scaleFactor:(double)arg2;
- (id)styleSwapCommandToApplyToChart:(id)arg1 context:(id)arg2;
- (id)commandToApplyToChart:(id)arg1 context:(id)arg2;
- (id)p_propertyMapsToApplyToChart:(id)arg1 context:(id)arg2;
- (_Bool)chartAlreadyMatches:(id)arg1;
- (id)colorFromProperties:(id)arg1;
- (id)fillFromSageProperties:(id)arg1;
- (id)fillForPreviewForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2;
- (id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3;
- (id)p_sagePropertiesForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2;
- (id)p_sagePropertiesForSeriesType:(id)arg1;
- (id)p_tangierToSageProperties;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1;
- (id)fillsForSeriesType:(id)arg1 context:(id)arg2;
- (id)existingCachedImageForSize:(struct CGSize)arg1 scaleFactor:(double)arg2;
- (id)plistProperties;
@property(readonly, nonatomic) NSString *lookupString;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 plistPath:(id)arg2;

@end

