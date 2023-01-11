//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface SBHShadowedWidgetView : UIView
{
    _Bool _perspectiveEnabled;
    UIView *_contentView;
    UIView *_shadowView;
    double _cornerRadius;
    struct CGAffineTransform _contentTransform;
    struct CGAffineTransform _shadowSupplementalTransform;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform shadowSupplementalTransform; // @synthesize shadowSupplementalTransform=_shadowSupplementalTransform;
@property(nonatomic) struct CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic, getter=isPerspectiveEnabled) _Bool perspectiveEnabled; // @synthesize perspectiveEnabled=_perspectiveEnabled;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_updateZPositions;
- (void)layoutSubviews;
- (id)initWithContentView:(id)arg1 shadowView:(id)arg2 perspectiveEnabled:(_Bool)arg3;

@end
