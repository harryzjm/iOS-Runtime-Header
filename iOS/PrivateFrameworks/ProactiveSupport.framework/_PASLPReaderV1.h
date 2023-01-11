//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/_PASLPReaderProtocol-Protocol.h>

@class NSData;

@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol>
{
    NSData *_backingData;
    struct {
        void *mmapBase;
        unsigned long long mmapSize;
    } _mappedRegion;
    struct __CFAllocator *_releaseReaderDeallocator;
}

- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1 usingArrayContext:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2;
- (id)keyAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2;
- (id)objectForKey:(id)arg1 usingDictionaryContext:(id)arg2;
- (id)_stringForMappedUTF8CString:(const char *)arg1;
- (id)rootObjectWithErrMsg:(id *)arg1;
- (id)_objectForValue:(CDStruct_c0454aff)arg1;
- (id)_objectForValue:(CDStruct_c0454aff)arg1 errMsg:(id *)arg2;
- (void)decodeDictionaryKeyForValue:(CDStruct_c0454aff)arg1 handleString:(CDUnknownBlockType)arg2;
- (_Bool)_decodeDictionaryKeyValue:(CDStruct_c0454aff)arg1 handleString:(CDUnknownBlockType)arg2 errMsg:(id *)arg3;
- (_Bool)_decodeValue:(CDStruct_c0454aff)arg1 handleBoolean:(CDUnknownBlockType)arg2 handleTaggedInt:(CDUnknownBlockType)arg3 handleBoxedInt:(CDUnknownBlockType)arg4 handleTaggedFloat:(CDUnknownBlockType)arg5 handleBoxedFloat:(CDUnknownBlockType)arg6 handleDate:(CDUnknownBlockType)arg7 handleData:(CDUnknownBlockType)arg8 handleString:(CDUnknownBlockType)arg9 handleDict:(CDUnknownBlockType)arg10 handleArray:(CDUnknownBlockType)arg11 errMsg:(id *)arg12;
- (_Bool)_validateObjectGraphWithFilename:(id)arg1 rootValue:(CDStruct_c0454aff)arg2 recursionDepth:(unsigned long long)arg3 stats:(struct _PASLPObjectGraphStats *)arg4 error:(id *)arg5;
- (_Bool)_validateObjectGraphWithFilename:(id)arg1 stats:(struct _PASLPObjectGraphStats *)arg2 error:(id *)arg3;
- (_Bool)_validateStringTableWithFilename:(id)arg1 stats:(struct _PASLPObjectGraphStats *)arg2 error:(id *)arg3;
- (_Bool)_validateHeader:(const struct _PASLPHeader *)arg1 filename:(id)arg2 error:(id *)arg3;
- (unsigned int)_mmapByteOffsetForPtr:(const void *)arg1;
- (id)initWithData:(id)arg1 sourcedFromPath:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end
