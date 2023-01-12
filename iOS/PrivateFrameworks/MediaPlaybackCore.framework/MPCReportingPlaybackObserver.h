//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICPlayActivityController, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPCReportingPlaybackObserver : NSObject
{
    NSOperationQueue *_recordEventOperationQueue;
    ICPlayActivityController *_reportingController;
    _Bool _offline;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;
- (id)newPlayActivityEvent;
- (id)init;

@end

