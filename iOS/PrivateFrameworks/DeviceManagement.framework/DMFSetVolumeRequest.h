//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFSetVolumeRequest : CATTaskRequest
{
    float _volume;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

