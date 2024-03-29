//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SiriTTSAudioHardware : NSObject
{
    _Bool _isBluetooth;
    _Bool _isAppleProduct;
    float _volume;
    NSString *_routeType;
    long long _vendorId;
    long long _productId;
}

+ (id)defaultOutput;
- (void).cxx_destruct;
@property(readonly) float volume; // @synthesize volume=_volume;
@property(readonly) long long productId; // @synthesize productId=_productId;
@property(readonly) long long vendorId; // @synthesize vendorId=_vendorId;
@property(readonly) _Bool isAppleProduct; // @synthesize isAppleProduct=_isAppleProduct;
@property(readonly) _Bool isBluetooth; // @synthesize isBluetooth=_isBluetooth;
@property(readonly) NSString *routeType; // @synthesize routeType=_routeType;
- (void)fetchHardwareInfo;

@end

