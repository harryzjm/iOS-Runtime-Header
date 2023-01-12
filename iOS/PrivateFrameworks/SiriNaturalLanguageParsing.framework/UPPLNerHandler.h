//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UPPLPostProcessor;

@interface UPPLNerHandler : NSObject
{
    struct unique_ptr<global_ner::GlobalNerHandler, std::default_delete<global_ner::GlobalNerHandler>> _handler;
    UPPLPostProcessor *_postProcessor;
    _Bool _wordCharactersTensorEnabled;
    _Bool _wordLengthTensorEnabled;
    unsigned long long _maxTokens;
    unsigned long long _maxTokenLength;
    unsigned long long _beamSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wordLengthTensorEnabled; // @synthesize wordLengthTensorEnabled=_wordLengthTensorEnabled;
@property(readonly, nonatomic) _Bool wordCharactersTensorEnabled; // @synthesize wordCharactersTensorEnabled=_wordCharactersTensorEnabled;
@property(readonly, nonatomic) unsigned long long beamSize; // @synthesize beamSize=_beamSize;
@property(readonly, nonatomic) unsigned long long maxTokenLength; // @synthesize maxTokenLength=_maxTokenLength;
@property(readonly, nonatomic) unsigned long long maxTokens; // @synthesize maxTokens=_maxTokens;
- (id)generatePlumSpansForRequest:(id)arg1;
- (id)predictNamedEntitiesForRequest:(id)arg1;
- (void)loadConfigs:(id)arg1;
- (id)initWithLocale:(id)arg1 modelDir:(id)arg2 vocabTagsFile:(id)arg3 transParamsFile:(id)arg4 charIndicesFile:(id)arg5 configFile:(id)arg6 padCharacter:(id)arg7 unkCharacter:(id)arg8;
- (id)initWithLocale:(id)arg1 modelDir:(id)arg2 vocabTagsFile:(id)arg3 transParamsFile:(id)arg4 charIndicesFile:(id)arg5 configFile:(id)arg6;

@end
