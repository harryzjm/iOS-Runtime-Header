//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsPreferencesTreeNode-Protocol.h>

@class NSArray, NSString, SBFTraitsParticipant;
@protocol SBFTraitsPreferencesTreeNode;

@interface SBFTraitsPreferencesTreeNode : NSObject <SBFTraitsPreferencesTreeNode, BSDescriptionProviding>
{
    NSString *_uniqueIdentifier;
    NSString *_role;
    SBFTraitsParticipant *_participant;
    id <SBFTraitsPreferencesTreeNode> _parent;
    NSArray *_children;
    double _order;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SBFTraitsParticipant *participant; // @synthesize participant=_participant;
@property(readonly, copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(nonatomic) double order; // @synthesize order=_order;
@property(nonatomic) __weak id <SBFTraitsPreferencesTreeNode> parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_participant;
@property(copy, nonatomic) NSString *debugLastOrientationSettingsValidationFailureReason;
@property(nonatomic) _Bool debugLastSettingsWereValidated;
- (id)settingsUpdater;
- (id)settings;
- (id)preferences;
- (void)addChild:(id)arg1;
- (id)initWithParticipant:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
