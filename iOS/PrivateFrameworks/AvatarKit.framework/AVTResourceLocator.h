//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface AVTResourceLocator : NSObject
{
    NSURL *_resourcesURL;
    NSURL *_componentsURL;
}

+ (id)sharedResourceLocator;
- (void).cxx_destruct;
@property(readonly) NSURL *propsURL;
@property(readonly) NSURL *presetThumbnailsURL;
@property(readonly) NSURL *materialsURL;
@property(readonly) NSURL *maskImagesURL;
@property(readonly) NSURL *componentsURL; // @synthesize componentsURL=_componentsURL;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2;
@property(readonly) NSURL *animojiResourcesURL;
@property(readonly) NSURL *memojiResourcesURL;
@property(readonly) NSURL *resourcesURL; // @synthesize resourcesURL=_resourcesURL;

@end

