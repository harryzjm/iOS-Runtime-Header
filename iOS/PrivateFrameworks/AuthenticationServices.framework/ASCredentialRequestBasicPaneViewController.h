//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASCredentialRequestInfoLabelSubPane, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestBasicPaneViewController
{
    NSString *_title;
    NSString *_subtitle;
    UIImage *_icon;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}

- (void).cxx_destruct;
- (void)_addBottomFillerView;
- (void)_setUpSubtitleLabel;
- (void)_setUpTitleLabel;
- (void)_addTopFillerViewWithMargin:(double)arg1;
- (void)_setUpIconView;
- (void)_setUpView;
- (void)updateSubtitle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;

@end
