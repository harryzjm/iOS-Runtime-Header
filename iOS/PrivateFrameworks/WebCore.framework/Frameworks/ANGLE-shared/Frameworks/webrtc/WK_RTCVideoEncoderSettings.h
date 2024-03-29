//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderSettings : NSObject
{
    unsigned short _width;
    unsigned short _height;
    unsigned int _startBitrate;
    unsigned int _maxBitrate;
    unsigned int _minBitrate;
    unsigned int _maxFramerate;
    unsigned int _qpMax;
    NSString *_name;
    unsigned long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int qpMax; // @synthesize qpMax=_qpMax;
@property(nonatomic) unsigned int maxFramerate; // @synthesize maxFramerate=_maxFramerate;
@property(nonatomic) unsigned int minBitrate; // @synthesize minBitrate=_minBitrate;
@property(nonatomic) unsigned int maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(nonatomic) unsigned int startBitrate; // @synthesize startBitrate=_startBitrate;
@property(nonatomic) unsigned short height; // @synthesize height=_height;
@property(nonatomic) unsigned short width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (struct VideoCodec)nativeVideoCodec;
- (id)initWithNativeVideoCodec:(const void *)arg1;

@end

