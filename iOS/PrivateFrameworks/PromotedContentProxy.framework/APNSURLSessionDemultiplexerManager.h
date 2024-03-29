//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APOrderedMutableDictionary, APProxySessionConfigurationProvider, APUnfairRecursiveLock, NSOperationQueue;

@interface APNSURLSessionDemultiplexerManager : NSObject
{
    APOrderedMutableDictionary *_sessionDemultiplexerForIdentifier;
    NSOperationQueue *_sessionSharedDelegateQueue;
    APProxySessionConfigurationProvider *_sessionConfigProvider;
    APUnfairRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) APUnfairRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) APProxySessionConfigurationProvider *sessionConfigProvider; // @synthesize sessionConfigProvider=_sessionConfigProvider;
@property(retain, nonatomic) NSOperationQueue *sessionSharedDelegateQueue; // @synthesize sessionSharedDelegateQueue=_sessionSharedDelegateQueue;
@property(retain, nonatomic) APOrderedMutableDictionary *sessionDemultiplexerForIdentifier; // @synthesize sessionDemultiplexerForIdentifier=_sessionDemultiplexerForIdentifier;
- (long long)pretapRequestCountForIdentifier:(id)arg1;
- (void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1;
- (void)_unregisterSessionDemultiplexerWithIdentifier:(id)arg1;
- (void)_unregisterOldSessionIfRequired;
- (id)_getSessionDemultiplexerForId:(id)arg1 maximumRequestCount:(long long)arg2;
- (id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2;
- (id)initWithProxySessionConfigProvider:(id)arg1;

@end

