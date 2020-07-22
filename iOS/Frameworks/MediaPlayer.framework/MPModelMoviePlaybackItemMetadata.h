//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelGenericObject, MPModelMovie;

@interface MPModelMoviePlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelMovie *_movie;
}

+ (id)requiredProperties;
@property(retain, nonatomic) MPModelMovie *movie; // @synthesize movie=_movie;
- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)storeAsset;
- (id)playbackPosition;
- (id)localFileAsset;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeAdamID;
- (id)modelGenericObject;
- (id)mediaItem;
- (_Bool)isExplicitTrack;
- (double)expectedDuration;
- (unsigned long long)contentType;
- (id)contentTitle;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (_Bool)allowsInitiatingPlayWhileDownload;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

