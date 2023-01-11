//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIMenuLeaf-Protocol.h>

@class NSArray, NSString, UIImage;

@interface UICommand <_UIMenuLeaf>
{
    NSString *_discoverabilityTitle;
    SEL _action;
    id _propertyList;
    unsigned long long _attributes;
    long long _state;
    NSArray *_alternates;
    id __target;
}

+ (_Bool)supportsSecureCoding;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4;
+ (id)commandWithTitle:(id)arg1 imageName:(id)arg2 action:(SEL)arg3;
+ (id)_defaultCommandForAction:(SEL)arg1;
+ (id)_defaultCommands;
- (void).cxx_destruct;
@property(readonly, nonatomic) id _target; // @synthesize _target=__target;
@property(readonly, nonatomic) NSArray *alternates; // @synthesize alternates=_alternates;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (_Bool)_isDefaultCommand;
- (long long)_leafKeyModifierFlags;
- (id)_leafKeyInput;
- (id)_leafAlternates;
- (id)_identifier;
- (id)_immutableCopy;
- (id)_alternateForModifierFlags:(long long)arg1;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3 deferredElementVisit:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) UIImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) _Bool requiresAuthenticatedInput;
- (id)initWithCommand:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 propertyList:(id)arg5 alternates:(id)arg6 discoverabilityTitle:(id)arg7 attributes:(unsigned long long)arg8 state:(long long)arg9;
- (id)initWithCoder:(id)arg1;
- (_Bool)isLeaf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
