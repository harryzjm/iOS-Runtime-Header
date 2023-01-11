//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject
{
    double _lastLogTime;
    BLTSectionInfoList *_sectionInfoList;
}

+ (id)sharedNotificationEnabledSettingsLogger:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BLTSectionInfoList *sectionInfoList; // @synthesize sectionInfoList=_sectionInfoList;
- (void)_performActivity:(id)arg1;
- (void)_registerActivity;
- (void)_log;
- (id)init;

@end
