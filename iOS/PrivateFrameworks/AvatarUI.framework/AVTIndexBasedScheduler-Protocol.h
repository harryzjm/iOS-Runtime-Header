//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTIndexBasedScheduler <NSObject>
- (void)cancelTask:(void (^)(void (^)(void)))arg1;
- (void)cancelAllTasks;
- (void)taskReady:(void (^)(void (^)(void)))arg1 forIndex:(unsigned long long)arg2;
- (void)scheduleTask:(void (^)(void (^)(void)))arg1 forIndex:(unsigned long long)arg2;
@end

