//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ImageProcessing_CoreImageUtils : NSObject
{
}

+ (struct vImage_Buffer)newVImageBufferFromCIImage:(id)arg1 error:(id *)arg2;
+ (struct CGImage *)newCGImageFromCIImage:(id)arg1 error:(id *)arg2;
+ (id)newCIImageFromVImage:(struct vImage_Buffer *)arg1 withType:(int)arg2 error:(id *)arg3;

@end

