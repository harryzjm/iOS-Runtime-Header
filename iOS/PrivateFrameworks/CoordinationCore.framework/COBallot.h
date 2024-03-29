//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface COBallot : NSObject
{
    NSOrderedSet *_candidates;
    NSDictionary *_discovery;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *discovery; // @synthesize discovery=_discovery;
@property(copy, nonatomic) NSOrderedSet *candidates; // @synthesize candidates=_candidates;
- (_Bool)isEqualToBallot:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1;
- (id)initWithBallot:(id)arg1;
- (id)init;

@end

