//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject
{
    int mQuality;
    float mCanvasScale;
    NSMutableDictionary *mImageMap;
}

@property(readonly, nonatomic) int quality; // @synthesize quality=mQuality;
- (struct CGImage *)degradedImageRefForProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)cacheProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithQuality:(int)arg1 canvasScale:(float)arg2;

@end

