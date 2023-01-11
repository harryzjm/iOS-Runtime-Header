//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAMLAuthZDecisionQueryElement;

@interface SAMLAuthZDecisionQuery
{
    SAMLAuthZDecisionQueryElement *_requestElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SAMLAuthZDecisionQueryElement *requestElement; // @synthesize requestElement=_requestElement;
- (void)setResource:(id)arg1;
- (void)addAction:(id)arg1;
- (void)setSubjectFromResponse:(id)arg1;
@property(readonly, nonatomic) NSString *channelId;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;

@end
