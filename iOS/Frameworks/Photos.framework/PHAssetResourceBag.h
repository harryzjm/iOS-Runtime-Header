//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PHAssetCreationRequest, PHExternalAssetResource;

@interface PHAssetResourceBag : NSObject
{
    NSArray *_assetResourceContexts;
    _Bool _didValidateForInsertion;
    _Bool _valid;
    _Bool _hasAdjustments;
    _Bool _hasRAW;
    PHAssetCreationRequest *_assetCreationRequest;
    NSArray *_assetResources;
    long long _mediaType;
    unsigned long long _mediaSubtype;
    PHExternalAssetResource *_primaryResource;
}

+ (id)_primaryAssetResource:(id)arg1;
+ (_Bool)supportsAssetResourceTypes:(id)arg1 mediaType:(long long *)arg2;
+ (_Bool)_supportsAssetResourceTypes:(id)arg1 mediaType:(long long *)arg2 mediaSubtype:(unsigned long long *)arg3;
@property(readonly, nonatomic) PHExternalAssetResource *primaryResource; // @synthesize primaryResource=_primaryResource;
@property(readonly, nonatomic) unsigned long long mediaSubtype; // @synthesize mediaSubtype=_mediaSubtype;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) _Bool hasRAW; // @synthesize hasRAW=_hasRAW;
@property(readonly, nonatomic) _Bool hasAdjustments; // @synthesize hasAdjustments=_hasAdjustments;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) _Bool didValidateForInsertion; // @synthesize didValidateForInsertion=_didValidateForInsertion;
@property(readonly, nonatomic) NSArray *assetResources; // @synthesize assetResources=_assetResources;
@property(readonly, nonatomic) __weak PHAssetCreationRequest *assetCreationRequest; // @synthesize assetCreationRequest=_assetCreationRequest;
- (void).cxx_destruct;
- (id)validatedDataForAssetResource:(id)arg1;
- (id)validatedURLForAssetResource:(id)arg1;
- (id)_validatedContextForResource:(id)arg1;
- (_Bool)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (_Bool)_extractValidatedAdjustmentsURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_extractValidatedAudioURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_extractValidatedVideoURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_extractValidatedImageURL:(id *)arg1 imageData:(id *)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id *)arg5;
- (id)assetResourceWithType:(long long)arg1;
- (id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2;

@end

