//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLBuiltInMeshArgument
{
    unsigned short _builtInType;
    unsigned short _builtInDataType;
    unsigned short _meshVertexCount;
    unsigned short _meshPrimitiveCount;
    unsigned short _meshTopologyType;
    MTLStructTypeInternal *_meshVertexStruct;
    MTLStructTypeInternal *_meshPrimitiveStruct;
}

- (id)meshPrimitiveStruct;
- (id)meshVertexStruct;
- (unsigned long long)meshTopologyType;
- (unsigned long long)meshPrimitiveCount;
- (unsigned long long)meshVertexCount;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)builtInType;
- (unsigned long long)builtInDataType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(_Bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7 meshVertexStructType:(id)arg8 meshPrimitiveStructType:(id)arg9 meshVertexCount:(unsigned short)arg10 meshPrimitiveCount:(unsigned short)arg11 meshTopologyType:(unsigned long long)arg12;

@end

