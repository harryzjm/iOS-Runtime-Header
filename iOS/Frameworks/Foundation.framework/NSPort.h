//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>
#import <Foundation/NSCopying-Protocol.h>

@interface NSPort : NSObject <NSCopying, NSCoding>
{
}

+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)port;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)removeConnection:(id)arg1 fromRunLoop:(id)arg2 forMode:(id)arg3;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (Class)classForPortCoder;
- (id)replacementObjectForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long reservedSpaceLength;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)machPort;
@property(readonly, getter=isValid) _Bool valid;
- (void)invalidate;
- (id)initWithMachPort:(unsigned int)arg1;

@end

