//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarmStorage, MTTimerStorage;

@protocol MTNotificationResponseDelegate <NSObject>
@property(readonly, nonatomic) MTTimerStorage *timerStorage;
@property(readonly, nonatomic) MTAlarmStorage *alarmStorage;
@end

