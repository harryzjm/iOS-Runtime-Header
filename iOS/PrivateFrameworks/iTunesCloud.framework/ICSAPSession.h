//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICFPSAPContext, ICStoreRequestContext, NSOperationQueue, NSURL;
@protocol OS_dispatch_queue;

@interface ICSAPSession : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
    unsigned int _sapVersion;
    NSURL *_certificateURL;
    NSURL *_setupURL;
    ICFPSAPContext *_sapContext;
    NSOperationQueue *_prepareFairPlayContextOperationQueue;
    ICStoreRequestContext *_requestContext;
}

+ (id)sharedSAPSessionWithVersion:(unsigned int)arg1 URLBag:(id)arg2 requestContext:(id)arg3;
@property(readonly, nonatomic) unsigned int sapVersion; // @synthesize sapVersion=_sapVersion;
@property(readonly, copy, nonatomic) ICStoreRequestContext *_requestContext; // @synthesize _requestContext;
@property(readonly, nonatomic) NSOperationQueue *_prepareFairPlayContextOperationQueue; // @synthesize _prepareFairPlayContextOperationQueue;
@property(retain, nonatomic, setter=_setSAPContext:) ICFPSAPContext *_sapContext; // @synthesize _sapContext;
@property(readonly, copy, nonatomic) NSURL *_setupURL; // @synthesize _setupURL;
@property(readonly, copy, nonatomic) NSURL *_certificateURL; // @synthesize _certificateURL;
- (void).cxx_destruct;
- (void)verifySignatureData:(id)arg1 forData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)signData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithVersion:(unsigned int)arg1 certificateURL:(id)arg2 setupURL:(id)arg3 requestContext:(id)arg4;

@end
