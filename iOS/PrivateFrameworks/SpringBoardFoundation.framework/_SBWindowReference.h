//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/NSCopying-Protocol.h>

@interface _SBWindowReference : NSObject <NSCopying>
{
    id _object;
}

+ (id)referenceForObject:(id)arg1;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long pointer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end

