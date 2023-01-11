//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding>
{
    long long _proximity;
    NSUUID *_identifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_roomName;
    NSArray *_contextSnapshots;
    NSString *_productType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(readonly, copy, nonatomic) NSArray *contextSnapshots; // @synthesize contextSnapshots=_contextSnapshots;
@property(readonly, copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(readonly, copy, nonatomic) NSString *mediaRouteIdentifier; // @synthesize mediaRouteIdentifier=_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 mediaSystemIdentifier:(id)arg2 mediaRouteIdentifier:(id)arg3 productType:(id)arg4 roomName:(id)arg5 contextSnapshots:(id)arg6;

@end
