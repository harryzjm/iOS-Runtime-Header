//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _PFVMData : NSData
{
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;
- (Class)classForCoder;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

@end
