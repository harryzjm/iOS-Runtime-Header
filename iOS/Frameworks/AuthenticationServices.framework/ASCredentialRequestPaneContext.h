//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCredentialRequestInfoLabelSubPane, ASCredentialRequestPaneViewController, NSString, UIImage, UIStackView;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestPaneContext : NSObject
{
    long long _iconStyle;
    NSString *_title;
    long long _titleStyle;
    UIImage *_icon;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
    long long _subtitleStyle;
    ASCredentialRequestPaneViewController *_paneViewController;
    UIStackView *_stackView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) __weak ASCredentialRequestPaneViewController *paneViewController; // @synthesize paneViewController=_paneViewController;
- (double)_customSpacingAfterSubtitle;
- (double)_boldTitle_customSpacingAfterTitle;
- (double)_customSpacingAfterTitle;
- (double)_customSpacingAfterIcon;
- (double)_boldTitle_stackViewTopSpacing;
- (double)_stackViewTopSpacing;
- (_Bool)_useBoldTitleLayout;
- (void)addIcon:(id)arg1 iconStyle:(long long)arg2 title:(id)arg3 titleStyle:(long long)arg4 subtitlePane:(id)arg5 subtitleStyle:(long long)arg6 subtitleBottomSpacing:(id)arg7;
- (void)addEmptyViewWithSpacing:(double)arg1;
- (void)addSubPane:(id)arg1 withCustomSpacingAfter:(double)arg2;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;

@end

