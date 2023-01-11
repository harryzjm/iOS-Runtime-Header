//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRKClassKitRosterRequirements;

@interface CRKClassKitClassPropertyApplicator : NSObject
{
    id <CRKClassKitRosterRequirements> _requirements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKClassKitRosterRequirements> requirements; // @synthesize requirements=_requirements;
- (id)identifiersOfUsers:(id)arg1;
- (_Bool)additionsAndRemovalsIntersect:(id)arg1;
- (void)removeTrustedUser:(id)arg1 fromClass:(id)arg2;
- (void)addTrustedUser:(id)arg1 toClass:(id)arg2;
- (void)removeUser:(id)arg1 fromClass:(id)arg2;
- (void)addUser:(id)arg1 toClass:(id)arg2;
- (id)applyProperties:(id)arg1 toClass:(id)arg2 error:(id *)arg3;
- (id)initWithRequirements:(id)arg1;

@end
