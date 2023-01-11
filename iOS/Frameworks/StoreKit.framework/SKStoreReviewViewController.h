//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKRemoteReviewViewControllerDelegate-Protocol.h>

@class NSString, SKInvocationQueueProxy, SKRemoteReviewViewController, _UIAsyncInvocation;
@protocol SKUIServiceReviewViewController;

__attribute__((visibility("hidden")))
@interface SKStoreReviewViewController : UIViewController <SKRemoteReviewViewControllerDelegate>
{
    SKInvocationQueueProxy<SKUIServiceReviewViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteReviewViewController *_remoteViewController;
    NSString *_reviewRequestToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reviewRequestToken; // @synthesize reviewRequestToken=_reviewRequestToken;
@property(retain, nonatomic) SKRemoteReviewViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) _UIAsyncInvocation *cancelRequest; // @synthesize cancelRequest=_cancelRequest;
@property(retain, nonatomic) SKInvocationQueueProxy<SKUIServiceReviewViewController> *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)remoteReviewViewControllerTerminatedWithError:(id)arg1;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithReviewRequestToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
