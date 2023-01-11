//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIView;

@interface NTKCFaceContainerView : UIControl
{
    _Bool _active;
    long long _style;
    UIView *_faceView;
    UIView *_backgroundView;
    CAShapeLayer *_outline;
    UIView *_faceContainer;
    UIView *_highlightView;
    struct CGSize _faceSize;
}

+ (double)_insetPaddingForStyle:(long long)arg1;
+ (struct CGSize)faceSizeForSize:(struct CGSize)arg1 style:(long long)arg2;
+ (struct CGSize)sizeForFaceSize:(struct CGSize)arg1 style:(long long)arg2;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *faceContainer; // @synthesize faceContainer=_faceContainer;
@property(retain, nonatomic) CAShapeLayer *outline; // @synthesize outline=_outline;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct CGSize faceSize; // @synthesize faceSize=_faceSize;
- (void).cxx_destruct;
- (double)_outlineLineWidth;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGAffineTransform)_transformForFaceView;
- (id)initWithFaceSize:(struct CGSize)arg1 style:(long long)arg2;

@end

