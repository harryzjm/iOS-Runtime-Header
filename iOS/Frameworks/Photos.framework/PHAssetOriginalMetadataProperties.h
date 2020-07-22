//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PHAssetOriginalMetadataProperties
{
    short _originalExifOrientation;
    NSString *_originalAssetsUUID;
    long long _originalHeight;
    long long _originalWidth;
    NSString *_originalFilename;
    unsigned long long _originalFilesize;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, nonatomic) unsigned long long originalFilesize; // @synthesize originalFilesize=_originalFilesize;
@property(readonly, nonatomic) short originalExifOrientation; // @synthesize originalExifOrientation=_originalExifOrientation;
@property(readonly, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, nonatomic) long long originalWidth; // @synthesize originalWidth=_originalWidth;
@property(readonly, nonatomic) long long originalHeight; // @synthesize originalHeight=_originalHeight;
@property(readonly, nonatomic) NSString *originalAssetsUUID; // @synthesize originalAssetsUUID=_originalAssetsUUID;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
