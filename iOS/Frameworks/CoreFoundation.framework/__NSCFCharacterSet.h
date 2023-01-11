//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (void)invert;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange)arg1;
- (void)addCharactersInRange:(struct _NSRange)arg1;
- (id)invertedSet;
- (id)bitmapRepresentation;
- (_Bool)hasMemberInPlane:(unsigned char)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (_Bool)longCharacterIsMember:(unsigned int)arg1;
- (_Bool)characterIsMember:(unsigned short)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

