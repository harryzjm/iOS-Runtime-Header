//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView
{
    UIVisualEffectView *_effectView;
    long long _style;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)_configureWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

