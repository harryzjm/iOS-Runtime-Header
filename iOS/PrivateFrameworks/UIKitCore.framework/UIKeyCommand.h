//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSString, UIEvent, UIResponder, UIViewController;

@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding>
{
    NSIndexSet *_keyCodes;
    SEL _action;
    SEL _upAction;
    _Bool _repeatable;
    long long _buttonType;
    UIEvent *_triggeringEvent;
    UIResponder *_originatingResponder;
    NSString *_segueIdentifier;
    UIViewController *_controllerForSegue;
    NSString *_input;
    long long _modifierFlags;
    NSString *_discoverabilityTitle;
}

+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithCompactInput:(id)arg1 action:(SEL)arg2 upAction:(SEL)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
@property(readonly, nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)description;
- (void)_setViewControllerForSegue:(id)arg1;
- (id)_controllerForSegue;
- (id)_segueIdentifier;
- (void)_setOriginatingResponder:(id)arg1;
- (id)nextResponder;
- (void)_setTriggeringEvent:(id)arg1;
- (id)_triggeringEvent;
- (void)_setButtonType:(long long)arg1;
- (long long)_buttonType;
- (id)_keyCodes;
- (_Bool)repeatable;
- (SEL)upAction;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (id)_nonRepeatableKeyCommand;
- (_Bool)triggerSegueIfPossible;
- (id)discoverabilityInput;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithInput:(id)arg1 modifierFlags:(long long)arg2 keyCodes:(id)arg3 action:(SEL)arg4 upAction:(SEL)arg5 discoverabilityTitle:(id)arg6 buttonType:(long long)arg7 segueIdentifier:(id)arg8;
- (id)initWithKeyCommand:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;

@end
