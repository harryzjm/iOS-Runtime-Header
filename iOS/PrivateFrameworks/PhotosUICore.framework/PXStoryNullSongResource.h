//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStorySongResource-Protocol.h>

@class NSString;
@protocol PXAudioAsset;

@interface PXStoryNullSongResource : NSObject <PXStorySongResource>
{
    NSString *_identifier;
    long long _resourceKind;
    id <PXAudioAsset> _asset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXAudioAsset> px_storyResourceSongAsset; // @synthesize px_storyResourceSongAsset=_asset;
@property(readonly, nonatomic) long long px_storyResourceKind; // @synthesize px_storyResourceKind=_resourceKind;
@property(readonly, nonatomic) NSString *px_storyResourceIdentifier; // @synthesize px_storyResourceIdentifier=_identifier;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
