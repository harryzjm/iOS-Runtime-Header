//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/DevicePINPane.h>

@class CDPPaneHeaderView, UIScrollView;

@interface CDPPassphraseEntryPane : DevicePINPane
{
    UIScrollView *_containerView;
    CDPPaneHeaderView *_headerView;
    double _keyboardOffset;
}

- (void).cxx_destruct;
- (void)didFinishResizingPinView;
- (void)_layoutPinView;
- (void)didFinishResizingHeaderView;
- (void)_layoutHeaderRect;
- (void)_layoutContainerView;
- (double)desiredMinPinHeight;
@property(readonly, nonatomic) struct CGRect availableHeaderRect;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (id)headerView;
- (double)keyboardHeightOffset;
- (void)_keyboardLayoutChanged;
- (_Bool)isVerySmallScreen;
- (_Bool)isSmallScreen;
- (void)startListeningForKeyboardEvents;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

