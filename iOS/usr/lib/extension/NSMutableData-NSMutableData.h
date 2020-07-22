//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableData)
+ (id)dataWithLength:(unsigned long long)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)resetBytesInRange:(struct _NSRange)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (_Bool)_isCompact;
- (Class)classForCoder;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
@end

