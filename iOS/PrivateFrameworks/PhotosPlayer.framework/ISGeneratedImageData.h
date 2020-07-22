//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/NSCopying-Protocol.h>

@interface ISGeneratedImageData : NSObject <NSCopying>
{
    struct __CVBuffer *_imageBuffer;
    struct CGImage *_imageRef;
    id _contents;
    struct CGAffineTransform _preferredTransform;
}

@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(readonly, nonatomic) id contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
@property(readonly, nonatomic) struct __CVBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithImageBuffer:(struct __CVBuffer *)arg1;
- (id)initWithCGImageRef:(struct CGImage *)arg1;
- (id)_initWithImageContent:(id)arg1;

@end

