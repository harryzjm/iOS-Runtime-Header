//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAudioBuffer, MRAudioDataBlock;

@interface MRSendVoiceInputMessage
{
    MRAudioDataBlock *_dataBlock;
}

- (void).cxx_destruct;
- (void)_initializeDataIfNecessary;
@property(readonly, nonatomic) float gain;
@property(readonly, nonatomic) CDStruct_ace97b7a time;
@property(readonly, nonatomic) MRAudioBuffer *buffer;
- (unsigned long long)priority;
- (unsigned long long)type;
- (id)initWithBuffer:(id)arg1 time:(CDStruct_ace97b7a)arg2 gain:(float)arg3;

@end

