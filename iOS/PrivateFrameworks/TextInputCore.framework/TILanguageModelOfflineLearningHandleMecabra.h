//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIWordSearch;

@interface TILanguageModelOfflineLearningHandleMecabra
{
    TIWordSearch *_wordSearch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TIWordSearch *wordSearch; // @synthesize wordSearch=_wordSearch;
- (void)didFinishLearning;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)load;
- (void)updateAdaptationContext:(id)arg1;

@end
