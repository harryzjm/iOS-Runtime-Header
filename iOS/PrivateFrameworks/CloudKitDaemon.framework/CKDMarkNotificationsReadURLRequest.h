//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDMarkNotificationsReadURLRequest
{
    CDUnknownBlockType _notificationMarkedReadProgressBlock;
    NSArray *_notificationIDs;
    NSMutableDictionary *_notificationIDsByRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *notificationIDsByRequestID; // @synthesize notificationIDsByRequestID=_notificationIDsByRequestID;
@property(retain, nonatomic) NSArray *notificationIDs; // @synthesize notificationIDs=_notificationIDs;
@property(copy, nonatomic) CDUnknownBlockType notificationMarkedReadProgressBlock; // @synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock;
- (id)zoneIDsToLock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)arg1 notificationIDsToMarkRead:(id)arg2;

@end
