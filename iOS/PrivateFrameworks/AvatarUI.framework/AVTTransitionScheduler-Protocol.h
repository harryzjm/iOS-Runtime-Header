//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVTTransitionScheduler
@property(readonly, copy, nonatomic) CDUnknownBlockType eventHandler;
- (void)didCompleteEvent;
- (void)stop;
- (void)scheduleEvent;
- (id)initWithEventHandler:(void (^)(void))arg1;
@end

