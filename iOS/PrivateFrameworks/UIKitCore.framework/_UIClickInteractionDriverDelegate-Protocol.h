//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol _UIClickInteractionDriving;

@protocol _UIClickInteractionDriverDelegate <NSObject>
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didPerformEvent:(unsigned long long)arg2;
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldBegin:(void (^)(unsigned long long))arg2;

@optional
- (_Bool)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldDelayGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didUpdateHighlightProgress:(double)arg2;
@end
