//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIViewAnimationInfo : NSObject
{
    NSMutableDictionary *_animatablePropertyStates;
    NSMutableDictionary *_presentationModifiers;
    NSMutableDictionary *_modifierGroupRequestHandlers;
    NSMutableDictionary *_isPartOfHigherOrderProperty;
    NSObject<OS_dispatch_queue> *_lockingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockingQueue; // @synthesize lockingQueue=_lockingQueue;
@property(retain, nonatomic) NSMutableDictionary *isPartOfHigherOrderProperty; // @synthesize isPartOfHigherOrderProperty=_isPartOfHigherOrderProperty;
@property(retain, nonatomic) NSMutableDictionary *modifierGroupRequestHandlers; // @synthesize modifierGroupRequestHandlers=_modifierGroupRequestHandlers;
@property(retain, nonatomic) NSMutableDictionary *presentationModifiers; // @synthesize presentationModifiers=_presentationModifiers;
@property(retain, nonatomic) NSMutableDictionary *animatablePropertyStates; // @synthesize animatablePropertyStates=_animatablePropertyStates;
- (void).cxx_destruct;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2;
- (id)modifierGroupRequestHandlerForKey:(id)arg1;
- (void)setPresentationModifier:(id)arg1 forKey:(id)arg2;
- (id)presentationModifierForKey:(id)arg1;
- (void)setAnimatablePropertyState:(id)arg1 forKey:(id)arg2;
- (id)existingAnimatablePropertyStateForKey:(id)arg1;
- (id)animatablePropertyStateForKey:(id)arg1;
- (id)animatablePropertyStateKeys;
- (id)init;

@end

