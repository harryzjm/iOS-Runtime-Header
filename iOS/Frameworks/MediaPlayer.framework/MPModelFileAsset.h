//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPModelFileAsset
{
    _Bool _nonPurgeable;
    NSString *_filePath;
    unsigned long long _fileSize;
    long long _protectionType;
    long long _qualityType;
    NSString *_purchaseBundleFilePath;
}

+ (id)allSupportedProperties;
+ (id)__MPModelPropertyFileAssetQualityType__PROPERTY;
+ (id)__qualityType__KEY;
+ (id)__MPModelPropertyFileAssetPurchaseBundleFilePath__PROPERTY;
+ (id)__purchaseBundleFilePath__KEY;
+ (id)__MPModelPropertyFileAssetProtectionType__PROPERTY;
+ (id)__protectionType__KEY;
+ (id)__MPModelPropertyFileAssetNonPurgeable__PROPERTY;
+ (id)__nonPurgeable__KEY;
+ (id)__MPModelPropertyFileAssetFileSize__PROPERTY;
+ (id)__fileSize__KEY;
+ (id)__MPModelPropertyFileAssetFilePath__PROPERTY;
+ (id)__filePath__KEY;
@property(copy, nonatomic) NSString *purchaseBundleFilePath; // @synthesize purchaseBundleFilePath=_purchaseBundleFilePath;
@property(nonatomic) long long qualityType; // @synthesize qualityType=_qualityType;
@property(nonatomic, getter=isNonPurgeable) _Bool nonPurgeable; // @synthesize nonPurgeable=_nonPurgeable;
@property(nonatomic) long long protectionType; // @synthesize protectionType=_protectionType;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;

@end

