//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface ASRelationshipEvent : NSObject
{
    unsigned short _type;
    unsigned short _anchor;
    NSDate *_timestamp;
}

+ (id)relationshipEventWithRecord:(id)arg1;
+ (id)_relationshipEventWithCodable:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned short anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
- (id)description;
- (_Bool)isEqualToRelationshipEvent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned short)arg1 anchor:(unsigned short)arg2 timestamp:(id)arg3;
- (id)_codableRelationshipEvent;

@end
