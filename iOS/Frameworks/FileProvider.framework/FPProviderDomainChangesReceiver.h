//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPPacer, NSDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPProviderDomainChangesReceiver : NSObject
{
    NSMutableSet *_changesHandlers;
    NSDictionary *_providerDomainsByID;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    int _settingsChangedToken;
    FPPacer *_pacer;
}

+ (id)sharedChangesReceiverIfAvailable;
+ (id)sharedChangesReceiver;
+ (id)_sharedChangesReceiverInitIfNeeded:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *cachedProviderDomainsByID;
- (void)providerDomainsHaveChanged:(id)arg1 error:(id)arg2;
- (void)callChangesHandlersWithProviderDomains:(id)arg1 error:(id)arg2;
- (void)updateProviderDomainsWithAttemptCount:(unsigned long long)arg1;
- (void)signalChange;
- (void)_t_discardCache;
- (void)removeChangesHandlerToken:(id)arg1;
- (id)addChangesHandler:(CDUnknownBlockType)arg1;
- (id)_init;

@end

