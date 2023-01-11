//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENArchive, NSMutableArray, NSMutableData;

@interface ENProtobufCoder : NSObject
{
    unsigned char _staticBuffer[256];
    NSMutableArray *_subCoders;
    ENArchive *_readArchive;
    const char *_readBase;
    const char *_readSrc;
    const char *_readEnd;
    char *_writeBase;
    char *_writeDst;
    char *_writeLim;
    struct __sFILE *_fileHandle;
    NSMutableData *_bufferData;
    unsigned long long _bufferOffset;
    unsigned long long _bufferMaxSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bufferMaxSize; // @synthesize bufferMaxSize=_bufferMaxSize;
@property(nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(readonly, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(readonly, nonatomic) struct __sFILE *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) char *writeLim; // @synthesize writeLim=_writeLim;
@property(readonly, nonatomic) char *writeDst; // @synthesize writeDst=_writeDst;
@property(readonly, nonatomic) char *writeBase; // @synthesize writeBase=_writeBase;
@property(readonly, nonatomic) const char *readEnd; // @synthesize readEnd=_readEnd;
@property(readonly, nonatomic) const char *readSrc; // @synthesize readSrc=_readSrc;
@property(readonly, nonatomic) const char *readBase; // @synthesize readBase=_readBase;
@property(readonly, nonatomic) ENArchive *readArchive; // @synthesize readArchive=_readArchive;
- (_Bool)_writeBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_skipLength:(unsigned long long)arg1 error:(id *)arg2;
- (const char *)_readLength:(unsigned long long)arg1 eofOkay:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeFixedUInt64:(unsigned long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readFixedUInt64:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)writeFixedSInt64:(long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readFixedSInt64:(long long *)arg1 error:(id *)arg2;
- (_Bool)writeFixedDouble:(double)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readFixedDouble:(double *)arg1 error:(id *)arg2;
- (_Bool)writeFixedUInt32:(unsigned int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readFixedUInt32:(unsigned int *)arg1 error:(id *)arg2;
- (_Bool)writeFixedSInt32:(int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readFixedSInt32:(int *)arg1 error:(id *)arg2;
- (_Bool)writeFixedFloat:(float)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readFixedFloat:(float *)arg1 error:(id *)arg2;
- (_Bool)writeVarIntUInt64:(unsigned long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readVarIntUInt64:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)writeVarIntSInt64:(long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readVarIntSInt64:(long long *)arg1 error:(id *)arg2;
- (_Bool)writeVarIntUInt32:(unsigned int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readVarIntUInt32:(unsigned int *)arg1 error:(id *)arg2;
- (_Bool)readVarIntInt32:(int *)arg1 error:(id *)arg2;
- (_Bool)writeVarIntSInt32:(int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)readVarIntSInt32:(int *)arg1 error:(id *)arg2;
- (_Bool)writeVarInt:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)readVarInt:(unsigned long long *)arg1 eofOkay:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeNSString:(id)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (id)readNSStringAndReturnError:(id *)arg1;
- (_Bool)writeNSData:(id)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;
- (id)readNSDataAndReturnError:(id *)arg1;
- (_Bool)skipType:(unsigned char)arg1 error:(id *)arg2;
- (_Bool)writeLengthDelimitedPtr:(const void *)arg1 length:(unsigned long long)arg2 tag:(unsigned long long)arg3 error:(id *)arg4;
- (const char *)readLengthDelimited:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)readType:(char *)arg1 tag:(unsigned long long *)arg2 eofOkay:(_Bool)arg3 error:(id *)arg4;
- (void)prepareForReuse;
- (void)enqueueSubCoder:(id)arg1;
- (id)dequeueOrCreateSubCoder;
- (void)setReadArchive:(id)arg1;
- (void)setFileHandle:(struct __sFILE *)arg1;
- (void)setWriteMutableData:(id)arg1;
- (void)setWriteMemory:(void *)arg1 length:(unsigned long long)arg2;
- (void)setReadMemory:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end
