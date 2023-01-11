//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBAppSwitcherPageContentView-Protocol.h>

@class NSString;

@interface SBAppSwitcherServicePageContentView : UIView <SBAppSwitcherPageContentView>
{
    _Bool _active;
    _Bool _visible;
    long long _orientation;
}

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool contentRequiresGroupOpacity;
@property(nonatomic) double cornerRadius;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
