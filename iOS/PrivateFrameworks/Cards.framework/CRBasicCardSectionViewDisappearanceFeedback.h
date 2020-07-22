//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Cards/CRCardSectionViewDisappearanceFeedback-Protocol.h>

@class NSString, SFFeedback;
@protocol CRCardSection;

@interface CRBasicCardSectionViewDisappearanceFeedback : NSObject <CRCardSectionViewDisappearanceFeedback>
{
    id <CRCardSection> _cardSection;
}

@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) SFFeedback *backingFeedback;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

