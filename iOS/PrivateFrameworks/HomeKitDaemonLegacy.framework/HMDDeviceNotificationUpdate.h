//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDDeviceNotificationUpdate : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_notificationsCompletions;
    NSMapTable *_characteristicUpdateTuples;
    NSMutableDictionary *_updatedMediaPropertiesByMediaProfile;
    NSString *_requestID;
    NSString *_notificationUpdateID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *notificationUpdateID; // @synthesize notificationUpdateID=_notificationUpdateID;
@property(readonly, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSArray *completions;
@property(readonly, nonatomic) NSArray *characteristicUpdateTuples;
@property(readonly, nonatomic) NSArray *mediaProperties;
- (void)updateWithCharacteristicUpdates:(id)arg1 notificationUpdateID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithUpdatedMediaPropertiesByMediaResponses:(id)arg1 notificationUpdateID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateWithNotificationUpdateID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequestID:(id)arg1;

@end

