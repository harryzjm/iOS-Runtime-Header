//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SFWebsiteNotSecureMessageView : UIView
{
    double _accessibilityImageScale;
    UILabel *_label;
    UIImageView *_icon;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_warningImageWithColor:(id)arg1;
- (void)updateColor:(id)arg1;
- (void)updateFont:(id)arg1 accessibilityImageScale:(double)arg2;
- (id)initWithColor:(id)arg1;

@end
