//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFNewsCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFCommand, SFImage, SFRichText, SFUserReportRequest;

@interface SFNewsCardSection <SFNewsCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_5ff9a38c _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFRichText *_title;
    SFRichText *_subtitle;
    SFImage *_thumbnail;
    SFImage *_providerImage;
    SFRichText *_providerTitle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SFRichText *providerTitle; // @synthesize providerTitle=_providerTitle;
@property(retain, nonatomic) SFImage *providerImage; // @synthesize providerImage=_providerImage;
@property(retain, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) SFRichText *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) SFRichText *title; // @synthesize title=_title;
@property(retain, nonatomic) SFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasHasTopPadding;
- (_Bool)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *cardSectionDetail;
@property(copy, nonatomic) NSString *cardSectionId;
@property(readonly) NSArray *cardsFromButtons;
@property(readonly) NSArray *cardsFromEmbeddedSections;
@property(retain, nonatomic) SFCommand *command;
@property(retain, nonatomic) NSString *commandDetail;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *embeddedCards;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *previewButtonItems;
@property(retain, nonatomic) NSString *previewButtonItemsTitle;
@property(retain, nonatomic) SFCommand *previewCommand;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;

@end
