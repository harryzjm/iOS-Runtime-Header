//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DShaderVariable;

@interface TSCH3DTextureVariables : NSObject
{
    TSCH3DShaderVariable *_texture;
    TSCH3DShaderVariable *_texcoords;
    TSCH3DShaderVariable *_textureMatrix;
}

+ (id)variablesWithTexture:(id)arg1 texcoords:(id)arg2 textureMatrix:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TSCH3DShaderVariable *textureMatrix; // @synthesize textureMatrix=_textureMatrix;
@property(readonly, copy, nonatomic) TSCH3DShaderVariable *texcoords; // @synthesize texcoords=_texcoords;
@property(readonly, copy, nonatomic) TSCH3DShaderVariable *texture; // @synthesize texture=_texture;
- (id)initWithTexture:(id)arg1 texcoords:(id)arg2 textureMatrix:(id)arg3;

@end

