//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFRecordAudioAction : WFAction
{
}

+ (id)datedFilenameForFormat:(long long)arg1;
+ (id)fileTypeForFormat:(long long)arg1;
+ (id)userInterfaceXPCInterface;
+ (id)userInterfaceProtocol;
@property(readonly, nonatomic) double recordingDuration;
@property(readonly, nonatomic) _Bool startImmediately;
@property(readonly, nonatomic) long long outputFormat;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;

@end
