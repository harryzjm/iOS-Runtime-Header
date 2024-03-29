//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIAlertController, UIAlertView, UIPopoverController, UIViewController, _UIAlertControllerShimPresenterWindow;
@protocol UIPopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenter : NSObject
{
    UIPopoverController *_popoverController;
    id <UIPopoverControllerDelegate> _popoverDelegate;
    UIViewController *_inPopoverViewController;
    _UIAlertControllerShimPresenterWindow *_window;
    UIAlertController *_alertController;
    UIAlertView *_legacyAlert;
}

+ (void)_removePresenter:(id)arg1;
+ (void)_addPresenter:(id)arg1;
+ (id)_currentFullScreenAlertPresenters;
+ (void)_cancelPendingTouchesIfAppropriateForWindow:(id)arg1;
+ (_Bool)_shouldPresentActionSheetsFullscreen;
- (void).cxx_destruct;
@property(nonatomic) UIAlertView *legacyAlert; // @synthesize legacyAlert=_legacyAlert;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) _UIAlertControllerShimPresenterWindow *window; // @synthesize window=_window;
- (void)dealloc;
- (void)_createWindowIfNecessaryWithScene:(id)arg1;
- (void)_tearDownInPopoverViewController;
@property(nonatomic) __weak id <UIPopoverControllerDelegate> popoverDelegate;
- (id)_popoverController;
- (void)_dismissAlertControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentAlertControllerFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentAlertControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentAlertControllerAnimated:(_Bool)arg1 hostingScene:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

