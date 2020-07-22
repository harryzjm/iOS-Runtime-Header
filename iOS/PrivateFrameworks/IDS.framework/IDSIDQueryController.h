//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSInternalQueueController, _IDSIDQueryController;

@interface IDSIDQueryController : NSObject
{
    _IDSIDQueryController *_internal;
    IDSInternalQueueController *_queueController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)participantsForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (id)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (long long)_refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;
- (_Bool)_flushQueryCacheForService:(id)arg1;
- (_Bool)_warmupQueryCacheForService:(id)arg1;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (_Bool)_hasCacheForService:(id)arg1;
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end
