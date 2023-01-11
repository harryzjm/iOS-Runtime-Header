//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (TSUAdditions)
+ (id)tsu_intersectionOfSets:(id)arg1;
+ (_Bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;
- (id)tsu_setBySubtractingSet:(id)arg1;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_onlyObject;
- (_Bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_sortedArray;
- (_Bool)tsu_containsKindOfClass:(Class)arg1;
- (_Bool)tsu_containsObjectIdenticalTo:(id)arg1;
@end
