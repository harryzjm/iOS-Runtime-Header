//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIAutoRotatingWindow
{
    long long _interfaceOrientation;
    _Bool _unknownOrientation;
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_didRemoveSubview:(id)arg1;
- (void)updateForOrientation:(long long)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (void)commonInit;

@end
