//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSObject (Subclass)
+ (_Bool)subclassInstance:(id)arg1;
+ (void)tmlLoadCategory;
+ (_Bool)tmlIsJSObjectClass;
+ (void)tmlMakeJSObjectClass;
+ (id)tmlLoadObjectFromPath:(id)arg1;
- (_Bool)tmlIsKindOfClass:(Class)arg1;
- (_Bool)tmlHasSignal:(id)arg1;
- (void)removeTMLSignal:(id)arg1;
- (_Bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2 returnValue:(id *)arg3;
- (_Bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2;
- (id)tmlSignalHandlerForSignal:(id)arg1;
- (id)tmlGetMethod:(id)arg1;
- (id)tmlCallMethod:(id)arg1 withArguments:(id)arg2;
- (_Bool)didEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 returnValue:(id)arg3 newReturnValue:(id *)arg4;
- (void)willEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 newArguments:(id *)arg3;
- (void)unregisterAspect:(id)arg1;
- (void)registerAspect:(id)arg1;
- (id)getAspectsForSignalName:(id)arg1 advice:(int)arg2 createStorageIfMissing:(_Bool)arg3;
- (id)strongObjectsArray:(id)arg1;
- (void)addMetaObject:(id)arg1;
- (id)metaObjects;
- (id)tmlEmitSignalOrCallMethod:(id)arg1 withArguments:(id)arg2;
- (id)tmlInvokeMethodCall:(id)arg1 withArguments:(id)arg2;
- (id)tmlGetMethod:(id)arg1 throwIfMissing:(_Bool)arg2;
- (void)setTMLSignalHandler:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setTMLHandlerBlock:(CDUnknownBlockType)arg1 forSignal:(id)arg2;
- (void)setTMLHandler:(id)arg1 forSignal:(id)arg2;
- (void)tmlAddMethod:(id)arg1;
- (id)tmlValueForKey:(id)arg1;
- (id)tmlValueForKeyPath:(id)arg1;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setTMLValue:(id)arg1 forKey:(id)arg2;
- (_Bool)hasTMLOwnerContext:(id)arg1;
- (_Bool)setTMLOwnerContext:(id)arg1;
- (id)tmlStateForName:(id)arg1;
@property(copy, nonatomic) NSString *tmlState;
- (id)tmlDefaultState;
@property(nonatomic) __weak id tmlParent;
@property(readonly, nonatomic) NSArray *tmlChildren;
- (void)addTmlChild:(id)arg1;
- (void)tmlDispose;
- (id)tmlClass;
@property(copy, nonatomic) NSString *tmlIdentifier;
- (id)tmlGetValue:(id)arg1;
- (id)tmlGetValueProxy:(id)arg1;
- (id)tmlInvoke:(id)arg1:(id)arg2;
- (void)tmlMakeJSObjectClass;

// Remaining properties
@property(readonly, nonatomic) Class tmlSuperClass; // @dynamic tmlSuperClass;
@end

