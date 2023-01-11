//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CarPlayUI/CAMLParserDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate>
{
    CALayer *_animatedGlyphLayer;
    CAStateController *_stateController;
    NSMutableArray *_barLayers;
    CALayer *_platterLayer;
    _Bool _highlighted;
    unsigned int _playbackState;
    NSString *_stateName;
}

+ (id)classSubstitions;
- (void).cxx_destruct;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
- (void)traitCollectionDidChange:(id)arg1;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_updateColors;
- (void)layoutSubviews;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (id)initWithCAML:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
