//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class UIView;

@protocol UISpringLoadedInteractionContext <NSObject>
@property(retain, nonatomic) id targetItem;
@property(retain, nonatomic) UIView *targetView;
@property(readonly, nonatomic) long long state;
- (struct CGPoint)locationInView:(UIView *)arg1;
@end
