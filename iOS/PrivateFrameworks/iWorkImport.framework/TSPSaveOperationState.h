//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

__attribute__((visibility("hidden")))
@interface TSPSaveOperationState : NSObject
{
    NSMapTable *_newDataStorages;
    NSHashTable *_remoteData;
    int _sampleID;
    long long _updateType;
}

@property(nonatomic) int sampleID; // @synthesize sampleID=_sampleID;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool inheritPermissions;
@property(readonly, nonatomic) _Bool preserveDocumentUUID;
@property(readonly, nonatomic) _Bool shouldUpdate;
@property(readonly, nonatomic) _Bool hasRemoteData;
- (void)addRemoteData:(id)arg1;
- (void)enumerateDatasAndStoragesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasNewStorageForData:(id)arg1;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (id)initWithUpdateType:(long long)arg1;
- (id)init;

@end

