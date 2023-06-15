//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPresentationController.h>

@class NSString, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface CKAppMenuPresentationController : UIPresentationController
{
    UITapGestureRecognizer *_tapRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapOutsideMenu;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *sourceView; // @dynamic sourceView;
@property(readonly) Class superclass;

@end

