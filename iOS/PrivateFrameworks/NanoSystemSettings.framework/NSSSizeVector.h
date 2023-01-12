//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoSystemSettings/NSSecureCoding-Protocol.h>

@interface NSSSizeVector : NSObject <NSSecureCoding>
{
    long long _fixed;
    long long _docsAndData;
    long long _purgeable;
}

+ (_Bool)supportsSecureCoding;
+ (id)fixed:(long long)arg1 dynamic:(long long)arg2 purgeable:(long long)arg3;
+ (id)fixed:(long long)arg1 docsAndData:(long long)arg2 purgeable:(long long)arg3;
+ (id)docsAndData:(long long)arg1 purgeable:(long long)arg2;
+ (id)fixed:(long long)arg1 purgeable:(long long)arg2;
+ (id)fixed:(long long)arg1 docsAndData:(long long)arg2;
+ (id)purgeable:(long long)arg1;
+ (id)docsAndData:(long long)arg1;
+ (id)fixed:(long long)arg1;
+ (id)zero;
@property(readonly) long long purgeable; // @synthesize purgeable=_purgeable;
@property(readonly) long long docsAndData; // @synthesize docsAndData=_docsAndData;
@property(readonly) long long fixed; // @synthesize fixed=_fixed;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFixed:(long long)arg1 docsAndData:(long long)arg2 purgeable:(long long)arg3;
- (id)plus:(id)arg1;
@property(readonly) long long userTotal;
@property(readonly) long long dynamic;
@property(readonly) _Bool isZero;
- (unsigned long long)hash;
- (_Bool)isEqualToSizeVector:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
