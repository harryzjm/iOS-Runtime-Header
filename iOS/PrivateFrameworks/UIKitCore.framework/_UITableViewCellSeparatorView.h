//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UITableViewCellSeparatorView : UIView
{
    UIView *_backgroundView;
    UIView *_overlayView;
    UIVisualEffect *_separatorEffect;
    UIVisualEffectView *_effectView;
    _Bool _drawsWithVibrantLightMode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property(nonatomic) _Bool drawsWithVibrantLightMode; // @synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

