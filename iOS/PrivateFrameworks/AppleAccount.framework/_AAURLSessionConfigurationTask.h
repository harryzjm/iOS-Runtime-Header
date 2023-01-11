//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAURLSessionTaskProtocol-Protocol.h>

@class AAURLSession, NSString, NSURLRequest;
@protocol AAURLSessionTaskProtocol;

@interface _AAURLSessionConfigurationTask : NSObject <AAURLSessionTaskProtocol>
{
    CDUnknownBlockType _completion;
    struct os_unfair_lock_s _unfairLock;
    struct {
        unsigned int isCanceled:1;
        unsigned int isFetchingConfiguration:1;
    } _flags;
    id <AAURLSessionTaskProtocol> _configurationTask;
    id <AAURLSessionTaskProtocol> _sessionTask;
    AAURLSession *_session;
    NSURLRequest *_originalRequest;
}

@property(readonly, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) AAURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)_invokeCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_initiateSessionTaskWithConfiguration:(id)arg1;
- (void)_unfairLock_initiateConfigurationTask;
- (id)initWithSession:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
