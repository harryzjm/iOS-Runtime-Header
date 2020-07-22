//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface WBSURLCredentialCache : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_credentialCache;
    CDUnknownBlockType _credentialFetchBlock;
}

- (void).cxx_destruct;
- (void)getCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSDictionary *credentials;
- (void)invalidate;
- (id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(CDUnknownBlockType)arg2;
- (id)initWithCredentialFetchBlock:(CDUnknownBlockType)arg1;

@end

