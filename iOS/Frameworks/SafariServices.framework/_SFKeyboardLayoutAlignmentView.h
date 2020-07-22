//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSNotification;

__attribute__((visibility("hidden")))
@interface _SFKeyboardLayoutAlignmentView : UIView
{
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;
    struct CGRect lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
    _Bool _automaticKeyboardFrameTrackingDisabled;
}

@property(nonatomic) _Bool automaticKeyboardFrameTrackingDisabled; // @synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled;
- (void).cxx_destruct;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_removeConstraints;
- (void)_addConstraints;
- (void)_matchInitialKeyboardFrame;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;

@end

