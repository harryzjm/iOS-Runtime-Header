//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class IDSStunCandidatePair, NSDictionary;

@protocol IDSStunCandidatePairDelegate <NSObject>
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didAddQREvent:(NSDictionary *)arg2;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 success:(_Bool)arg3;
@end
