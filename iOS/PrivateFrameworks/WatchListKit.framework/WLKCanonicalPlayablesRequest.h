//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WLKCanonicalPlayablesRequest
{
    NSString *_canonicalID;
    NSString *_statsID;
}

@property(readonly, copy, nonatomic) NSString *statsID; // @synthesize statsID=_statsID;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStatsID:(id)arg1;
- (id)initWithCanonicalID:(id)arg1;

@end

