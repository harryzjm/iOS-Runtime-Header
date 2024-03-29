//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UISearchBarContainerView : UIView
{
    UIView *_subview;
    int _resizingMask;
    _Bool _shouldSendContainerSafeAreaInsetsDidChange;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)enforceSubviewAtBottomIfNecessary;
- (void)willRemoveSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)_uncontainerSubview:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)safeAreaInsetsDidChange;

@end

