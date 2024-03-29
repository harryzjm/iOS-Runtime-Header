//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLTextureReferenceType.h"

__attribute__((visibility("hidden")))
@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType
{
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    _Bool _isDepthTexture;
}

- (_Bool)isDepthTexture;
- (unsigned long long)access;
- (unsigned long long)textureType;
- (unsigned long long)textureDataType;
- (unsigned long long)dataType;
- (_Bool)isEqual:(id)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(_Bool)arg4;

@end

