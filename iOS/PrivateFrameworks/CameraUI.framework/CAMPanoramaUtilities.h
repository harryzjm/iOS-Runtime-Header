//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMPanoramaUtilities : NSObject
{
}

+ (double)singlePreviewFrameWidthForPreviewHeight:(double)arg1;
+ (struct CGSize)bufferSize;
+ (struct UIEdgeInsets)panoramaViewPreviewStripInsetsForLayoutStyle:(long long)arg1;
+ (struct UIEdgeInsets)panoramaViewLayoutInsetsForLayoutStyle:(long long)arg1;
+ (struct CGSize)panoramaViewSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (struct CGSize)previewStripSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (struct CGSize)defaultPreviewSize;

@end
