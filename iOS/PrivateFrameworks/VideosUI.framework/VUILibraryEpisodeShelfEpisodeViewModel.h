//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIMediaItem;
@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeShelfEpisodeViewModel : NSObject
{
    VUIMediaItem *_episode;
    NSObject<VUIMediaEntityAssetController> *_assetController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) VUIMediaItem *episode; // @synthesize episode=_episode;

@end

