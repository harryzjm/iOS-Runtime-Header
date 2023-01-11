//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding>
{
    unsigned long long _version;
    NSData *_data;
}

+ (id)payloadWithData:(id)arg1 version:(unsigned long long)arg2;
+ (id)payloadWithData:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
