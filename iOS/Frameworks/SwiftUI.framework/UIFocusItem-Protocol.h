//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIFocusEnvironment-Protocol.h>

@class UIFocusMovementHint;

@protocol UIFocusItem <UIFocusEnvironment>
@property(nonatomic, readonly) struct CGRect frame;
@property(nonatomic, readonly) _Bool canBecomeFocused;

@optional
- (void)didHintFocusMovement:(UIFocusMovementHint *)arg1;
@end
