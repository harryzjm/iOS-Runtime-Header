//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTSnapshotScheduler : NSObject
{
    NSString *_bundleID;
}

+ (double)_quiescingWindow;
- (void).cxx_destruct;
- (void)scheduleSnapshot;
- (void)_performScheduleSnapshot;
- (id)initWithBundleID:(id)arg1;

@end

