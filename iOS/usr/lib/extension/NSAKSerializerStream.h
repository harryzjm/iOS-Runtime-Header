//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSSerializerStream-Protocol.h>

@interface NSAKSerializerStream : NSObject <NSSerializerStream>
{
    void *memory;
    unsigned long long current;
    unsigned long long max;
    struct __CFDictionary *roomForIntLocations;
}

- (void)copySerializationInto:(void *)arg1;
- (_Bool)writeToPath:(id)arg1 safely:(_Bool)arg2;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (unsigned long long)writeRoomForInt:(int *)arg1;
- (unsigned long long)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeInt:(unsigned long long)arg1;
- (void)dealloc;

@end

