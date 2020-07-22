//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding>
{
    NSData *_identifier;
    long long _timesPresented;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long timesPresented; // @synthesize timesPresented=_timesPresented;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
