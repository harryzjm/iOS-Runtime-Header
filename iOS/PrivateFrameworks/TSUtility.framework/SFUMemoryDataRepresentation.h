//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SFUMemoryDataRepresentation
{
    NSData *mData;
}

- (unsigned long long)readIntoData:(id)arg1;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (_Bool)isReadable;
- (id)data;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithData:(id)arg1;

@end

