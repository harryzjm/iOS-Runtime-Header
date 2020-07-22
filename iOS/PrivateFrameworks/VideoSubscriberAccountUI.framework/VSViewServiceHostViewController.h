//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSViewServiceRemoteViewControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController <VSViewServiceRemoteViewControllerDelegate>
{
    _Bool _hasRetriedOnce;
    _Bool _hasRequestedPresentation;
    id <VSViewServiceHostViewControllerDelegate> _delegate;
    NSMutableDictionary *_requestsByID;
    VSOptional *_currentRequest;
    VSViewServiceRemoteViewController *_remoteViewController;
    VSViewControllerFactory *_viewControllerFactory;
}

@property(retain, nonatomic) VSViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(nonatomic) _Bool hasRequestedPresentation; // @synthesize hasRequestedPresentation=_hasRequestedPresentation;
@property(nonatomic) _Bool hasRetriedOnce; // @synthesize hasRetriedOnce=_hasRetriedOnce;
@property(retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) VSOptional *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableDictionary *requestsByID; // @synthesize requestsByID=_requestsByID;
@property(nonatomic) __weak id <VSViewServiceHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addRemoteViewControllerAsChildViewController;
- (void)_removeRemoteViewControllerAsChildViewController;
- (void)_connectToViewServiceForRequest:(id)arg1;
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
- (void)dismissViewServiceRemoteViewController:(id)arg1;
- (void)presentViewServiceRemoteViewController:(id)arg1;
- (long long)modalPresentationStyle;
- (void)_cancelButtonPressed:(id)arg1;
- (_Bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;
- (void)_dismissViewServiceHostViewController;
- (void)_presentViewServiceHostViewController;
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;
- (void)_didCancelRequest:(id)arg1;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)_didCompleteRequest:(id)arg1;
- (id)_requestForID:(id)arg1;
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

