//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSCopying-Protocol.h>

@class UIColor, UIInterfaceAction;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionViewState <NSCopying>
{
    _Bool _isHighlighted;
    _Bool _isPressed;
    _Bool _isFocused;
    _Bool _isPreferred;
    UIInterfaceAction *_action;
    id _actionViewStateContext;
    unsigned long long _visualCornerPosition;
    UIColor *_legacyPresentationTintColor;
}

+ (id)viewStateRepresentingPreferredAction;
+ (id)viewStateRepresentingDefaultAction;
+ (id)viewStateForAlertControllerActionView:(id)arg1;
+ (id)viewStateForActionRepresentationViewDescendantView:(id)arg1 action:(id)arg2;
+ (id)viewStateForActionRepresentationView:(id)arg1 action:(id)arg2;
+ (id)_nullViewStateForActionType:(long long)arg1;
@property(readonly, nonatomic) UIColor *legacyPresentationTintColor; // @synthesize legacyPresentationTintColor=_legacyPresentationTintColor;
@property(readonly, nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(readonly, nonatomic) id actionViewStateContext; // @synthesize actionViewStateContext=_actionViewStateContext;
@property(readonly, nonatomic) _Bool isPreferred; // @synthesize isPreferred=_isPreferred;
@property(readonly, nonatomic) _Bool isFocused; // @synthesize isFocused=_isFocused;
@property(readonly, nonatomic) _Bool isPressed; // @synthesize isPressed=_isPressed;
@property(readonly, nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (_Bool)_stateEqualToActionViewState:(id)arg1;
- (id)_legacyPresentationTintColorForActionRepresentationDescendantView:(id)arg1;
- (void)_collectStateFromActionViewState:(id)arg1;
- (void)_collectStateFromAction:(id)arg1;
- (void)_collectStateFromActionRepresentationView:(id)arg1;
- (void)_collectStateForDefaultState;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertiesFromActionRepresentationView:(id)arg1 groupView:(id)arg2 action:(id)arg3;

@end

