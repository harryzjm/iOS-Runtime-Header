//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCoding-Protocol.h>
#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    id mFirst;
    id mSecond;
}

+ (id)pair;
+ (id)pairWithPair:(id)arg1;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(readonly, nonatomic) id second; // @synthesize second=mSecond;
@property(readonly, nonatomic) id first; // @synthesize first=mFirst;
- (void)p_SetSecond:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPair:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

