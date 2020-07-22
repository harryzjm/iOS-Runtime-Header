//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIBezierPath, UIColor, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UIPlatterShadowView
{
    _Bool _punchOut;
    _UIShapeView *_shadowMaskView;
}

@property(readonly, nonatomic) _UIShapeView *shadowMaskView; // @synthesize shadowMaskView=_shadowMaskView;
@property(nonatomic) _Bool punchOut; // @synthesize punchOut=_punchOut;
- (void).cxx_destruct;
@property(retain, nonatomic) UIBezierPath *shadowPath;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) double shadowOpacity;
@property(nonatomic) double shadowRadius;
@property(retain, nonatomic) UIColor *shadowColor;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithShadowPath:(id)arg1;

@end

