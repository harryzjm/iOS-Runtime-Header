//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFSetInterfaceOrientationRequest : CATTaskRequest
{
    _Bool _lockOrientation;
    unsigned long long _interfaceOrientation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) _Bool lockOrientation; // @synthesize lockOrientation=_lockOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

