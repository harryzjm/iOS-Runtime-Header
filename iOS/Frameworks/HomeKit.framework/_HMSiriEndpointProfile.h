//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>

@class HMSiriEndpointProfilesMessenger, NSArray, NSNumber, NSString, NSUUID;
@protocol _HMSiriEndpointProfileDelegate;

@interface _HMSiriEndpointProfile <HMFLogging, HMFObject>
{
    _Bool _manuallyDisabled;
    long long _sessionState;
    NSUUID *_sessionHubIdentifer;
    NSString *_siriEndpointVersion;
    unsigned long long _capability;
    NSString *_siriEngineVersion;
    NSNumber *_activeIdentifier;
    long long _multifunctionButton;
    NSArray *_assistants;
    id <_HMSiriEndpointProfileDelegate> _delegate;
    HMSiriEndpointProfilesMessenger *_messenger;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) HMSiriEndpointProfilesMessenger *messenger; // @synthesize messenger=_messenger;
@property __weak id <_HMSiriEndpointProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)_mergeAssistants:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageDestination;
- (void)_handleUpdateProfileState:(id)arg1;
- (void)refreshStateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain) NSArray *assistants; // @synthesize assistants=_assistants;
@property long long multifunctionButton; // @synthesize multifunctionButton=_multifunctionButton;
@property(nonatomic) _Bool manuallyDisabled; // @synthesize manuallyDisabled=_manuallyDisabled;
@property(retain) NSNumber *activeIdentifier; // @synthesize activeIdentifier=_activeIdentifier;
@property(retain) NSString *siriEngineVersion; // @synthesize siriEngineVersion=_siriEngineVersion;
@property(nonatomic) unsigned long long capability; // @synthesize capability=_capability;
@property(retain) NSString *siriEndpointVersion; // @synthesize siriEndpointVersion=_siriEndpointVersion;
@property(retain) NSUUID *sessionHubIdentifer; // @synthesize sessionHubIdentifer=_sessionHubIdentifer;
@property long long sessionState; // @synthesize sessionState=_sessionState;
- (void)notifyClientDidUpdateSessionState;
- (void)deleteSiriHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyOnboardingSelections:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
