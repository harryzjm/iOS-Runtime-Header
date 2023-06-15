//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFPopoverSizingTableViewController.h>

@class UITableViewHeaderFooterView, UIView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface CompletionListTableViewController : SFPopoverSizingTableViewController
{
    _UIVisualEffectBackdropView *_headerBackdropCaptureView;
    double _keyboardBottomInset;
    double _webSearchTipProposedHeight;
    _Bool _showsWebSearchTipIfExists;
    UIView *_webSearchTipView;
}

+ (id)tableViewCellForSizeEstimation;
+ (void)configureCell:(id)arg1 backgroundMode:(long long)arg2 separatorStyle:(int)arg3 shouldHaveTopPadding:(_Bool)arg4 configurationStateDidChangeCallback:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsWebSearchTipIfExists; // @synthesize showsWebSearchTipIfExists=_showsWebSearchTipIfExists;
@property(retain, nonatomic) UIView *webSearchTipView; // @synthesize webSearchTipView=_webSearchTipView;
- (void)_updateTableViewContentInset;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (id)backgroundColorUsingTranslucentAppearance:(_Bool)arg1;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;
- (void)viewSafeAreaInsetsDidChange;
- (void)_updateWebSearchTipProposedHeightForTableViewWidth:(double)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_showingWebSearchTip;
- (void)updateContentInsets;
@property(readonly, nonatomic) UITableViewHeaderFooterView *defaultHeaderFooterView;
- (void)viewIsAppearing:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

