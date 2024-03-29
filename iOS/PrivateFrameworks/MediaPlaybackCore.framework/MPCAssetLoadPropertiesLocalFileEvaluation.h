//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelFileAsset, NSString;

__attribute__((visibility("hidden")))
@interface MPCAssetLoadPropertiesLocalFileEvaluation : NSObject
{
    _Bool _fileMatchesRequiredFileFormat;
    _Bool _fileMatchesRequiredQuality;
    _Bool _fileIsDownloaded;
    _Bool _fileIsCached;
    _Bool _fileIsHLS;
    MPModelFileAsset *_fileAsset;
    long long _status;
    long long _recommendation;
    long long _fileAssetType;
    long long _expectedAssetType;
    long long _fileQualityType;
    long long _expectedQualityType;
    NSString *_filePath;
    long long _HLSContentPolicy;
}

- (void).cxx_destruct;
@property(nonatomic) long long HLSContentPolicy; // @synthesize HLSContentPolicy=_HLSContentPolicy;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long expectedQualityType; // @synthesize expectedQualityType=_expectedQualityType;
@property(nonatomic) long long fileQualityType; // @synthesize fileQualityType=_fileQualityType;
@property(nonatomic) long long expectedAssetType; // @synthesize expectedAssetType=_expectedAssetType;
@property(nonatomic) long long fileAssetType; // @synthesize fileAssetType=_fileAssetType;
@property(nonatomic) _Bool fileIsHLS; // @synthesize fileIsHLS=_fileIsHLS;
@property(nonatomic) _Bool fileIsCached; // @synthesize fileIsCached=_fileIsCached;
@property(nonatomic) _Bool fileIsDownloaded; // @synthesize fileIsDownloaded=_fileIsDownloaded;
@property(nonatomic) _Bool fileMatchesRequiredQuality; // @synthesize fileMatchesRequiredQuality=_fileMatchesRequiredQuality;
@property(nonatomic) _Bool fileMatchesRequiredFileFormat; // @synthesize fileMatchesRequiredFileFormat=_fileMatchesRequiredFileFormat;
@property(nonatomic) long long recommendation; // @synthesize recommendation=_recommendation;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(readonly, nonatomic) _Bool fileShouldBeUpdated;
@property(readonly, nonatomic) _Bool fileIsValid;
- (id)humanDescription;
- (id)description;
- (id)initWithFileAsset:(id)arg1;

@end

