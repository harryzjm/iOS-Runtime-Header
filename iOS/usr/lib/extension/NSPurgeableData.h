//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

#import <Foundation/NSDiscardableContent-Protocol.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent>
{
    unsigned long long _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (_Bool)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)_destroyMemory;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (id)description;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;

@end
