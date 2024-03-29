//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSupportedVideoConfiguration : HAPTLVBase
{
    NSArray *_codecConfigurations;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithCodecConfigurations:(id)arg1;

@end

