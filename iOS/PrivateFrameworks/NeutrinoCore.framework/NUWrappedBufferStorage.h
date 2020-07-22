//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUBuffer-Protocol.h>
#import <NeutrinoCore/NUMutableBuffer-Protocol.h>

@class NSString, NUPixelFormat;

@interface NUWrappedBufferStorage <NUBuffer, NUMutableBuffer>
{
    long long _length;
    long long _rowBytes;
    void *_bytes;
}

@property(readonly, nonatomic) long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly, copy) NSString *description;
- (id)newRenderDestination;
@property(readonly, nonatomic) void *mutableBytes;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)sizeInBytes;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 bytes:(void *)arg3 rowBytes:(long long)arg4 length:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NUPixelFormat *format;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
@property(readonly) Class superclass;

@end

