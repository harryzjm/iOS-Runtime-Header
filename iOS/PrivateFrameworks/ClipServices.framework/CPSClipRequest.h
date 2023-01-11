//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClipServices/CPSSessionProxyDelegate-Protocol.h>

@class CPSSessionProxy, NSString;

@interface CPSClipRequest : NSObject <CPSSessionProxyDelegate>
{
    CPSSessionProxy *_sessionProxy;
    CDUnknownBlockType _completionHandler;
    _Bool _shouldOpenClipWhenMetadataIsUpdated;
    _Bool _shouldReturnErrorOnUserCancellation;
}

+ (void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getLocationConfirmationConsentForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getUserNotificationConsentForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteClipsWithBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReturnErrorOnUserCancellation; // @synthesize shouldReturnErrorOnUserCancellation=_shouldReturnErrorOnUserCancellation;
- (void)proxyAppDidLaunchForTesting:(id)arg1;
- (void)proxyRemoteServiceDidCrash:(id)arg1;
- (void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)proxyDidUpdateMetadata:(id)arg1;
- (void)proxy:(id)arg1 didDetermineAvailability:(_Bool)arg2;
- (void)_openClipWithInvocationUI;
- (id)_errorIgnoringUserCancelledErrorIfNeeded:(id)arg1;
- (void)installClipWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)cancel;
- (id)sessionProxy;
- (void)requestClipWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
