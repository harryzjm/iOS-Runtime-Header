//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CapsuleNavigationBarViewController, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CapsuleHidingStepperViewController
{
    UIPanGestureRecognizer *_panRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    CapsuleNavigationBarViewController *_capsuleViewController;
}

- (void).cxx_destruct;
@property __weak CapsuleNavigationBarViewController *capsuleViewController; // @synthesize capsuleViewController=_capsuleViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_didReceivePan:(id)arg1;
- (void)_didReceiveTap:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

