//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSVoiceTriggerDataCollector : NSObject
{
}

+ (id)sharedInstance;
- (void)addVTAcceptEntryAndSubmit:(id)arg1;
- (void)addVTRejectEntry:(id)arg1 truncateData:(_Bool)arg2;
- (id)fetchVoiceTriggerHeartBeatMetrics;

@end
