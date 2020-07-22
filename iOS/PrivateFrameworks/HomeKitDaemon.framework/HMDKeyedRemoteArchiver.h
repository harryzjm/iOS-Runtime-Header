//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDKeyedRemoteArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;
    NSString *_transportType;
}

@property(retain, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
- (void).cxx_destruct;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)__configure;
- (void)dealloc;
- (id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(_Bool)arg2 remoteGateway:(_Bool)arg3 remoteUserIsAdministrator:(_Bool)arg4 user:(id)arg5 supportedFeatures:(id)arg6;

@end
