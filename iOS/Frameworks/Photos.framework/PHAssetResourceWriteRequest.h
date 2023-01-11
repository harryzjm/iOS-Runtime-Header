//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHAssetResourceRequest-Protocol.h>
#import <Photos/PHAssetResourceRequestDelegate-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL, PHAssetResource, PHAssetResourceRequest, PHAssetResourceRequestOptions;
@protocol PHAssetResourceRequestDelegate;

@interface PHAssetResourceWriteRequest : NSObject <PHAssetResourceRequestDelegate, PHAssetResourceRequest>
{
    PHAssetResourceRequest *_dataRequest;
    NSError *_error;
    struct os_unfair_lock_s _completionHandlerLock;
    int _requestID;
    PHAssetResource *_assetResource;
    PHAssetResourceRequestOptions *_options;
    unsigned long long _managerID;
    id <PHAssetResourceRequestDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_info;
    NSString *_taskIdentifier;
    NSURL *_destinationFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *destinationFileURL; // @synthesize destinationFileURL=_destinationFileURL;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) __weak id <PHAssetResourceRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) PHAssetResourceRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) PHAssetResource *assetResource; // @synthesize assetResource=_assetResource;
- (void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2;
- (void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2;
- (void)startRequest;
- (void)cancel;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)setErrorIfNone:(id)arg1;
- (id)initWithAssetResource:(id)arg1 destinationFileURL:(id)arg2 options:(id)arg3 requestID:(int)arg4 managerID:(unsigned long long)arg5 delegate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
