//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CKDPrivacyManager : NSObject
{
    NSObject<OS_dispatch_queue> *_privacyManagerQueue;
    NSMutableSet *_requests;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableSet *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privacyManagerQueue; // @synthesize privacyManagerQueue=_privacyManagerQueue;
- (void).cxx_destruct;
- (void)_resetPrivacySettingsForAppContainerTuple:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetPrivacySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_init;
- (id)init;

@end

