//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFImagesCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor;

@interface SFImagesCardSection <SFImagesCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int borderless:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _borderless;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSArray *_images;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool borderless; // @synthesize borderless=_borderless;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
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
- (_Bool)hasBorderless;
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

