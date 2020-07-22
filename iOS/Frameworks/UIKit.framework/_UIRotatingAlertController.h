//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIViewController;
@protocol UIPopoverPresentationControllerDelegate, _UIRotatingAlertControllerDelegate;

@interface _UIRotatingAlertController
{
    unsigned long long _arrowDirections;
    _Bool _isRotating;
    _Bool _readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    id <UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
    id <_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;
}

@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) __weak id <_UIRotatingAlertControllerDelegate> rotatingSheetDelegate; // @synthesize rotatingSheetDelegate=_rotatingSheetDelegate;
- (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (void)_didRotateAndLayout;
- (void)_updateSheetPositionAfterRotation;
- (void)willRotate:(id)arg1;
- (_Bool)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (void)doneWithSheet;
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;
- (_Bool)presentSheet;
- (void)dealloc;
- (id)init;

@end

