//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

@interface PBMutableData : NSMutableData
{
    char *p;
    char *buffer;
    char *end;
}

- (void *)mutableBytes;
- (const void *)bytes;
- (void)_pb_growCapacityBy:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

