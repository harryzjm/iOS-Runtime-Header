//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription
{
}

+ (id)listOfSyncedProperties;
+ (id)entityName;
- (void)willSave;
- (void)prepareForDeletion;
- (_Bool)isSyncableChange;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *longDescription; // @dynamic longDescription;

@end
