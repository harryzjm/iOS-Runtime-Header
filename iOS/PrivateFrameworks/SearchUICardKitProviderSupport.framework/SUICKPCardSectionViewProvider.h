//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchUICardKitProviderSupport/CRKIdentifiedCardSectionViewProviding-Protocol.h>

@class NSArray, NSString, SUICKPFeedbackDelegateDemultiplexer;
@protocol CRCard, CRKCardSectionViewProviderDelegate;

@interface SUICKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>
{
    SUICKPFeedbackDelegateDemultiplexer *_feedbackDelegateDemux;
    id <CRCard> _card;
    NSArray *_viewConfigurations;
    id <CRKCardSectionViewProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <CRKCardSectionViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CRCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
@property(readonly, nonatomic) NSArray *viewConfigurations; // @synthesize viewConfigurations=_viewConfigurations;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (id)initWithCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

