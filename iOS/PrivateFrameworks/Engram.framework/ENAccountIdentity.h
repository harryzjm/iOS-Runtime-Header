//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@protocol ENAccountKey, ENDeviceKey;

@interface ENAccountIdentity : NSObject <NSSecureCoding>
{
    id <ENAccountKey> _accountKey;
    id <ENDeviceKey> _deviceKey;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ENDeviceKey> deviceKey; // @synthesize deviceKey=_deviceKey;
@property(retain, nonatomic) id <ENAccountKey> accountKey; // @synthesize accountKey=_accountKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2;

@end
