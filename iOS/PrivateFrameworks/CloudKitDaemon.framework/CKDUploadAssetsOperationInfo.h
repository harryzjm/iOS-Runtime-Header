//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo
{
    _Bool _temporary;
    _Bool _shouldCloneFileInAssetCache;
    NSArray *_assetsToUpload;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCloneFileInAssetCache; // @synthesize shouldCloneFileInAssetCache=_shouldCloneFileInAssetCache;
@property(nonatomic) _Bool temporary; // @synthesize temporary=_temporary;
@property(retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // @synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties;
@property(retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(retain, nonatomic) NSArray *assetsToUpload; // @synthesize assetsToUpload=_assetsToUpload;

@end

