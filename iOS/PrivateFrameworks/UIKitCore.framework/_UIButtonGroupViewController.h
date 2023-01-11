//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, UIScrollView, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIButtonGroupViewController <UIPopoverPresentationControllerDelegate>
{
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
    _Bool _overLightKeyboard;
}

- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_cleanupForDismissal;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dismissIfNecessary;
- (id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
