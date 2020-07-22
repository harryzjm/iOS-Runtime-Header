//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAlarmAlarmAction-Protocol.h>

@class NSArray, NSString;

@interface SAAlarmSnooze <SAAlarmAlarmAction>
{
}

+ (id)snoozeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snooze;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *alarmIds;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

