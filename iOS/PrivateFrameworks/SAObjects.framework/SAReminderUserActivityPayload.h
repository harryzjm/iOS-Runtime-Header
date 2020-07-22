//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAReminderPayload-Protocol.h>

@class NSString, SAUserActivity;

@interface SAReminderUserActivityPayload <SAReminderPayload>
{
}

+ (id)userActivityPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userActivityPayload;
@property(retain, nonatomic) SAUserActivity *userActivity;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
