//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MTLIndirectConstantArgument
{
    unsigned short _dataType;
    unsigned short _alignment;
    unsigned short _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)bufferALUType;
- (unsigned long long)bufferPixelFormat;
- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)indirectConstantAlignment;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 locationIndex:(unsigned long long)arg5 dataType:(unsigned long long)arg6 pixelFormat:(unsigned long long)arg7 aluType:(unsigned long long)arg8 dataSize:(unsigned long long)arg9 alignment:(unsigned long long)arg10;

@end
