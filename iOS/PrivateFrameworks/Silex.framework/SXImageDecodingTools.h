//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSOperationQueue;

@interface SXImageDecodingTools : NSObject
{
    CALayer *_rootLayer;
    NSOperationQueue *_decodingQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *decodingQueue; // @synthesize decodingQueue=_decodingQueue;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void).cxx_destruct;
- (_Bool)dataIsAnimatedImage:(id)arg1;
- (struct __CFString *)contentTypeForImageData:(id)arg1;
- (id)loadAnimatedImageFromImageData:(id)arg1;
- (struct CGImage *)newImageByDecodingImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
- (id)decodeImage:(struct CGImage *)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)imageFromData:(id)arg1;
- (id)imageFromData:(id)arg1 size:(struct CGSize)arg2;
- (void)loadImageFromImageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
