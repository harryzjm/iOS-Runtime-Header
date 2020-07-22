//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDSetupEndPointRead <NSSecureCoding>
{
    unsigned long long _responseStatus;
    NSNumber *_videoSSRC;
    NSNumber *_audioSSRC;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *audioSSRC; // @synthesize audioSSRC=_audioSSRC;
@property(readonly, copy, nonatomic) NSNumber *videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(readonly, nonatomic) unsigned long long responseStatus; // @synthesize responseStatus=_responseStatus;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVDataOnFailure;
- (_Bool)_parseFromTLVDataOnSuccess;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7;

@end

