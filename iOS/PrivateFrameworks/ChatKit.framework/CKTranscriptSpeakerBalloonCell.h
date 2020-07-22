//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKSpeakerButton;

@interface CKTranscriptSpeakerBalloonCell
{
    _Bool _speakerEnabled;
    _Bool _adjustSpeakerForAcknowledgment;
    _Bool _shouldShowText;
    CKSpeakerButton *_speakerButton;
}

@property(nonatomic) _Bool shouldShowText; // @synthesize shouldShowText=_shouldShowText;
@property(retain, nonatomic) CKSpeakerButton *speakerButton; // @synthesize speakerButton=_speakerButton;
@property(nonatomic) _Bool adjustSpeakerForAcknowledgment; // @synthesize adjustSpeakerForAcknowledgment=_adjustSpeakerForAcknowledgment;
@property(nonatomic, getter=isSpeakerEnabled) _Bool speakerEnabled; // @synthesize speakerEnabled=_speakerEnabled;
- (void).cxx_destruct;
@property(nonatomic, getter=isSpeakerHidden) _Bool speakerHidden;
- (void)layoutSubviewsForAlignmentContents;
- (void)setOrientation:(BOOL)arg1;

@end
