//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability : NSObject
{
    MISSING_TYPE *primitivesMap;
    MISSING_TYPE *key;
}

+ (_Bool)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matchesWithDescriptions:(id)arg1;
@property(nonatomic, readonly) long long supportsAudioPlayback;
- (id)initWithStatus:(long long)arg1;
@property(nonatomic, copy) NSString *key;

@end
