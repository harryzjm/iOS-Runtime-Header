//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface PUWallpaperPosterLegacyAsset : NSObject
{
    struct CGImage *_proxyImage;
}

@property(readonly, nonatomic) struct CGImage *proxyImage; // @synthesize proxyImage=_proxyImage;
- (int)loadPetsRegions:(CDUnknownBlockType)arg1;
- (int)loadParallaxResource:(long long)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)cancelPetsRegionsRequest:(int)arg1;
- (void)cancelParallaxResourceRequest:(int)arg1;
- (void)updateSegmentationResource:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *segmentationResourceURL;
@property(readonly, nonatomic) _Bool supportsSegmentationResourceCaching;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSArray *petRegions;
@property(readonly, nonatomic) NSArray *faceRegions;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
- (id)initWithProxyImage:(struct CGImage *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

