//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject
{
    struct atomic_flag _cancelFlag;
    _Bool _cancelRequested;
    PHImageDecoder *_initialDecoder;
    unsigned long long _figRequestID;
    struct FigPhotoDecompressionContainer *_figDecompressionContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) struct FigPhotoDecompressionContainer *figDecompressionContainer; // @synthesize figDecompressionContainer=_figDecompressionContainer;
@property(nonatomic) unsigned long long figRequestID; // @synthesize figRequestID=_figRequestID;
@property(readonly, nonatomic) PHImageDecoder *initialDecoder; // @synthesize initialDecoder=_initialDecoder;
- (void)dealloc;
@property(readonly, nonatomic) _Bool cancelRequested;
- (void)cancel;
- (id)initWithImageIODecoder:(id)arg1;
- (id)initWithFigRequestID:(unsigned long long)arg1 container:(struct FigPhotoDecompressionContainer *)arg2 figDecoder:(id)arg3;

@end
