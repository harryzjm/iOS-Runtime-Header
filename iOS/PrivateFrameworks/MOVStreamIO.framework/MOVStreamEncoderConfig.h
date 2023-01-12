//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MOVStreamEncoderConfig : NSObject
{
    unsigned int _codecType;
    NSDictionary *_encoderSpecification;
    NSDictionary *_sessionProperties;
}

+ (id)monochrome10BitEncoderConfigUsingAVEWithBitrate:(unsigned long long)arg1;
+ (id)encoderIdsForType:(unsigned int)arg1;
+ (_Bool)isEncoderAvailableOfType:(unsigned int)arg1 withId:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSDictionary *sessionProperties; // @synthesize sessionProperties=_sessionProperties;
@property(retain) NSDictionary *encoderSpecification; // @synthesize encoderSpecification=_encoderSpecification;
@property unsigned int codecType; // @synthesize codecType=_codecType;
- (_Bool)writeToFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithCodecType:(unsigned int)arg1 encoderSpecification:(id)arg2 sessionProperties:(id)arg3;
- (_Bool)applySessionProperties:(struct OpaqueVTCompressionSession *)arg1;

@end
