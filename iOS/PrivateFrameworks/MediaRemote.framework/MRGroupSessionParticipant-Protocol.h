//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRUserIdentity, NSString;

@protocol MRGroupSessionParticipant <NSObject>
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, nonatomic) MRUserIdentity *identity;
@property(readonly, nonatomic) NSString *identifier;
@end

