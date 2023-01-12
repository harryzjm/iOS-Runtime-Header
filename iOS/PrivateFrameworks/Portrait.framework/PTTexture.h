//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTTexture : NSObject
{
    _Bool _YCbCrFullRange;
    NSString *_colorPrimaries;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    long long _YCbCrColorDepth;
}

+ (id)createYUV420:(id)arg1 chroma:(id)arg2;
+ (id)createRGBA:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool YCbCrFullRange; // @synthesize YCbCrFullRange=_YCbCrFullRange;
@property(nonatomic) long long YCbCrColorDepth; // @synthesize YCbCrColorDepth=_YCbCrColorDepth;
@property(retain, nonatomic) NSString *YCbCrMatrix; // @synthesize YCbCrMatrix=_YCbCrMatrix;
@property(retain, nonatomic) NSString *transferFunction; // @synthesize transferFunction=_transferFunction;
@property(retain, nonatomic) NSString *colorPrimaries; // @synthesize colorPrimaries=_colorPrimaries;

@end
