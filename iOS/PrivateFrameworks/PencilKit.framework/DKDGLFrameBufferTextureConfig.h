//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DKDGLFrameBufferTextureConfig : NSObject
{
    _Bool _isTextureNameGenerated;
    int _GLInternalFormat;
    unsigned int _GLFormat;
    unsigned int _GLType;
    unsigned int _attachment;
    NSString *_name;
    NSArray *_textureParameters;
    struct CGSize _size;
}

+ (id)textureConfigWithSize:(struct CGSize)arg1 name:(id)arg2;
+ (id)textureConfigWithSize:(struct CGSize)arg1 textureParameters:(id)arg2 name:(id)arg3;
+ (id)textureConfigWithSize:(struct CGSize)arg1 attachment:(unsigned int)arg2 textureParameters:(id)arg3 name:(id)arg4;
+ (id)textureConfigWithSize:(struct CGSize)arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;
@property(readonly, nonatomic) NSArray *textureParameters; // @synthesize textureParameters=_textureParameters;
@property(readonly, nonatomic) unsigned int attachment; // @synthesize attachment=_attachment;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int GLType; // @synthesize GLType=_GLType;
@property(readonly, nonatomic) unsigned int GLFormat; // @synthesize GLFormat=_GLFormat;
@property(readonly, nonatomic) int GLInternalFormat; // @synthesize GLInternalFormat=_GLInternalFormat;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;

@end

