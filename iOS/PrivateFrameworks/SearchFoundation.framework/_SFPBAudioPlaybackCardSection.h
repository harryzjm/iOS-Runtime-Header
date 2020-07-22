//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBAudioPlaybackCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, _SFPBText;

@interface _SFPBAudioPlaybackCardSection : PBCodable <_SFPBAudioPlaybackCardSection, NSSecureCoding>
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
    _SFPBColor *_backgroundColor;
    _SFPBImage *_topImage;
    _SFPBText *_topText;
    NSString *_topSecondaryText;
    _SFPBImage *_bottomImage;
    _SFPBText *_bottomText;
    _SFPBText *_bottomSubtitle;
    NSString *_topImageEmoji;
    NSString *_bottomImageEmoji;
    NSArray *_playCommands;
    NSArray *_stopCommands;
    _SFPBRichText *_detailText;
    _SFPBRichText *_title;
    _SFPBRichText *_subtitle;
    _SFPBImage *_thumbnail;
}

@property(retain, nonatomic) _SFPBImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) _SFPBRichText *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) _SFPBRichText *title; // @synthesize title=_title;
@property(retain, nonatomic) _SFPBRichText *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSArray *stopCommands; // @synthesize stopCommands=_stopCommands;
@property(copy, nonatomic) NSArray *playCommands; // @synthesize playCommands=_playCommands;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *bottomImageEmoji; // @synthesize bottomImageEmoji=_bottomImageEmoji;
@property(copy, nonatomic) NSString *topImageEmoji; // @synthesize topImageEmoji=_topImageEmoji;
@property(retain, nonatomic) _SFPBText *bottomSubtitle; // @synthesize bottomSubtitle=_bottomSubtitle;
@property(retain, nonatomic) _SFPBText *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) _SFPBImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property(copy, nonatomic) NSString *topSecondaryText; // @synthesize topSecondaryText=_topSecondaryText;
@property(retain, nonatomic) _SFPBText *topText; // @synthesize topText=_topText;
@property(retain, nonatomic) _SFPBImage *topImage; // @synthesize topImage=_topImage;
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
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasDetailText;
- (id)stopCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopCommandsCount;
- (void)addStopCommands:(id)arg1;
- (void)clearStopCommands;
- (id)playCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playCommandsCount;
- (void)addPlayCommands:(id)arg1;
- (void)clearPlayCommands;
@property(readonly, nonatomic) _Bool hasState;
@property(readonly, nonatomic) _Bool hasBottomImageEmoji;
@property(readonly, nonatomic) _Bool hasTopImageEmoji;
@property(readonly, nonatomic) _Bool hasBottomSubtitle;
@property(readonly, nonatomic) _Bool hasBottomText;
@property(readonly, nonatomic) _Bool hasBottomImage;
@property(readonly, nonatomic) _Bool hasTopSecondaryText;
@property(readonly, nonatomic) _Bool hasTopText;
@property(readonly, nonatomic) _Bool hasTopImage;
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

