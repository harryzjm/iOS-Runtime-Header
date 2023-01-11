//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface AVTResourceLocator : NSObject
{
    NSMutableDictionary *_imageCache;
    NSURL *_resourcesURL;
    NSURL *_componentsURL;
}

+ (id)_resourcePathInDirectoryURL:(id)arg1 subDirectory:(id)arg2 name:(id)arg3 ofType:(id)arg4;
+ (id)sharedResourceLocator;
- (void).cxx_destruct;
- (struct CGImage *)imageWithPath:(id)arg1;
@property(readonly) NSURL *propsURL;
@property(readonly) NSURL *presetThumbnailsURL;
@property(readonly) NSURL *materialsURL;
@property(readonly) NSURL *componentsURL; // @synthesize componentsURL=_componentsURL;
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2;
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2;
@property(readonly) NSURL *poseResourcesURL;
@property(readonly) NSURL *stickerResourcesURL;
@property(readonly) NSURL *animojiResourcesURL;
@property(readonly) NSURL *memojiResourcesURL;
- (id)resourcesURLForPathComponent:(id)arg1;
@property(readonly) NSURL *resourcesURL; // @synthesize resourcesURL=_resourcesURL;
- (id)init;

@end
