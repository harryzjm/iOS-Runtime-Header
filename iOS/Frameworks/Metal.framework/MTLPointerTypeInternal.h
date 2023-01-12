//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLPointerType.h"

@class MTLType;

__attribute__((visibility("hidden")))
@interface MTLPointerTypeInternal : MTLPointerType
{
    unsigned long long _dataType;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    unsigned long long _access;
    unsigned long long _alignment;
    unsigned long long _dataSize;
    _Bool _elementIsArgumentBuffer;
    _Bool _isConstantBuffer;
    _Bool _doRetain;
}

- (unsigned long long)dataSize;
- (unsigned long long)alignment;
- (unsigned long long)access;
- (unsigned long long)elementType;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)elementArrayType;
- (id)structType;
- (id)elementStructType;
- (_Bool)elementIsIndirectArgumentBuffer;
- (_Bool)elementIsArgumentBuffer;
- (_Bool)isConstantBuffer;
- (void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2;
- (id)elementTypeDescription;
- (void)dealloc;
- (id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(_Bool)arg6 isConstantBuffer:(_Bool)arg7;
- (id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(_Bool)arg6 isConstantBuffer:(_Bool)arg7 doRetain:(_Bool)arg8;

@end

