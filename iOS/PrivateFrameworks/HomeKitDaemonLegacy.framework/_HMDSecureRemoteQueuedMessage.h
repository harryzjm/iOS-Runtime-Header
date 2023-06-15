//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteMessage, HMFTimer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HMDSecureRemoteQueuedMessage : HMFObject
{
    HMDRemoteMessage *_message;
    HMFTimer *_timer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) HMDRemoteMessage *message; // @synthesize message=_message;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

