//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol C2NetworkingDelegate, NSURLSessionDelegate><C2RequestDelegate;

@interface C2NetworkingDelegateURLSession : NSObject
{
    NSObject<C2NetworkingDelegate> *_networkingDelegate;
    NSString *_sessionDescription;
    NSOperationQueue *_delegateQueue;
    NSURLSessionConfiguration *_configuration;
    id <NSURLSessionDelegate><C2RequestDelegate> _sessionDelegate;
}

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <NSURLSessionDelegate><C2RequestDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(copy) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
@property(nonatomic) __weak NSObject<C2NetworkingDelegate> *networkingDelegate; // @synthesize networkingDelegate=_networkingDelegate;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (void)invalidateAndCancel;
- (id)dataTaskWithRequest:(id)arg1;

@end
