//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSEngagementRequest, AMSEngagementResult, AMSProcessInfo, NSError, NSObject, NSString, NSXPCListener, UIViewController;
@protocol AMSBagProtocol, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface AMSUIEngagementRemoteViewTask : AMSTask
{
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSError *_error;
    UIViewController *_presentedViewController;
    NSXPCListener *_remoteListener;
    AMSEngagementRequest *_request;
    AMSEngagementResult *_result;
    UIViewController *_viewController;
    struct CGSize _preferredContentSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) AMSEngagementResult *result; // @synthesize result=_result;
@property(retain, nonatomic) AMSEngagementRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSXPCListener *remoteListener; // @synthesize remoteListener=_remoteListener;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void)_presentViewController:(id)arg1;
- (void)_unblock;
- (id)_snapshotBagDataPromise;
- (void)preferredContentSizeDidChange:(struct CGSize)arg1;
- (void)engagementTaskDidFinishWithResult:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)presentEngagement;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

