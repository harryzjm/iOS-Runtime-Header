//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTask.h>

#import <DACoreDAVGlue/DATask-Protocol.h>

@class NSString;

@interface CoreDAVTask (DACoreDAVGlueExtensions) <DATask>
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)finishWithError:(id)arg1;
- (void)performTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

