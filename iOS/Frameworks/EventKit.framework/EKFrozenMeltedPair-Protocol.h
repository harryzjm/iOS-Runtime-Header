//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/NSObject-Protocol.h>

@class EKChangeSet, EKEventStore, EKObject, NSSet, NSString;
@protocol EKFrozenMeltedPair, EKProtocolObject;

@protocol EKFrozenMeltedPair <NSObject>
+ (Class)meltedClass;
+ (Class)frozenClass;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool isPartialObject;
@property(readonly, nonatomic) _Bool isFrozen;
- (_Bool)isEqual:(id <EKFrozenMeltedPair>)arg1 ignoringProperties:(NSSet *)arg2;
- (_Bool)isCompletelyEqual:(id <EKFrozenMeltedPair>)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (EKObject *)meltedObjectInStore:(EKEventStore *)arg1;
- (_Bool)isPropertyUnavailable:(NSString *)arg1;
- (EKPersistentObject_556b3b22 *)frozenObject;
- (EKObject *)existingMeltedObject;
- (EKChangeSet *)changeSet;
- (id)initWithObject:(id <EKProtocolObject>)arg1;
@end

