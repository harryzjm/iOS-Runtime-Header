//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSInputStream;

@interface TSWPObfuscatedFontDataProvider : NSObject
{
    NSInputStream *_stream;
    unsigned char _xorMask[20];
}

- (void)rewind;
- (long long)skipForwardBy:(long long)arg1;
- (unsigned long long)readBytes:(char *)arg1 count:(unsigned long long)arg2;
- (long long)p_currentOffset;
- (void)dealloc;
- (id)initWithPath:(id)arg1 groupUID:(id)arg2;

@end

