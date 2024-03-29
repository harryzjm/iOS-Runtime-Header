//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHASEListener, REPHASEContext;

__attribute__((visibility("hidden")))
@interface REPHASEAudioScene : NSObject
{
    struct unique_ptr<re::HashTable<unsigned long long, REPHASEEntity *>, std::function<void (re::HashTable<unsigned long long, REPHASEEntity *>*)>> _entities;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEListener *>, std::function<void (re::HashTable<unsigned long long, PHASEListener *>*)>> _listeners;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEObject *>, std::function<void (re::HashTable<unsigned long long, PHASEObject *>*)>> _sessionRootObjects;
    struct HashTable<unsigned long long, PHASESource *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> _sources;
    struct vector<PendingListener, std::allocator<PendingListener>> pendingListeners;
    REPHASEContext *_context;
    PHASEListener *_systemListener;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)destroy;
- (void)createAudioSessionRootWithID:(unsigned long long)arg1 sessionUUID:(id)arg2;
- (void)createPendingListenersIfReady;
- (void)createListenerWithID:(unsigned long long)arg1 listenerType:(unsigned char)arg2;
- (void)removeEntity:(unsigned long long)arg1;
- (void *)getAllEntities;
- (id)getEntity:(unsigned long long)arg1;
- (id)getOrCreateEntity:(unsigned long long)arg1;
- (void *)sessionRootObjects;
- (void *)sources;
- (void *)listeners;
@property(readonly) _Bool isValid;
- (id)initWithContext:(id)arg1;

@end

