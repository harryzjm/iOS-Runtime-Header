//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegationConsumerServiceProtocolHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (void)getResponseForStartDelegationRequest:(id)arg1 requestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getResponseForFinishDelegationRequest:(id)arg1 withSessionIDToRequestInfoMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

