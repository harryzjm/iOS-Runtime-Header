//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMUserCloudShareClientInfo : NSObject <NSSecureCoding>
{
    NSData *_accountAuthToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *accountAuthToken; // @synthesize accountAuthToken=_accountAuthToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountAuthToken:(id)arg1;

@end
