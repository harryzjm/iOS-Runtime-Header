//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSSecureCoding-Protocol.h>

@protocol IDSDestinationProtocol;

@interface IDSSentInvitation <NSSecureCoding>
{
    id <IDSDestinationProtocol> _destination;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <IDSDestinationProtocol> destination; // @synthesize destination=_destination;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)setContext:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSenderMergeID:(id)arg1;
- (id)initWithDestination:(id)arg1 state:(long long)arg2 expirationDate:(id)arg3 uniqueID:(id)arg4 context:(id)arg5;

@end
