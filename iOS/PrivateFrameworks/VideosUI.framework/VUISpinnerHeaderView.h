//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <VideosUI/PSHeaderFooterView-Protocol.h>

@class PSSpecifier, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView>
{
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
    PSSpecifier *_specifier;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)hideText;
- (void)showText;
- (id)initWithSpecifier:(id)arg1;

@end
