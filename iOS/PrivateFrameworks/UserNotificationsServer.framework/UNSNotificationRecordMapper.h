//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCFBundle;

@interface UNSNotificationRecordMapper : NSObject
{
    BSCFBundle *_bundle;
}

- (void).cxx_destruct;
- (id)_notificationTriggerForNotificationRecord:(id)arg1;
- (id)_notificationSoundForNotificationRecord:(id)arg1;
- (id)_notificationContentForNotificationRecord:(id)arg1;
- (id)notificationRequestForNotificationRecord:(id)arg1;
- (id)notificationForNotificationRecord:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end
