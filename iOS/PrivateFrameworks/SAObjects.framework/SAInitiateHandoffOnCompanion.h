//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SARemoteDevice;
@protocol SAHandoffPayload;

@interface SAInitiateHandoffOnCompanion
{
}

+ (id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)initiateHandoffOnCompanion;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SARemoteDevice *targetDevice;
@property(copy, nonatomic) NSString *notificationTextDialogIdentifier;
@property(copy, nonatomic) NSString *notificationText;
@property(copy, nonatomic) NSString *lockScreenTextDialogIdentifier;
@property(copy, nonatomic) NSString *lockScreenText;
@property(retain, nonatomic) id <SAHandoffPayload> handoffPayload;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
