//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface OKMediaImage : NSObject
{
    struct CGImage *_cgImageRef;
    long long _imageOrientation;
    double _scale;
}

+ (id)mediaImageWithUIImage:(id)arg1;
+ (id)mediaImageWithCGImage:(struct CGImage *)arg1;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (struct CGImage *)createComposedImage:(_Bool)arg1 colorSpace:(id)arg2;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (void)dealloc;
- (id)initWithUIImage:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 imageOrientation:(long long)arg2 scale:(double)arg3;
- (id)init;

@end

