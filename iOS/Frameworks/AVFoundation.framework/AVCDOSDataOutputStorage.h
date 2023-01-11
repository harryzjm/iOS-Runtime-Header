//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureOutput, NSMutableArray;
@protocol AVCaptureDataOutputDelegateOverride;

@interface AVCDOSDataOutputStorage : NSObject
{
    AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *_dataOutput;
    NSMutableArray *_synchronizedDataQueue;
    NSMutableArray *_timestampAdjustmentsDataQueue;
    NSMutableArray *_mdoTimeStampHistoryQueue;
}

@property(retain, nonatomic) NSMutableArray *mdoTimeStampHistoryQueue; // @synthesize mdoTimeStampHistoryQueue=_mdoTimeStampHistoryQueue;
@property(retain, nonatomic) NSMutableArray *timestampAdjustmentsDataQueue; // @synthesize timestampAdjustmentsDataQueue=_timestampAdjustmentsDataQueue;
@property(readonly, nonatomic) NSMutableArray *synchronizedDataQueue; // @synthesize synchronizedDataQueue=_synchronizedDataQueue;
@property(readonly, nonatomic) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *dataOutput; // @synthesize dataOutput=_dataOutput;
@property(readonly, nonatomic, getter=isLive) _Bool live;
- (void)dealloc;
- (id)initWithDataOutput:(id)arg1;

@end

