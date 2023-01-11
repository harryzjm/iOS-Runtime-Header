//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>
#import <MediaRemote/NSMutableCopying-Protocol.h>
#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRDeviceInfo, MRSupportedProtocolMessages, NSString;

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_hostName;
    long long _hostPort;
    MRSupportedProtocolMessages *_supportedMessages;
    MRDeviceInfo *_deviceInfo;
    _Bool _usingSystemPairing;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool usingSystemPairing; // @synthesize usingSystemPairing=_usingSystemPairing;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @synthesize supportedMessages=_supportedMessages;
@property(readonly, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) long long hostPort; // @synthesize hostPort=_hostPort;
@property(readonly, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
