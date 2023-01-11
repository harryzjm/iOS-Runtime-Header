//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLWriteableResource-Protocol.h>

@class NSString;
@protocol PLAssetID, PLCodecIdentity, PLColorSpaceIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@interface PLVirtualResource : NSObject <PLWriteableResource>
{
    short _version;
    short _resourceType;
    short _localAvailabilityTarget;
    short _remoteAvailability;
    short _remoteAvailabilityTarget;
    unsigned int _recipeID;
    unsigned int _orientation;
    int _qualitySortValue;
    id <PLAssetID> _assetID;
    id <PLResourceDataStore> _dataStore;
    long long _dataStoreSubtype;
    id <PLResourceDataStoreKey> _dataStoreKey;
    long long _unorientedWidth;
    long long _unorientedHeight;
    id <PLCodecIdentity> _codecID;
    id <PLColorSpaceIdentity> _colorSpaceID;
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    NSString *_fingerprint;
    long long _dataLength;
}

@property(nonatomic) long long dataLength; // @synthesize dataLength=_dataLength;
@property(retain, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (void)setQualitySortValue:(int)arg1;
@property(readonly, nonatomic) int qualitySortValue;
- (void)setUniformTypeIdentifierID:(id)arg1;
@property(readonly, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
- (void)setColorSpaceID:(id)arg1;
@property(readonly, nonatomic) id <PLColorSpaceIdentity> colorSpaceID;
- (void)setCodecID:(id)arg1;
@property(readonly, nonatomic) id <PLCodecIdentity> codecID;
- (void)setUnorientedHeight:(long long)arg1;
@property(readonly, nonatomic) long long unorientedHeight;
- (void)setUnorientedWidth:(long long)arg1;
@property(readonly, nonatomic) long long unorientedWidth;
- (void)setOrientation:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int orientation;
@property(readonly, nonatomic) short remoteAvailabilityTarget; // @synthesize remoteAvailabilityTarget=_remoteAvailabilityTarget;
- (void)setRemoteAvailability:(short)arg1;
@property(readonly, nonatomic) short remoteAvailability;
@property(readonly, nonatomic) short localAvailabilityTarget; // @synthesize localAvailabilityTarget=_localAvailabilityTarget;
- (void)setDataStoreKey:(id)arg1;
@property(readonly, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
- (void)setDataStoreSubtype:(long long)arg1;
@property(readonly, nonatomic) long long dataStoreSubtype;
- (void)setDataStore:(id)arg1;
@property(readonly, nonatomic) id <PLResourceDataStore> dataStore;
- (void)setRecipeID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int recipeID;
- (void)setResourceType:(short)arg1;
@property(readonly, nonatomic) short resourceType;
- (void)setVersion:(short)arg1;
@property(readonly, nonatomic) short version;
@property(readonly, copy, nonatomic) id <PLAssetID> assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)photosCTLJSONDict;
@property(readonly, nonatomic) long long orientedHeight; // @dynamic orientedHeight;
@property(readonly, nonatomic) long long orientedWidth; // @dynamic orientedWidth;
@property(readonly, nonatomic) short localAvailability;
@property(readonly, nonatomic) unsigned long long cplType; // @dynamic cplType;
- (_Bool)isPrimaryUTI;
- (_Bool)isDerivative;
- (_Bool)isDefaultOrientation;
- (id)initWithRecipe:(id)arg1 forAsset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

