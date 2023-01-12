//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIColor, UITraitCollection;

@interface DOCTagRenderingRequest : NSObject
{
    double _tagDimension;
    NSArray *_tags;
    NSArray *_fillColors;
    UIColor *_ringColor;
    UIColor *_selectionOutlineColor;
    unsigned long long _clearTagRenderingMode;
    long long _layoutDirection;
    double _knockOutBorderWidth;
    unsigned long long _spacingType;
}

+ (id)requestForChainedTags:(id)arg1 tagDimension:(double)arg2;
+ (id)requestForTag:(id)arg1 tagDimension:(double)arg2;
+ (id)requestWithTagDimension:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long spacingType; // @synthesize spacingType=_spacingType;
@property(nonatomic) double knockOutBorderWidth; // @synthesize knockOutBorderWidth=_knockOutBorderWidth;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) unsigned long long clearTagRenderingMode; // @synthesize clearTagRenderingMode=_clearTagRenderingMode;
@property(retain, nonatomic) UIColor *selectionOutlineColor; // @synthesize selectionOutlineColor=_selectionOutlineColor;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(retain, nonatomic) NSArray *fillColors; // @synthesize fillColors=_fillColors;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) double tagDimension; // @synthesize tagDimension=_tagDimension;
- (id)_UIImageCacheKeyWithAdditionalComponents:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (id)init;

@end
