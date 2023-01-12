//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSection-Protocol.h>

@class AVTAvatarAttributeEditorSectionOptions, NSArray, NSString;
@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;

@interface AVTAvatarAttributeEditorMulticolorPickerSection : NSObject <AVTAvatarAttributeEditorSection>
{
    NSString *_localizedName;
    NSArray *_sectionItems;
    NSString *_identifier;
    AVTAvatarAttributeEditorSectionOptions *_options;
    unsigned long long _intendedDestination;
    id <AVTAvatarAttributeEditorSectionSupplementalPicker> _supplementalPicker;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) id <AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker; // @synthesize supplementalPicker=_supplementalPicker;
@property(nonatomic) unsigned long long intendedDestination; // @synthesize intendedDestination=_intendedDestination;
@property(readonly, nonatomic) AVTAvatarAttributeEditorSectionOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSArray *sections;
@property(readonly, nonatomic) struct UIEdgeInsets separatorInsets;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (_Bool)shouldDisplayTitle;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 items:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
