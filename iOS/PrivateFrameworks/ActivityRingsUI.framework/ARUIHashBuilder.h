//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIHashBuilder : NSObject
{
    unsigned long long _hash;
}

+ (id)builder;
- (void)appendObject:(id)arg1;
- (void)appendFloat4x4:(CDStruct_14d5dc5e)arg1;
- (void)appendFloat4: /* Error: Ran out of types for this method. */;
- (void)appendFloat2: /* Error: Ran out of types for this method. */;
- (void)appendDouble:(double)arg1;
- (void)appendCGRect:(struct CGRect)arg1;
- (void)appendTimeInterval:(double)arg1;
- (void)appendCGFloat:(double)arg1;
- (void)appendFloat:(float)arg1;
- (unsigned long long)hashForNSTimeInterval:(double)arg1;
- (unsigned long long)hashForDouble:(double)arg1;
- (unsigned long long)hashForCGFloat:(double)arg1;
- (unsigned long long)hashForFloat:(float)arg1;
- (void)appendInt:(long long)arg1;
- (void)appendUnsignedInt:(unsigned long long)arg1;
- (void)appendBool:(_Bool)arg1;
- (unsigned long long)hash;
- (id)init;

@end
