//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDUIDialogPresenter, NSString;
@protocol HMDMetricsTTRDataStoring, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMetricsTTRManager : NSObject
{
    HMDUIDialogPresenter *_dialog;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMDMetricsTTRDataStoring> _dataStore;
    CDUnknownBlockType _dateFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dateFactory; // @synthesize dateFactory=_dateFactory;
@property(readonly, nonatomic) id <HMDMetricsTTRDataStoring> dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDUIDialogPresenter *dialog; // @synthesize dialog=_dialog;
- (void)presentRadarDialogForCategory:(id)arg1;
- (id)initWithDialog:(id)arg1 workQueue:(id)arg2 dataStore:(id)arg3 dateFactory:(CDUnknownBlockType)arg4;
- (id)initWithDialog:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

