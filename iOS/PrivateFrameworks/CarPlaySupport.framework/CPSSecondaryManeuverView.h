//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPManeuver, CPSAbridgableLabel, UIImageView;

@interface CPSSecondaryManeuverView
{
    UIImageView *_symbolView;
    CPManeuver *_maneuver;
    CPSAbridgableLabel *_instructionLabel;
}

@property(retain, nonatomic) CPSAbridgableLabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) CPManeuver *maneuver; // @synthesize maneuver=_maneuver;
@property(retain, nonatomic) UIImageView *symbolView; // @synthesize symbolView=_symbolView;
- (void).cxx_destruct;
- (id)initWithManeuver:(id)arg1 minimalMode:(_Bool)arg2 style:(long long)arg3;
- (void)backgroundColorDidChange;

@end
