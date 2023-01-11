//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface TSDGLFrameBuffer : NSObject
{
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    NSMutableArray *_currentTextureLookupInfoByAttachment;
    NSMutableArray *_desiredTextureLookupInfoByAttachment;
    NSArray *_textureConfigsByAttachment;
    NSArray *_textureLookupInfosByAttachment;
    long long _currentBindingOption;
    unsigned int _currentDrawBuffers[1];
    int _currentDrawBufferCount;
    unsigned int _currentReadBuffer;
    _Bool _isUsingNonDefaultAttachments;
    _Bool _isBound;
    _Bool _shouldDeleteTexturesOnTeardown;
    unsigned int _framebuffer;
    NSString *_name;
    struct CGSize _frameBufferSize;
}

+ (void)setCurrentGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2;
+ (void)setCurrentGLFramebuffer:(int)arg1;
+ (int)currentGLFramebufferWithBindingOption:(long long)arg1;
+ (int)currentGLFramebuffer;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool shouldDeleteTexturesOnTeardown; // @synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown;
@property(readonly, nonatomic) _Bool isBound; // @synthesize isBound=_isBound;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_frameBufferSize;
@property(readonly, nonatomic) unsigned int framebuffer; // @synthesize framebuffer=_framebuffer;
@property(readonly, nonatomic) NSString *currentGLTextureName;
@property(readonly, nonatomic) unsigned int currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (id)p_currentTextureLookupInfoAtAttachment:(unsigned int)arg1;
- (void)teardown;
- (struct CGSize)sizeOfGLTextureNamed:(id)arg1;
- (unsigned int)GLTextureNamed:(id)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (void)setCurrentTexturesToNext;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setCurrentTextureNamed:(id)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureIndex:(unsigned long long)arg1;
- (void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned int)arg2;
- (long long)currentTextureIndexAtAttachment:(unsigned int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindFramebufferWithBindingOption:(long long)arg1;
- (void)p_setFramebufferTextureAtAttachmentIndex:(long long)arg1 bindingOption:(long long)arg2;
- (void)p_setDrawBuffersAndReadBuffer;
- (_Bool)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned int *)arg1 count:(long long)arg2;
- (void)bindFramebuffer;
- (void)setupFramebufferIfNecessary;
- (id)description;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 textureCount:(unsigned long long)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureConfigs:(id)arg2;

@end
