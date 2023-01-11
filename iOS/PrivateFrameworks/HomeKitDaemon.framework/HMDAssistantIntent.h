//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class INControlHomeIntent, NSArray, NSString;

@interface HMDAssistantIntent : NSObject <HMFLogging>
{
    NSArray *_homeKitObjects;
    INControlHomeIntent *_intent;
}

+ (id)logCategory;
@property(retain, nonatomic) INControlHomeIntent *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
- (void).cxx_destruct;
- (void)_handleActionSetForExecution:(id)arg1 message:(id)arg2;
- (void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2;
- (id)_getObjectsWithUUID;
- (void)_handleIntentRequestMessage:(id)arg1;
- (void)performWithGather:(id)arg1 message:(id)arg2;
- (id)initWithIntent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

