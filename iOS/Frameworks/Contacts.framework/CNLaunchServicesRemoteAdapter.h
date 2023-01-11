//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNLaunchServicesAdapter-Protocol.h>

@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>
{
}

+ (id)createConnectionWithInterface:(id)arg1;
+ (id)launchServicesAdapterInterface;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsForUserActivityType:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end

