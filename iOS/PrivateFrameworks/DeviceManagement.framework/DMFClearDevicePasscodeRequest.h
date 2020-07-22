//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskRequest.h>

@class NSData, NSString;

@interface DMFClearDevicePasscodeRequest : CATTaskRequest
{
    NSData *_unlockTokenData;
    NSString *_secret;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSData *unlockTokenData; // @synthesize unlockTokenData=_unlockTokenData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
