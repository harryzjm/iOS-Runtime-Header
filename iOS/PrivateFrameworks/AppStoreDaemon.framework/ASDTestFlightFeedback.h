//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDTestFlightFeedback : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateTestNotes:(id)arg1 forVersion:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)submitFeedback:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setLaunchInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setLaunchScreenEnabled:(_Bool)arg1 forVersion:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setFeedbackEnabled:(_Bool)arg1 forVersion:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isLaunchScreenEnabledForBundleID:(id)arg1;
- (_Bool)isFeedbackEnabledForBundleID:(id)arg1;
- (id)getLaunchInfoForVersion:(id)arg1;
- (void)getLaunchInfoForBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)getLaunchInfoForBundleID:(id)arg1;
- (void)getFeedbackMetadataForBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)getEmailAddressForBundleID:(id)arg1;
- (id)getDisplayNamesForBundleID:(id)arg1;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end
