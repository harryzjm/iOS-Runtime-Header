//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQuickResponsesPredictionParameters : NSObject
{
    _Bool _isPersonalizationDisabled;
    _Bool _isReplyTextRandomized;
    _Bool _isPerCategory;
    _Bool _dynamicLabelsEnabled;
    _Bool _hasNegativeClass;
    double _weightForCategoryAverage;
    double _weightForCategoryMax;
    double _weightForIndividualModel;
    double _classDiscount;
    double _responsesBonus;
    double _minToShowThreshold;
    unsigned long long _defaultResponsesToReturn;
    unsigned long long _responsesToShowAtTopForDiversity;
    double _personalizationExplorationFactor;
    double _personalizationDisplayedPseudocount;
    double _personalizationSelectedPseudocountPerSemanticClass;
    unsigned long long _maxPromptLength;
    double _maxPromptWindowSeconds;
    NSString *_promptJoiningString;
    NSString *_modelTypeName;
    NSString *_subModelKeyString;
    double _negativeClassMaximumToPredict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double negativeClassMaximumToPredict; // @synthesize negativeClassMaximumToPredict=_negativeClassMaximumToPredict;
@property(readonly, nonatomic) _Bool hasNegativeClass; // @synthesize hasNegativeClass=_hasNegativeClass;
@property(readonly, nonatomic) _Bool dynamicLabelsEnabled; // @synthesize dynamicLabelsEnabled=_dynamicLabelsEnabled;
@property(readonly, nonatomic) NSString *subModelKeyString; // @synthesize subModelKeyString=_subModelKeyString;
@property(readonly, nonatomic) NSString *modelTypeName; // @synthesize modelTypeName=_modelTypeName;
@property(readonly, nonatomic) NSString *promptJoiningString; // @synthesize promptJoiningString=_promptJoiningString;
@property(readonly, nonatomic) double maxPromptWindowSeconds; // @synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds;
@property(readonly, nonatomic) unsigned long long maxPromptLength; // @synthesize maxPromptLength=_maxPromptLength;
@property(readonly, nonatomic) double personalizationSelectedPseudocountPerSemanticClass; // @synthesize personalizationSelectedPseudocountPerSemanticClass=_personalizationSelectedPseudocountPerSemanticClass;
@property(readonly, nonatomic) double personalizationDisplayedPseudocount; // @synthesize personalizationDisplayedPseudocount=_personalizationDisplayedPseudocount;
@property(readonly, nonatomic) double personalizationExplorationFactor; // @synthesize personalizationExplorationFactor=_personalizationExplorationFactor;
@property(readonly, nonatomic) unsigned long long responsesToShowAtTopForDiversity; // @synthesize responsesToShowAtTopForDiversity=_responsesToShowAtTopForDiversity;
@property(readonly, nonatomic) unsigned long long defaultResponsesToReturn; // @synthesize defaultResponsesToReturn=_defaultResponsesToReturn;
@property(readonly, nonatomic) double minToShowThreshold; // @synthesize minToShowThreshold=_minToShowThreshold;
@property(readonly, nonatomic) double responsesBonus; // @synthesize responsesBonus=_responsesBonus;
@property(readonly, nonatomic) double classDiscount; // @synthesize classDiscount=_classDiscount;
@property(readonly, nonatomic) double weightForIndividualModel; // @synthesize weightForIndividualModel=_weightForIndividualModel;
@property(readonly, nonatomic) double weightForCategoryMax; // @synthesize weightForCategoryMax=_weightForCategoryMax;
@property(readonly, nonatomic) double weightForCategoryAverage; // @synthesize weightForCategoryAverage=_weightForCategoryAverage;
@property(readonly, nonatomic) _Bool isPerCategory; // @synthesize isPerCategory=_isPerCategory;
@property(readonly, nonatomic) _Bool isReplyTextRandomized; // @synthesize isReplyTextRandomized=_isReplyTextRandomized;
@property(readonly, nonatomic) _Bool isPersonalizationDisabled; // @synthesize isPersonalizationDisabled=_isPersonalizationDisabled;
- (id)initWithDictionary:(id)arg1;

@end
