//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSuzeLeaseSession, MPCSuzeLeaseSession;

__attribute__((visibility("hidden")))
@interface _MPCSuzeLeaseSessionInfo : NSObject
{
    _Bool _shouldStopWhenFinished;
    long long _clientCount;
    ICSuzeLeaseSession *_icLeaseSession;
    MPCSuzeLeaseSession *_mpcLeaseSession;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStopWhenFinished; // @synthesize shouldStopWhenFinished=_shouldStopWhenFinished;
@property(readonly, nonatomic) MPCSuzeLeaseSession *mpcLeaseSession; // @synthesize mpcLeaseSession=_mpcLeaseSession;
@property(readonly, nonatomic) ICSuzeLeaseSession *icLeaseSession; // @synthesize icLeaseSession=_icLeaseSession;
@property(nonatomic) long long clientCount; // @synthesize clientCount=_clientCount;
- (id)initWithICLeaseSession:(id)arg1;

@end

