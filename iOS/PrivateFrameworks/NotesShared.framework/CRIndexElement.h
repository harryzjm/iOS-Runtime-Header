//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface CRIndexElement : NSObject
{
    NSUUID *_replica;
    long long _integer;
}

+ (id)elementWithInteger:(long long)arg1 replica:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long integer; // @synthesize integer=_integer;
@property(retain, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithInteger:(long long)arg1 replica:(id)arg2;

@end

