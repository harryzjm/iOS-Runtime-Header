//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell
{
    _Bool _parentMessageIsFromMe;
}

@property(nonatomic) _Bool parentMessageIsFromMe; // @synthesize parentMessageIsFromMe=_parentMessageIsFromMe;
- (void)prepareForReuse;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
@property(retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;
- (void)configureForChatItem:(id)arg1;

@end
