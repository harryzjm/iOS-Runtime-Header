//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (FezAdditions)
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (void)__imForEach:(CDUnknownBlockType)arg1;
- (_Bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
- (_Bool)containsObjectIdenticalTo:(id)arg1;
- (id)__imFirstObject;
- (id)_copyForEnumerating;
- (_Bool)_hasSameMembers:(id)arg1;
- (id)__imDeepCopy;
- (_Bool)__imIsMutable;
- (id)__imSetFromArray;
- (id)__IMStripPotentialTokenURIs;
@end
