//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, UIImage;

@interface ICAttachmentPreviewImageLoader : NSObject
{
    _Bool _delayLoadingURLs;
    CDUnknownBlockType _imageDidLoadBlock;
    struct UIImage *_image;
    struct UIImage *_originalImage;
    struct UIImage *_orientedImage;
    NSData *_data;
    double _scale;
    NSArray *_previewImageURLs;
    long long _imageOrientation;
}

+ (struct UIImage *)orientedImage:(struct UIImage *)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;
+ (struct UIImage *)orientedImage:(struct UIImage *)arg1 withBackground:(int)arg2;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) _Bool delayLoadingURLs; // @synthesize delayLoadingURLs=_delayLoadingURLs;
@property(copy, nonatomic) NSArray *previewImageURLs; // @synthesize previewImageURLs=_previewImageURLs;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIImage *orientedImage; // @synthesize orientedImage=_orientedImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType imageDidLoadBlock; // @synthesize imageDidLoadBlock=_imageDidLoadBlock;
- (void).cxx_destruct;
- (struct UIImage *)loadOrientedImage;
- (struct UIImage *)loadImage;
- (_Bool)canLoadImage;
- (void)loadData;
- (id)initWithOriginalImage:(struct UIImage *)arg1 orientedImage:(struct UIImage *)arg2 data:(id)arg3 scale:(double)arg4 previewImageURLs:(id)arg5 delayLoadingURLs:(_Bool)arg6;

@end

