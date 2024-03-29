//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIDynamicViewController, NSString;
@protocol AMSUIDynamicViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIDynamicViewControllerDelegateProxy : NSObject
{
    id <AMSUIDynamicViewControllerDelegate> _delegate;
    AMSUIDynamicViewController *_dynamicViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AMSUIDynamicViewController *dynamicViewController; // @synthesize dynamicViewController=_dynamicViewController;
@property(nonatomic) __weak id <AMSUIDynamicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)dynamicViewControllerShouldDismiss:(id)arg1;
- (_Bool)dynamicViewController:(id)arg1 handleDelegateAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dynamicViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect)arg3;
- (id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2;
- (id)initWithDynamicViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

