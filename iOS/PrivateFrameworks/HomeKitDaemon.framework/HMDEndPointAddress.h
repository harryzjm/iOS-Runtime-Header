//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface HMDEndPointAddress <HMDCameraTLVCreateParse, NSSecureCoding>
{
    _Bool _isIPv6Address;
    NSString *_ipAddress;
    NSNumber *_videoRTPPort;
    NSNumber *_audioRTPPort;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *audioRTPPort; // @synthesize audioRTPPort=_audioRTPPort;
@property(readonly, copy, nonatomic) NSNumber *videoRTPPort; // @synthesize videoRTPPort=_videoRTPPort;
@property(readonly, nonatomic) _Bool isIPv6Address; // @synthesize isIPv6Address=_isIPv6Address;
@property(readonly, copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (_Bool)compatibleWithRemoteEndPoint:(id)arg1;
- (id)initWithIPAddress:(id)arg1 isIPv6Address:(_Bool)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4;

@end

