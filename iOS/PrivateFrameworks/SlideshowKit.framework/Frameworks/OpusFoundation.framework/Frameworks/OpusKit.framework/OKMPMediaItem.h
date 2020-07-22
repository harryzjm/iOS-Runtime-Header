//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItem;

@interface OKMPMediaItem
{
    MPMediaItem *_mediaItem;
}

+ (id)urlForMPAsset:(id)arg1;
+ (id)urlForMediaObject:(id)arg1;
+ (_Bool)isRemote;
+ (id)scheme;
@property(retain) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (_Bool)wantsDiskCachedMetadata;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resolveAssetIfNeeded;
- (void)setMediaObject:(id)arg1;
- (id)mediaObject;
- (void)dealloc;
- (id)initWithMPMediaItem:(id)arg1;
- (id)init;

@end
