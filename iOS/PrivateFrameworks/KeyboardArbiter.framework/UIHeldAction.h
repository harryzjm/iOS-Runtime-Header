//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface UIHeldAction
{
    _Bool _holding;
    NSDate *_holdBegan;
    double _baseDelay;
    double _timeBalance;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)unschedule;
- (void)touchWithDelay:(double)arg1;
- (_Bool)isHolding;
- (void)resume;
- (void)hold;

@end
