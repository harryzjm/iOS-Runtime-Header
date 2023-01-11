//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSKeyRegistrySyncHandler : NSObject
{
    NSMutableDictionary *_keyRegistrySyncMetadataByServiceName;
    NSMutableDictionary *_lastSuccessfulKeyRegistrySyncByServiceName;
    NSObject<OS_dispatch_queue> *_keyRegistrySyncQueue;
}

+ (id)sharedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *keyRegistrySyncQueue; // @synthesize keyRegistrySyncQueue=_keyRegistrySyncQueue;
@property(retain, nonatomic) NSMutableDictionary *lastSuccessfulKeyRegistrySyncByServiceName; // @synthesize lastSuccessfulKeyRegistrySyncByServiceName=_lastSuccessfulKeyRegistrySyncByServiceName;
@property(retain, nonatomic) NSMutableDictionary *keyRegistrySyncMetadataByServiceName; // @synthesize keyRegistrySyncMetadataByServiceName=_keyRegistrySyncMetadataByServiceName;
- (void).cxx_destruct;
- (void)synchronizeUserKeyRegistryForService:(id)arg1 shouldThrottle:(_Bool)arg2 onBehalfOfContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_registerAndPerformKeyRegistrySyncForService:(id)arg1 shouldThrottle:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)serviceKeyForServiceName:(id)arg1;
- (id)init;

@end

