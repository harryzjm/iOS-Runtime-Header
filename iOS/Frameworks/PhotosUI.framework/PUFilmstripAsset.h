//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUDisplayAsset-Protocol.h>

@class AVAsset, CLLocation, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PUFilmstripAsset : NSObject <PUDisplayAsset>
{
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    _Bool __isSourceTimeAccurate;
    double _sourceTime;
    AVAsset *__asset;
    double __normalizedTime;
}

@property(nonatomic, setter=_setSourceTimeAccurate:) _Bool _isSourceTimeAccurate; // @synthesize _isSourceTimeAccurate=__isSourceTimeAccurate;
@property(nonatomic, setter=_setNormalizedTime:) double _normalizedTime; // @synthesize _normalizedTime=__normalizedTime;
@property(nonatomic, setter=_setAsset:) AVAsset *_asset; // @synthesize _asset=__asset;
@property(nonatomic) double sourceTime; // @synthesize sourceTime=_sourceTime;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long originalFilesize;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly, nonatomic) _Bool isTemporaryPlaceholder;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) double aspectRatio;
- (unsigned long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic, getter=isLivePhoto) _Bool livePhoto;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
- (void)loadSourceTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithNormalizedTime:(double)arg1 asset:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

