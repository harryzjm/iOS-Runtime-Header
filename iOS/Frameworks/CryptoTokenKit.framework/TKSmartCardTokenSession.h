//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TKSmartCard;

@interface TKSmartCardTokenSession
{
    TKSmartCard *_smartCard;
    _Bool _hasSession;
    TKSmartCard *_errorCard;
}

- (void).cxx_destruct;
- (id)name;
- (void)endRequest;
@property(readonly) TKSmartCard *smartCard;
- (void)beginRequest;
- (id)initWithToken:(id)arg1;

@end
