//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAudioPlaybackCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFImage, SFRichText, SFText;

@interface SFAudioPlaybackCardSection <SFAudioPlaybackCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_29067556 _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    int _separatorStyle;
    int _state;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFImage *_topImage;
    SFText *_topText;
    NSString *_topSecondaryText;
    SFImage *_bottomImage;
    SFText *_bottomText;
    SFText *_bottomSubtitle;
    NSString *_topImageEmoji;
    NSString *_bottomImageEmoji;
    NSArray *_playCommands;
    NSArray *_stopCommands;
    SFRichText *_detailText;
    SFRichText *_title;
    SFRichText *_subtitle;
    SFImage *_thumbnail;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) SFRichText *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) SFRichText *title; // @synthesize title=_title;
@property(retain, nonatomic) SFRichText *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSArray *stopCommands; // @synthesize stopCommands=_stopCommands;
@property(copy, nonatomic) NSArray *playCommands; // @synthesize playCommands=_playCommands;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *bottomImageEmoji; // @synthesize bottomImageEmoji=_bottomImageEmoji;
@property(copy, nonatomic) NSString *topImageEmoji; // @synthesize topImageEmoji=_topImageEmoji;
@property(retain, nonatomic) SFText *bottomSubtitle; // @synthesize bottomSubtitle=_bottomSubtitle;
@property(retain, nonatomic) SFText *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) SFImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property(copy, nonatomic) NSString *topSecondaryText; // @synthesize topSecondaryText=_topSecondaryText;
@property(retain, nonatomic) SFText *topText; // @synthesize topText=_topText;
@property(retain, nonatomic) SFImage *topImage; // @synthesize topImage=_topImage;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasState;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasHasTopPadding;
- (_Bool)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;

@end

