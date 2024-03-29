//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection.h>

@class NSArray, NSString;
@protocol SFCardSection;

@interface SFCardSection (CRCardSection)
@property(readonly, nonatomic) NSString *cardSectionIdentifier;
@property(readonly, nonatomic) _Bool hasNextCard;
@property(readonly, nonatomic) NSArray *actionCommands;
- (id)parametersForInteraction:(id)arg1;
@property(readonly, nonatomic) id <SFCardSection> backingCardSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

