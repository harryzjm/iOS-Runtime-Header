//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKObjCType : NSObject
{
    long long _code;
    NSString *_encoding;
    NSString *_name;
    NSString *_className;
    unsigned long long _size;
    unsigned long long _flags;
}

+ (id)typeForValue:(id)arg1;
+ (id)typeForEncoding:(const char *)arg1;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)getBytes:(void *)arg1 forObject:(id)arg2;
- (id)objectWithBytes:(const void *)arg1;
@property(readonly, nonatomic, getter=isObject) _Bool object;
@property(readonly, nonatomic, getter=isFloatingPointNumber) _Bool floatingPointNumber;
@property(readonly, nonatomic, getter=isIntegerNumber) _Bool integerNumber;
@property(readonly, nonatomic, getter=isNumber) _Bool number;
- (id)initWithCode:(long long)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned long long)arg5 flags:(unsigned long long)arg6;

@end

