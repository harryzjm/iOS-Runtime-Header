//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

#import <ChatKit/CKAdaptivePresentedControllerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol CKAlertControllerDelegate;

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol>
{
    _Bool _wantsWindowedPresentation;
    _Bool _preserveModalPresentationStyle;
    _Bool _shouldHidePresentingWindow;
    id <CKAlertControllerDelegate> _alertDelegate;
}

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CKAlertControllerDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property(nonatomic) _Bool shouldHidePresentingWindow; // @synthesize shouldHidePresentingWindow=_shouldHidePresentingWindow;
@property(nonatomic) _Bool preserveModalPresentationStyle; // @synthesize preserveModalPresentationStyle=_preserveModalPresentationStyle;
@property(nonatomic) _Bool wantsWindowedPresentation; // @synthesize wantsWindowedPresentation=_wantsWindowedPresentation;
- (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAction:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)allowsRotation;

// Remaining properties
@property(readonly, nonatomic) NSArray *actions; // @dynamic actions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
