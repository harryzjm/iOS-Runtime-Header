//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes
{
    double _darkeningAlphaUniform;
    double _shadowAlpha;
    double _scale;
    long long _layoutMode;
    struct CGRect _unitFrameOnScreen;
    struct CGRect _computedFrame;
}

@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGRect computedFrame; // @synthesize computedFrame=_computedFrame;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) struct CGRect unitFrameOnScreen; // @synthesize unitFrameOnScreen=_unitFrameOnScreen;
@property(nonatomic) double darkeningAlphaUniform; // @synthesize darkeningAlphaUniform=_darkeningAlphaUniform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

