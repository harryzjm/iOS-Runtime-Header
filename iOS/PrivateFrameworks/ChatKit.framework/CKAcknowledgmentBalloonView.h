//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAcknowledgmentGlyphView;

@interface CKAcknowledgmentBalloonView
{
    unsigned long long _stackCount;
    long long _coloredPart;
    CKAcknowledgmentGlyphView *_glyphView;
}

@property(retain, nonatomic) CKAcknowledgmentGlyphView *glyphView; // @synthesize glyphView=_glyphView;
@property(nonatomic) long long coloredPart; // @synthesize coloredPart=_coloredPart;
@property(nonatomic) unsigned long long stackCount; // @synthesize stackCount=_stackCount;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;

@end

