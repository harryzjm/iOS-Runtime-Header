//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class MISSING_TYPE, NSData, NSString;

@interface MDLTexture : NSObject <MDLNamed>
{
    NSString *_name;
    struct MDLTextureData _textureData;
    long long _channelEncoding;
    NSData *_topLeftOriginData[14];
    NSData *_bottomLeftOriginData[14];
    _Bool _selfCreating;
    _Bool _alphaValuesSet;
    _Bool _hasAlphaValues;
}

+ (id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions:(float)arg3 roughness: /* Error: Ran out of types for this method. */;
+ (id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions: /* Error: Ran out of types for this method. */;
+ (id)textureCubeWithImagesNamed:(id)arg1;
+ (id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureNamed:(id)arg1;
+ (id)textureNamed:(id)arg1 bundle:(id)arg2;
+ (id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) long long channelEncoding; // @synthesize channelEncoding=_channelEncoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct CGImage *)imageFromTextureAtLevel:(unsigned long long)arg1;
- (struct CGImage *)imageFromTexture;
- (_Bool)writeToURL:(id)arg1 type:(struct __CFString *)arg2 level:(unsigned long long)arg3;
- (_Bool)writeToURL:(id)arg1 type:(struct __CFString *)arg2;
- (_Bool)writeToURL:(id)arg1 level:(unsigned long long)arg2;
- (_Bool)writeToURL:(id)arg1;
- (void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (id)texelDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
- (id)texelDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
- (id)texelDataWithBottomLeftOrigin;
- (id)texelDataWithTopLeftOrigin:(unsigned long long)arg1;
- (id)texelDataWithTopLeftOrigin;
- (void)loadDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
- (void)loadDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long mipLevelCount;
- (id)initWithData:(id)arg1 topLeftOrigin:(_Bool)arg2 name:(id)arg3 dimensions:(long long)arg4 rowStride:(unsigned long long)arg5 channelCount:(long long)arg6 channelEncoding:(_Bool)arg7 isCube: /* Error: Ran out of types for this method. */;
- (id)init;
- (id)generateDataAtLevel:(long long)arg1;
- (id)allocateDataAtLevel:(long long)arg1;
@property(nonatomic) _Bool hasAlphaValues;
@property(nonatomic) _Bool isCube;
- (struct MDLTextureData *)textureData;
@property(readonly, nonatomic) unsigned long long channelCount;
@property(readonly, nonatomic) long long rowStride;
@property(readonly, nonatomic) MISSING_TYPE *dimensions;
- (void)clearTexelData;

@end
