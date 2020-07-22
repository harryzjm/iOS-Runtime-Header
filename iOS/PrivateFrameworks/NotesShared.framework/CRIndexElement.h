//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSUUID;

@interface CRIndexElement : NSObject <NSCopying>
{
    NSUUID *_replica;
    long long _integer;
}

+ (id)elementWithInteger:(long long)arg1 replica:(id)arg2;
@property(nonatomic) long long integer; // @synthesize integer=_integer;
@property(retain, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hashValue;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithInteger:(long long)arg1 replica:(id)arg2;

@end

