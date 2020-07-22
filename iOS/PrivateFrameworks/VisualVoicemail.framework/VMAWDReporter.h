//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AWDServerConnection;
@protocol OS_dispatch_queue;

@interface VMAWDReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_serverConnection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWDServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_reportMetricWithID:(unsigned int)arg1 metric:(id)arg2;
- (void)reportVoicemailTranscriptionRatedAccurate:(_Bool)arg1;
- (void)reportVoicemailDownloadedWithDuration:(int)arg1;
- (id)init;

@end
