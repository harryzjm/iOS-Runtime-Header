//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKitFocusableViewResponderItemBase.h"

@class MISSING_TYPE, NSArray, NSString, UIFocusEffect;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F31UIKitFocusableViewResponderItem : UIKitFocusableViewResponderItemBase
{
    MISSING_TYPE *base;
    MISSING_TYPE *host;
    MISSING_TYPE *frame;
    MISSING_TYPE *contentPath;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) UIFocusEffect *focusEffect;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property(nonatomic, readonly) NSString *swiftui_focusGroupIdentifier;
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic) struct CGRect frame; // @synthesize frame;

@end

