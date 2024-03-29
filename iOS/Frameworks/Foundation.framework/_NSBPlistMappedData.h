//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSBPlistMappedData : NSData
{
    const void *ptr;
    unsigned long long size;
    unsigned long long mappingIndex;
    CDStruct_f10e9336 bplistTrailer;
    unsigned long long bplistOffset;
    unsigned char bplistMarker;
}

- (_Bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long *)arg2 trailer:(CDStruct_f10e9336 *)arg3;
- (unsigned long long)_bplistObjectsRangeEnd;
- (unsigned long long)length;
- (const void *)bytes;
- (long long)mappingIndex;
- (void)setMappingIndex:(long long)arg1;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithBinaryPlistData:(const void *)arg1 size:(unsigned long long)arg2 trailer:(CDStruct_f10e9336)arg3 offset:(unsigned long long)arg4 marker:(unsigned char)arg5;

@end

