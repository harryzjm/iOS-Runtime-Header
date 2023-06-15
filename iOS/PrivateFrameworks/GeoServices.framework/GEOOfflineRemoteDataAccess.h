//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOXPCConnection, NSString;

__attribute__((visibility("hidden")))
@interface GEOOfflineRemoteDataAccess : NSObject
{
    struct GEOOnce_s _createdConnection;
    GEOXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)offlineTileMetadataWithError:(id *)arg1;
- (void)getOfflineVersionMetadataWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getAvailableKeysForLayer:(unsigned int)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)hasDataForKey:(id)arg1 error:(id *)arg2;
- (void)hasDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (void)getDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_ensureConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

