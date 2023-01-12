//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSCopying-Protocol.h>
#import <IDS/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol OS_nw_endpoint, OS_nw_parameters;

@interface IDSGroupSessionBroadcastParameter : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_groupSessionID;
    NSData *_salt;
    NSString *_serviceName;
    NSObject<OS_nw_parameters> *_parameters;
    NSObject<OS_nw_endpoint> *_endpoint;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSData *salt; // @synthesize salt=_salt;
@property(readonly, nonatomic) NSString *groupSessionID; // @synthesize groupSessionID=_groupSessionID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_requestNWConnectionforIDSGroupSessionBroadcastParameter:(CDUnknownBlockType)arg1;
- (id)initWithGroupSessionID:(id)arg1 salt:(id)arg2 serviceName:(id)arg3;
- (id)initWithGroupSessionID:(id)arg1 serviceName:(id)arg2;

@end
