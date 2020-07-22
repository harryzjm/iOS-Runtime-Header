//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVVideoComposition;

__attribute__((visibility("hidden")))
@interface _PULivePhotoTrimScrubberLoupeViewImageRequest : NSObject
{
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    struct CGSize _imageSize;
    CDStruct_1b6d18a9 _sourceTime;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) CDStruct_1b6d18a9 sourceTime; // @synthesize sourceTime=_sourceTime;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isValid;

@end

