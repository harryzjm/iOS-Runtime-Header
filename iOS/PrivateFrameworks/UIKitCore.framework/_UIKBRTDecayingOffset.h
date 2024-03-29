//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingOffset
{
    _Bool _limitMovement;
    struct CGPoint _offset;
}

@property(readonly, nonatomic) struct CGPoint originalOffset;
@property(readonly, nonatomic) struct CGPoint offset;
- (void)updateOffsetTo:(struct CGPoint)arg1;
- (void)reset;
- (id)initWithTimeoutDuration:(double)arg1 limitMovement:(_Bool)arg2;

@end

