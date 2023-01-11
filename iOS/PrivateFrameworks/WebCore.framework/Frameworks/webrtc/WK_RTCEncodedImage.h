//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface WK_RTCEncodedImage : NSObject
{
    unsigned char _flags;
    _Bool _completeFrame;
    int _encodedWidth;
    int _encodedHeight;
    unsigned int _timeStamp;
    NSData *_buffer;
    long long _captureTimeMs;
    long long _ntpTimeMs;
    long long _encodeStartMs;
    long long _encodeFinishMs;
    unsigned long long _frameType;
    long long _rotation;
    NSNumber *_qp;
    unsigned long long _contentType;
}

@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSNumber *qp; // @synthesize qp=_qp;
@property(nonatomic) _Bool completeFrame; // @synthesize completeFrame=_completeFrame;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long frameType; // @synthesize frameType=_frameType;
@property(nonatomic) long long encodeFinishMs; // @synthesize encodeFinishMs=_encodeFinishMs;
@property(nonatomic) long long encodeStartMs; // @synthesize encodeStartMs=_encodeStartMs;
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(nonatomic) long long ntpTimeMs; // @synthesize ntpTimeMs=_ntpTimeMs;
@property(nonatomic) long long captureTimeMs; // @synthesize captureTimeMs=_captureTimeMs;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int encodedHeight; // @synthesize encodedHeight=_encodedHeight;
@property(nonatomic) int encodedWidth; // @synthesize encodedWidth=_encodedWidth;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (struct EncodedImage)nativeEncodedImage;
- (id)initWithNativeEncodedImage:(struct EncodedImage)arg1;

@end

