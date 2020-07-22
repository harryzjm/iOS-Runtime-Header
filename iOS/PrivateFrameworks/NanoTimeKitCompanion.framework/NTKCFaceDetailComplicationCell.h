//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell
{
    _Bool _dateSlot;
    _Bool _active;
    NSString *_slot;
    NTKComplication *_complication;
}

+ (id)reuseIdentifier;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) _Bool dateSlot; // @synthesize dateSlot=_dateSlot;
@property(retain, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
@property(readonly, nonatomic) NSString *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)_activeColor;
- (id)_inactiveColor;
- (void)_updateDetailText;
- (id)initWithSlot:(id)arg1 dateSlot:(_Bool)arg2 inFace:(id)arg3;
- (double)rowHeight;

@end

