//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsSubscription/NSObject-Protocol.h>

@class AMSCarrierLinkResult, AMSDelegateAction, AMSPurchaseResult, AMSUIDynamicViewController, NSDictionary, NSError, UIView, UIViewController;
@protocol AMSUIDynamicContentViewProtocol;

@protocol AMSUIDynamicViewControllerDelegate <NSObject>

@optional
- (_Bool)dynamicViewController:(AMSUIDynamicViewController *)arg1 handleDelegateAction:(AMSDelegateAction *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (_Bool)dynamicViewControllerShouldDismiss:(AMSUIDynamicViewController *)arg1;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didResolveWithResult:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishCarrierLinkingWithResult:(AMSCarrierLinkResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishWithPurchaseResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishPurchaseWithResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (UIView<AMSUIDynamicContentViewProtocol> *)dynamicViewController:(AMSUIDynamicViewController *)arg1 contentViewWithDictionary:(NSDictionary *)arg2 frame:(struct CGRect)arg3;
- (UIViewController *)dynamicViewController:(AMSUIDynamicViewController *)arg1 contentViewControllerWithDictionary:(NSDictionary *)arg2;
@end

