//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RCIntentLogger : NSObject
{
}

+ (void)deleteInteractionsWithUUID:(id)arg1;
+ (void)deleteInteractionsWithUUIDs:(id)arg1;
+ (void)donateInteraction:(id)arg1;
+ (id)interactionForPlaybackVoiceMemo;
+ (id)interactionForRecordVoiceMemo;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)arg1;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)arg1;

@end

