//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCTopicalNode;

@interface FCTopicalEdge : NSObject
{
    _Bool _relatednessCalculated;
    FCTopicalNode *_a;
    FCTopicalNode *_b;
    unsigned long long _containsAButNotB;
    unsigned long long _containsAAndB;
    unsigned long long _containsBButNotA;
}

@property(nonatomic) _Bool relatednessCalculated; // @synthesize relatednessCalculated=_relatednessCalculated;
@property(nonatomic) unsigned long long containsBButNotA; // @synthesize containsBButNotA=_containsBButNotA;
@property(nonatomic) unsigned long long containsAAndB; // @synthesize containsAAndB=_containsAAndB;
@property(nonatomic) unsigned long long containsAButNotB; // @synthesize containsAButNotB=_containsAButNotB;
@property(retain, nonatomic) FCTopicalNode *b; // @synthesize b=_b;
@property(retain, nonatomic) FCTopicalNode *a; // @synthesize a=_a;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long totalObservations;
- (unsigned long long)independentCountForNode:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)calculateRelatedness;
- (id)initWithNode:(id)arg1 andNode:(id)arg2;

@end

