//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTTranslationPhraseMetaInfo, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableSpeechTranslationMtResponse_TranslationPhrase
{
}

@property(copy, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;
@property(nonatomic) _Bool low_confidence;
@property(copy, nonatomic) NSString *meta_info;
@property(copy, nonatomic) NSString *translation_phrase;
@property(nonatomic) float confidence;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

