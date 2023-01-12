//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSUIWebAppearance, AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSDictionary, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController
{
    AMSUIWebAppearance *_appearance;
    UIViewController *_childController;
    AMSUIWebClientContext *_context;
    AMSUIWebCameraReaderInfoView *_infoView;
    AMSUIWebCameraReaderPageModel *_model;
    AMSUIWebNavigationBarModel *_navigationBarModel;
    NSDictionary *_output;
}

+ (_Bool)cameraSupported;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *output; // @synthesize output=_output;
@property(retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
@property(retain, nonatomic) AMSUIWebCameraReaderPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIWebCameraReaderInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewController *childController; // @synthesize childController=_childController;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;
- (void)_handleCameraOutput:(id)arg1 error:(id)arg2;
- (id)_cameraReader;
- (void)_applyAppearance;
- (id)_outputForIDCardReaderObjects:(id)arg1;
- (void)_setupPageForIDCard;
- (id)_outputForGiftCardReaderCode:(id)arg1;
- (id)_outputForGiftCardReaderObjects:(id)arg1;
- (void)_setupPageForGiftCard;
- (void)_setupPageForCreditCard;
- (id)_outputForCreditCardReaderObjects:(id)arg1;
- (void)_setCameraToggleButton;
- (void)_setRedeemButton;
- (void)_setupCameraToggle;
- (void)_setupNavigationModel;
- (void)_commitNavigationBarModel;
- (void)_layoutTextField;
- (void)_layoutPage;
- (void)_setupTextEntry;
- (void)_setupInfoView;
- (void)_setupPage;
- (void)_setChild:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

