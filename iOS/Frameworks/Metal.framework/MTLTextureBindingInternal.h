//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLTextureBindingInternal
{
    unsigned int _textureType:15;
    unsigned int _isDepthTexture:1;
    unsigned short _textureDataType;
}

- (_Bool)isEqual:(id)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
@property(readonly) unsigned long long textureDataType;
@property(readonly, getter=isDepthTexture) _Bool depthTexture;
@property(readonly) unsigned long long textureType;
- (id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(_Bool)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(_Bool)arg8;

// Remaining properties
@property(readonly) unsigned long long access;
@property(readonly, getter=isArgument) _Bool argument;
@property(readonly) unsigned long long arrayLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long index;
@property(readonly) NSString *name;
@property(readonly) Class superclass;
@property(readonly) long long type;
@property(readonly, getter=isUsed) _Bool used;

@end

