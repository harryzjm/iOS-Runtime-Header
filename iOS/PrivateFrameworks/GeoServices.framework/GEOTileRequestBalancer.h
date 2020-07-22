//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOTileRequestBalancer : NSObject
{
    void *_requesters;
    void *_randomIndexGenerator;
}

+ (id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
- (__wrap_iter_9a08789a)_next_requester;
- (void)_startOperationsWithAvailableCount:(int)arg1;
- (void)_startOperations;
- (void)_requester:(id)arg1 removeTileKey:(struct _GEOTileKey)arg2;
- (void)requester:(id)arg1 removeTileKey:(const struct _GEOTileKey *)arg2;
- (void)_requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(struct _GEOTileKey)arg3;
- (void)requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned int)arg2;
- (void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)_pruneEmptyRequesters;
- (void)_removeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
- (vector_49336e52 *)requesters;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
