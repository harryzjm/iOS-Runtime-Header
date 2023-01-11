//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSFastEnumeration-Protocol.h>

@class NSMutableOrderedSet, NSString;

@interface SBAlertItemsObjectQueue : NSObject <BSDescriptionProviding, NSFastEnumeration>
{
    NSMutableOrderedSet *_objects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *objects; // @synthesize objects=_objects;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectsOfClass:(Class)arg1;
- (_Bool)hasObjectOfClass:(Class)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)dequeueAllObjects;
- (_Bool)hasObject;
- (void)prependObject:(id)arg1;
- (void)appendObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
