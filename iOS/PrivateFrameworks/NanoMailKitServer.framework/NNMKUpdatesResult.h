//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NNMKProtoMessageStatusUpdates, NSArray;

@interface NNMKUpdatesResult : NSObject
{
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithNotificationPriority;
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithDefaultPriority;
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
    NSArray *_messageIdsWithNotificationPriority;
    NSArray *_messageIdsWithDefaultPriority;
    NSArray *_messageIdsWithDefaultPriorityAndProtectedChannel;
    NSArray *_messagesToAdd;
    NSArray *_messageIdsToDelete;
}

@property(retain, nonatomic) NSArray *messageIdsToDelete; // @synthesize messageIdsToDelete=_messageIdsToDelete;
@property(retain, nonatomic) NSArray *messagesToAdd; // @synthesize messagesToAdd=_messagesToAdd;
@property(retain, nonatomic) NSArray *messageIdsWithDefaultPriorityAndProtectedChannel; // @synthesize messageIdsWithDefaultPriorityAndProtectedChannel=_messageIdsWithDefaultPriorityAndProtectedChannel;
@property(retain, nonatomic) NSArray *messageIdsWithDefaultPriority; // @synthesize messageIdsWithDefaultPriority=_messageIdsWithDefaultPriority;
@property(retain, nonatomic) NSArray *messageIdsWithNotificationPriority; // @synthesize messageIdsWithNotificationPriority=_messageIdsWithNotificationPriority;
@property(retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriorityAndProtectedChannel; // @synthesize protoMessageUpdatesWithDefaultPriorityAndProtectedChannel=_protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
@property(retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriority; // @synthesize protoMessageUpdatesWithDefaultPriority=_protoMessageUpdatesWithDefaultPriority;
@property(retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithNotificationPriority; // @synthesize protoMessageUpdatesWithNotificationPriority=_protoMessageUpdatesWithNotificationPriority;
- (void).cxx_destruct;

@end

