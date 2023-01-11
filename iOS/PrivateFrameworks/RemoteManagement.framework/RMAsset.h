//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteManagement/NSSecureCoding-Protocol.h>

@class NSData, NSString, RMManagementChannel;

@interface RMAsset : NSObject <NSSecureCoding>
{
    NSString *_type;
    NSString *_identifier;
    NSString *_serverToken;
    NSData *_content;
    RMManagementChannel *_channel;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) RMManagementChannel *channel; // @synthesize channel=_channel;
@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *serverToken; // @synthesize serverToken=_serverToken;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqualToAsset:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 channel:(id)arg5;

@end
