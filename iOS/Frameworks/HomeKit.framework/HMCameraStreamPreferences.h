//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSMutableSet;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding>
{
    NSMutableSet *_preferredVideoResolutions;
    NSMutableSet *_preferredAudioCodecs;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableSet *preferredAudioCodecs; // @synthesize preferredAudioCodecs=_preferredAudioCodecs;
@property(readonly, nonatomic) NSMutableSet *preferredVideoResolutions; // @synthesize preferredVideoResolutions=_preferredVideoResolutions;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

