//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWindow, _UIFallbackPresentationWindow;

@interface _UIFallbackPresentationViewController
{
    _UIFallbackPresentationWindow *_presentationWindow;
    _Bool _hasPreservedKeyboardInputViews;
    _Bool _hasDismissCompletionHandler;
    UIWindow *_rotationDecider;
    CDUnknownBlockType _presentationPreparationBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasDismissCompletionHandler; // @synthesize hasDismissCompletionHandler=_hasDismissCompletionHandler;
@property(nonatomic) _Bool hasPreservedKeyboardInputViews; // @synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews;
@property(copy, nonatomic) CDUnknownBlockType presentationPreparationBlock; // @synthesize presentationPreparationBlock=_presentationPreparationBlock;
@property(retain, nonatomic) UIWindow *rotationDecider; // @synthesize rotationDecider=_rotationDecider;
- (_Bool)_canShowWhileLocked;
- (void)_preparePresentationControllerForPresenting:(id)arg1;
- (void)_restoreInputViewsAnimated:(_Bool)arg1;
- (void)_preserveInputViewsAnimated:(_Bool)arg1;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(_Bool)arg3;
- (void)viewDidLoad;

@end
