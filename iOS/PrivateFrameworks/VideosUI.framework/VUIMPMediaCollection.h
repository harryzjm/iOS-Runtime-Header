//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIMPMediaEntityImageLoadParamsCreating-Protocol.h>

@class MPMediaItemCollection, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaCollection <VUIMPMediaEntityImageLoadParamsCreating>
{
    NSString *_coverArtImageIdentifier;
    MPMediaItemCollection *_mediaItemCollection;
}

@property(retain, nonatomic) MPMediaItemCollection *mediaItemCollection; // @synthesize mediaItemCollection=_mediaItemCollection;
- (void).cxx_destruct;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)assetController;
- (id)showIdentifier;
- (id)playedState;
- (id)coverArtImageIdentifier;
- (id)contentRating;
- (id)HLSAudioCapability;
- (id)HLSColorCapability;
- (id)HLSResolution;
- (id)audioCapability;
- (id)colorCapability;
- (id)resolution;
- (id)isLocal;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5;

@end

