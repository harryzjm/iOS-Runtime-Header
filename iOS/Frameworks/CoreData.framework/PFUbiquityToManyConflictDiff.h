//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityToManyConflictDiff : NSObject
{
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initForRelationshipAtKey:(id)arg1;
- (id)init;

@end
