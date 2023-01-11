//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell
{
    _Bool _dateSlot;
    _Bool _isRichSlot;
    _Bool _active;
    _Bool _enabled;
    NSString *_slot;
    NTKComplication *_complication;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) _Bool isRichSlot; // @synthesize isRichSlot=_isRichSlot;
@property(readonly, nonatomic) _Bool dateSlot; // @synthesize dateSlot=_dateSlot;
@property(retain, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
@property(readonly, nonatomic) NSString *slot; // @synthesize slot=_slot;
- (id)_activeColor;
- (id)_inactiveColor;
- (id)_disabledColor;
- (void)_updateState;
- (void)_updateDetailText;
- (id)_traitCollectionAdjustedIfNeeded;
- (void)_updateLabelFonts;
- (id)initWithSlot:(id)arg1 dateSlot:(_Bool)arg2 isRichSlot:(_Bool)arg3 inFace:(id)arg4;
- (double)rowHeight;

@end
