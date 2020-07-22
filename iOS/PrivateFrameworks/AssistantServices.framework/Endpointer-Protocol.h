//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@protocol Endpointer <NSObject>
@property double endWaitTime;
@property double interspeechWaitTime;
@property double startWaitTime;
@property int endpointMode;
- (void)reset;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;

@optional
- (_Bool)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;
- (_Bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
@end

