//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRSCardRequest;
@protocol CRCard;

@interface CRSCardResponse
{
    CRSCardRequest *_request;
    id <CRCard> _card;
}

@property(retain, nonatomic) id <CRCard> card; // @synthesize card=_card;
@property(retain, nonatomic) CRSCardRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

