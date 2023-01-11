//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResults : NSObject
{
    _Bool _supportsDynamicMaxBitrate;
    NSString *_remoteUserAgent;
    NSString *_remoteBasebandCodec;
    unsigned int _remoteBasebandCodecSampleRate;
    NSMutableDictionary *_bandwidthSettings;
}

@property(retain, nonatomic) NSMutableDictionary *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(nonatomic) unsigned int remoteBasebandCodecSampleRate; // @synthesize remoteBasebandCodecSampleRate=_remoteBasebandCodecSampleRate;
@property(retain, nonatomic) NSString *remoteBasebandCodec; // @synthesize remoteBasebandCodec=_remoteBasebandCodec;
@property(retain, nonatomic) NSString *remoteUserAgent; // @synthesize remoteUserAgent=_remoteUserAgent;
@property(nonatomic) _Bool supportsDynamicMaxBitrate; // @synthesize supportsDynamicMaxBitrate=_supportsDynamicMaxBitrate;
- (void)dealloc;
- (id)init;

@end

