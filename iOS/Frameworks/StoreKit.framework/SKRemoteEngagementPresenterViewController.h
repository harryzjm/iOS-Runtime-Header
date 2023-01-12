//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, NSString, SKRemoteEngagementRemoteViewController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SKEngagementPresenterProtocol;

__attribute__((visibility("hidden")))
@interface SKRemoteEngagementPresenterViewController : UIViewController
{
    id <SKEngagementPresenterProtocol> _delegate;
    SKRemoteEngagementRemoteViewController *_remoteViewController;
    NSObject<OS_dispatch_queue> *_engagementPresentationQueue;
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;
}

- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_semaphore> *remoteViewControllerSemaphore; // @synthesize remoteViewControllerSemaphore=_remoteViewControllerSemaphore;
@property(readonly) NSObject<OS_dispatch_queue> *engagementPresentationQueue; // @synthesize engagementPresentationQueue=_engagementPresentationQueue;
@property(retain) SKRemoteEngagementRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <SKEngagementPresenterProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_addRemoteView;
- (void)_loadRemoteViewController;
- (void)presentEngagementRequestData:(id)arg1 clientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

