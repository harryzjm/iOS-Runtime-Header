//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <StoreKitUI/SKUIRedeemIdDelegate-Protocol.h>
#import <StoreKitUI/SKUIRedeemStepDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIRedeemConfiguration, SKUIRedeemPreflightOperation, SKUIRedeemStepViewController, UIBarButtonItem;
@protocol SKUIRedeemViewCameraOverrideDelegate;

@interface SKUIRedeemViewController : UINavigationController <SKUIRedeemIdDelegate, SKUIRedeemStepDelegate>
{
    _Bool _attempsAutomaticRedeem;
    BOOL _cameraRedeemEnabled;
    long long _category;
    SKUIClientContext *_clientContext;
    NSString *_initialCode;
    NSOperationQueue *_operationQueue;
    SKUIRedeemPreflightOperation *_preflightOperation;
    SKUIRedeemConfiguration *_redeemConfiguration;
    SKUIRedeemStepViewController *_inputViewController;
    long long _initialBarStyle;
    _Bool _cameraRedeemVisible;
    _Bool _shouldPerformInitialOperationOnAppear;
    id <SKUIRedeemViewCameraOverrideDelegate> _cameraDelegate;
    UIBarButtonItem *_cancelButtonItem;
}

+ (_Bool)redeemRequiresNationalId:(id)arg1;
@property(nonatomic) _Bool shouldPerformInitialOperationOnAppear; // @synthesize shouldPerformInitialOperationOnAppear=_shouldPerformInitialOperationOnAppear;
@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak id <SKUIRedeemViewCameraOverrideDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration; // @synthesize redeemConfiguration=_redeemConfiguration;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) _Bool cameraRedeemVisible; // @synthesize cameraRedeemVisible=_cameraRedeemVisible;
@property(nonatomic) _Bool attempsAutomaticRedeem; // @synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem;
- (void).cxx_destruct;
- (void)_showNationalIdLoadingPage;
- (void)_showNationalIdVerificationPage;
- (void)_executeIdValidationOperationWithFields:(id)arg1;
- (void)_executeRequiresIdValidationOperation;
- (void)_showInputViewController;
- (id)_newInputViewController;
- (void)_loadInputViewController;
- (void)_finishPreflightWithResult:(id)arg1;
- (void)_attemptAutomaticRedeemWithMetadata:(id)arg1;
- (void)_executePreflightOperationForcesAuthentication:(_Bool)arg1;
- (void)_performInitialRedeemOperation;
- (void)_cancelButtonAction:(id)arg1;
- (void)redeemAgainAnimated:(_Bool)arg1;
- (void)redeemIdViewController:(id)arg1 submittedWithFields:(id)arg2;
- (void)redeemIdViewControllerDidCancel:(id)arg1;
- (void)redeemStepViewControllerShouldValidateNationalID:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGSize)preferredContentSize;
- (id)initWithRedeemCategory:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

