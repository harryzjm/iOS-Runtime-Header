//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface CKSpeakerButton : UIButton
{
    BOOL _orientation;
    _Bool _speakerEnabled;
    _Bool _shouldShowText;
}

+ (id)speakerImageWithEnabledState:(_Bool)arg1;
+ (id)speakerImageWithOrientation:(BOOL)arg1 speakerEnabled:(_Bool)arg2 shouldShowText:(_Bool)arg3;
@property(nonatomic) _Bool shouldShowText; // @synthesize shouldShowText=_shouldShowText;
@property(nonatomic, getter=isSpeakerEnabled) _Bool speakerEnabled; // @synthesize speakerEnabled=_speakerEnabled;
@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
- (void)traitCollectionDidChange:(id)arg1;
- (void)hideSpeakerText;
- (void)touchUpInside:(id)arg1;
- (void)updateSpeakerImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

