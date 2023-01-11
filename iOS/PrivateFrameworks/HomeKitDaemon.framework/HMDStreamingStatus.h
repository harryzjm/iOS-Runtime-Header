//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDStreamingStatus <HMDTLVCreateParse, NSSecureCoding>
{
    unsigned long long _streamingStatus;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long streamingStatus; // @synthesize streamingStatus=_streamingStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;

@end

