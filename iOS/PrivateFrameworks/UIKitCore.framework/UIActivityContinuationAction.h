//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class NSData, NSDate, NSString;

@interface UIActivityContinuationAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
@property(readonly, nonatomic) NSData *userActivityData;
@property(readonly, nonatomic) NSDate *lastUpdateTime;
@property(readonly, nonatomic) NSString *activityType;
@property(readonly, nonatomic) NSString *originatingDeviceName;
@property(readonly, nonatomic) NSString *originatingDeviceType;
@property(readonly, nonatomic) NSString *activityTypeIdentifier;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSettings:(id)arg1;

@end
