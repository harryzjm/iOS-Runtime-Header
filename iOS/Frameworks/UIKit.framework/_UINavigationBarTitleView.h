//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UINavigationBarAugmentedTitleView-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UINavigationItem, _UINavigationBarTitleViewOverlayRects;
@protocol _UINavigationBarTitleViewDataSource;

@interface _UINavigationBarTitleView <_UINavigationBarAugmentedTitleView>
{
    NSLayoutConstraint *_heightConstraint;
    _UINavigationBarTitleViewOverlayRects *_overlayRects;
    id <_UINavigationBarTitleViewDataSource> _dataSource;
    _Bool _underlayBarContent;
    _Bool _hideBackButton;
    _Bool _hideLeadingBarButtons;
    _Bool _hideStandardTitle;
    _Bool _hideTrailingBarButtons;
    UINavigationItem *_navigationItem;
    long long _titleLocation;
    double _height;
    double _backButtonMaximumWidth;
}

@property(nonatomic) _Bool hideTrailingBarButtons; // @synthesize hideTrailingBarButtons=_hideTrailingBarButtons;
@property(nonatomic) _Bool hideStandardTitle; // @synthesize hideStandardTitle=_hideStandardTitle;
@property(nonatomic) _Bool hideLeadingBarButtons; // @synthesize hideLeadingBarButtons=_hideLeadingBarButtons;
@property(nonatomic) _Bool hideBackButton; // @synthesize hideBackButton=_hideBackButton;
@property(nonatomic) double backButtonMaximumWidth; // @synthesize backButtonMaximumWidth=_backButtonMaximumWidth;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool underlayBarContent; // @synthesize underlayBarContent=_underlayBarContent;
@property(readonly, nonatomic) long long titleLocation; // @synthesize titleLocation=_titleLocation;
@property(readonly, nonatomic) __weak UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
- (void).cxx_destruct;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_transitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)performTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_performTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)transitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)contentDidChange;
- (void)_contentDidChange;
- (void)preferredContentSizeDidChange;
- (long long)preferredContentSizeForSize:(long long)arg1;
- (long long)_preferredContentSizeForSize:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *contentOverlayRects;
@property(readonly, nonatomic) _Bool _hideNavigationBarTrailingBarButtons;
@property(readonly, nonatomic) _Bool _hideNavigationBarStandardTitle;
@property(readonly, nonatomic) _Bool _hideNavigationBarLeadingBarButtons;
@property(readonly, nonatomic) _Bool _hideNavigationBarBackButton;
@property(readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property(readonly, nonatomic) double _navigationBarContentHeight;
@property(readonly, nonatomic) _Bool _underlayNavigationBarContent;
- (void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

