//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFDetailedRowCardSection.h>

#import <SearchUI/SearchUIAuxilliaryFieldProtocol-Protocol.h>

@class NSString, SFActionItem, SFCard, SFImage, SFRichText;

@interface SFDetailedRowCardSection (SearchUIExtensions) <SearchUIAuxilliaryFieldProtocol>
@property(readonly) SFCard *card;
@property(readonly) int auxiliaryBottomTextColor;
@property(readonly) NSString *auxiliaryMiddleText;
@property(readonly) NSString *auxiliaryBottomText;
@property(readonly) NSString *auxiliaryTopText;

// Remaining properties
@property(readonly) SFActionItem *action;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) SFImage *thumbnail;
@property(readonly) SFRichText *title;
@end

