//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SiriCoreZlibDataDecompressor
{
    struct z_stream_s _inflateStream;
    unsigned char _inflateBuffer[8192];
}

- (id)decompressedDataForData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

