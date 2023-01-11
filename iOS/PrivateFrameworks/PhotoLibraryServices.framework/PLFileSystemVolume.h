//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSURL;

@interface PLFileSystemVolume
{
    NSURL *_url;
}

+ (id)volumeForObjectUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForVolumeUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForURL:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityName;
- (void).cxx_destruct;
- (id)predictedURL;
- (void)_unregisterWithVolumeManager;
- (void)_registerWithVolumeManager;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, nonatomic) _Bool isOffline;
@property(copy, nonatomic) NSURL *url;
- (_Bool)supportsCloudUpload;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *volumeUuidString; // @dynamic volumeUuidString;

@end
