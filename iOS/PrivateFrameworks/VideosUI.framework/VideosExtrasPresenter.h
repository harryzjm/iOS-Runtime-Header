//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, VideosExtrasContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasPresenter : NSObject <UIViewControllerTransitioningDelegate>
{
    VideosExtrasContext *_extrasContext;
    struct CGRect _extrasMenuBarFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect extrasMenuBarFrame; // @synthesize extrasMenuBarFrame=_extrasMenuBarFrame;
@property(retain, nonatomic) VideosExtrasContext *extrasContext; // @synthesize extrasContext=_extrasContext;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissExtrasAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentExtrasWith:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithExtrasContext:(id)arg1 extrasMenuBarFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
