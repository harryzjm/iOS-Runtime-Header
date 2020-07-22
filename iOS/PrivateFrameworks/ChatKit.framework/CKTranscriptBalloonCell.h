//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKBalloonView;

@interface CKTranscriptBalloonCell
{
    _Bool _mayReparentPluginViews;
    CKBalloonView *_balloonView;
}

@property(nonatomic) _Bool mayReparentPluginViews; // @synthesize mayReparentPluginViews=_mayReparentPluginViews;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
- (void).cxx_destruct;
- (void)setAnimationPauseReasons:(long long)arg1;
- (id)messageDisplayView;
- (void)willLayoutDrawerLabelFrame:(struct CGRect *)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)configureForChatItem:(id)arg1;

@end

