//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIAutocorrectionList, TICandidateRequestToken;

@protocol TICandidateHandler
@property(readonly, nonatomic) _Bool asynchronous;
@property(readonly, nonatomic) TICandidateRequestToken *requestToken;
- (void)close;
- (void)pushCandidates:(TIAutocorrectionList *)arg1;
- (void)open;
@end

