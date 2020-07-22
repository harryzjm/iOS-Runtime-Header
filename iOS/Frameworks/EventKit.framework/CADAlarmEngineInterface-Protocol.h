//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString;

@protocol CADAlarmEngineInterface
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(NSDate *)arg1 toEnd:(NSDate *)arg2 inCalendars:(NSArray *)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseGetAlarmWithUUID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
@end

