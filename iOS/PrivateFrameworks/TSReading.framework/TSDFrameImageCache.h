//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDFrameImageCache : NSObject
{
    NSMutableArray *mEntries;
}

+ (id)sharedFrameImageCache;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)p_newEntryForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(_Bool)arg4;
- (struct CGImage *)setCachedImage:(struct CGImage *)arg1 forFrame:(id)arg2 size:(struct CGSize)arg3 viewScale:(double)arg4 forCALayer:(_Bool)arg5 mask:(_Bool)arg6;
- (struct CGImage *)newCachedImageForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 forCALayer:(_Bool)arg4 mask:(_Bool)arg5;
- (void)dealloc;
- (id)init;
- (void)didCloseDocument;

@end

