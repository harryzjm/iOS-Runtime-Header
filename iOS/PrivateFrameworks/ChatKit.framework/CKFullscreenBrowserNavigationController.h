//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <ChatKit/CKAdaptivePresentedControllerProtocol-Protocol.h>

@class NSString;

@interface CKFullscreenBrowserNavigationController : UINavigationController <CKAdaptivePresentedControllerProtocol>
{
}

- (_Bool)forceWindowedPresentation;
- (_Bool)constrainToPresentingVCBounds;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)wantsWindowedPresentation;
- (void)loadView;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
