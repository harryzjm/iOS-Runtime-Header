//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNSuspendableSchedulerDecorator, NSString;
@protocol CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNUISchedulerProvider : NSObject
{
    id <CNSchedulerProvider> _schedulerProvider;
    CNSuspendableSchedulerDecorator *_suspendableBackgroundScheduler;
    id <CNScheduler> _afterCACommitScheduler;
}

+ (id)makeBackgroundScheduler;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNScheduler> afterCACommitScheduler; // @synthesize afterCACommitScheduler=_afterCACommitScheduler;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *suspendableBackgroundScheduler; // @synthesize suspendableBackgroundScheduler=_suspendableBackgroundScheduler;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
- (id)newReaderWriterSchedulerWithName:(id)arg1;
- (id)newSynchronousSerialSchedulerWithName:(id)arg1;
- (id)newSerialSchedulerWithName:(id)arg1;
@property(readonly, nonatomic) id <CNScheduler> immediateScheduler;
@property(readonly, nonatomic) id <CNScheduler> inlineScheduler;
@property(readonly, nonatomic) id <CNScheduler> mainThreadScheduler;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
@property(readonly, nonatomic) id <CNScheduler> backgroundScheduler;
- (void)resumeBackgroundScheduler;
- (void)suspendBackgroundScheduler;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

