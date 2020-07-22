//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaInfoCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaItem, _SFPBRichText;

@interface _SFPBMediaInfoCardSection : PBCodable <_SFPBMediaInfoCardSection, NSSecureCoding>
{
    CDStruct_23c427ad _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isMediaContainer;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBMediaItem *_mediaItem;
    NSArray *_details;
    _SFPBActionItem *_playAction;
    NSArray *_offers;
    NSString *_watchListIdentifier;
    NSString *_watchListButtonLabel;
    NSString *_watchListContinuationText;
    NSString *_watchListConfirmationText;
    _SFPBRichText *_specialOfferButtonLabel;
}

@property(retain, nonatomic) _SFPBRichText *specialOfferButtonLabel; // @synthesize specialOfferButtonLabel=_specialOfferButtonLabel;
@property(nonatomic) _Bool isMediaContainer; // @synthesize isMediaContainer=_isMediaContainer;
@property(copy, nonatomic) NSString *watchListConfirmationText; // @synthesize watchListConfirmationText=_watchListConfirmationText;
@property(copy, nonatomic) NSString *watchListContinuationText; // @synthesize watchListContinuationText=_watchListContinuationText;
@property(copy, nonatomic) NSString *watchListButtonLabel; // @synthesize watchListButtonLabel=_watchListButtonLabel;
@property(copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) _SFPBActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) _SFPBMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasSpecialOfferButtonLabel;
@property(readonly, nonatomic) _Bool hasIsMediaContainer;
@property(readonly, nonatomic) _Bool hasWatchListConfirmationText;
@property(readonly, nonatomic) _Bool hasWatchListContinuationText;
@property(readonly, nonatomic) _Bool hasWatchListButtonLabel;
@property(readonly, nonatomic) _Bool hasWatchListIdentifier;
- (id)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (void)addOffers:(id)arg1;
- (void)clearOffers;
@property(readonly, nonatomic) _Bool hasPlayAction;
- (id)detailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailsCount;
- (void)addDetails:(id)arg1;
- (void)clearDetails;
@property(readonly, nonatomic) _Bool hasMediaItem;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

