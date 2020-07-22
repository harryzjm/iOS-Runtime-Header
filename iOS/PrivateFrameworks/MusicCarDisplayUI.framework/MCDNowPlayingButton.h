//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDNowPlayingButton : UIButton
{
    CALayer *_leadingBorder;
    CALayer *_focusColorLayer;
    struct CGSize _layoutFrameSize;
    double _height;
}

+ (id)buttonWithHeight:(double)arg1;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (_Bool)canBecomeFocused;

@end

