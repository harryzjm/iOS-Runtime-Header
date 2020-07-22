//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLImageFormat;

@interface PHAssetResourceQualityClass : NSObject
{
    _Bool _video;
    _Bool _croppedToSquare;
    _Bool _table;
    _Bool _thumbnail;
    PLImageFormat *_backingImageFormat;
    unsigned long long _backingCPLResourceType;
    unsigned long long _maxSideLengthIfSquare;
    unsigned long long _maxNumberOfPixelsIfSquare;
}

+ (id)anyQualityClassMatchingPredicate:(id)arg1;
+ (id)allQualityClassesMatchingPredicate:(id)arg1;
+ (id)assetResourceQualityClasses;
+ (id)_cplDerivativeAssetResourceQualityClasses;
+ (id)_thumbnailAssetResourceQualityClassesForCurrentDevice;
@property(readonly, nonatomic) unsigned long long maxNumberOfPixelsIfSquare; // @synthesize maxNumberOfPixelsIfSquare=_maxNumberOfPixelsIfSquare;
@property(readonly, nonatomic) unsigned long long maxSideLengthIfSquare; // @synthesize maxSideLengthIfSquare=_maxSideLengthIfSquare;
@property(readonly, nonatomic, getter=isThumbnail) _Bool thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic, getter=isTable) _Bool table; // @synthesize table=_table;
@property(readonly, nonatomic, getter=isCroppedToSquare) _Bool croppedToSquare; // @synthesize croppedToSquare=_croppedToSquare;
@property(readonly, nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic) unsigned long long backingCPLResourceType; // @synthesize backingCPLResourceType=_backingCPLResourceType;
@property(retain, nonatomic) PLImageFormat *backingImageFormat; // @synthesize backingImageFormat=_backingImageFormat;
- (void).cxx_destruct;
- (id)description;
- (long long)_compare:(id)arg1;
- (id)initWithCPLResourceType:(unsigned long long)arg1;
- (id)initWithThumbnailFormat:(id)arg1;

@end

