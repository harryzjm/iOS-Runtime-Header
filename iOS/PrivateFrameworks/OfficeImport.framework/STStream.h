//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface STStream
{
    struct _Stream *m_pCStream;
}

@property(readonly, nonatomic) struct _Stream *cStream; // @synthesize cStream=m_pCStream;
- (void)writeString16NoTerminator:(id)arg1;
- (void)writeString16:(id)arg1;
- (void)writeChar16:(unsigned short)arg1;
- (void)writeFloat64:(double)arg1;
- (void)writeFloat32:(float)arg1;
- (void)writeUInt32:(unsigned int)arg1;
- (void)writeSInt32:(int)arg1;
- (void)writeUInt16:(unsigned short)arg1;
- (void)writeSInt16:(short)arg1;
- (void)writeBool8:(unsigned char)arg1;
- (void)writeChar8:(BOOL)arg1;
- (void)writeUInt8:(unsigned char)arg1;
- (void)writeBytes:(id)arg1;
- (id)readString16:(unsigned int)arg1;
- (unsigned short)readChar16;
- (double)readFloat64;
- (float)readFloat32;
- (unsigned long long)readUInt64;
- (unsigned int)readUInt32;
- (int)readSInt32;
- (unsigned short)readUInt16;
- (short)readSInt16;
- (unsigned char)readBool8;
- (unsigned char)readUInt8;
- (BOOL)readChar8;
- (id)readBytes:(unsigned int)arg1;
- (void)setClass:(CDStruct_214f2dba)arg1;
- (unsigned int)getPos;
- (void)seek:(int)arg1 fromOrigin:(int)arg2;
- (id)getInfo;
- (void)releaseCStream;
- (void)close;
- (void)dealloc;
- (id)initWithCStream:(struct _Stream *)arg1;

@end

