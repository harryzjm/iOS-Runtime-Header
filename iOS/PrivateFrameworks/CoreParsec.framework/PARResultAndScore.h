//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFSearchResult;

__attribute__((visibility("hidden")))
@interface PARResultAndScore : NSObject
{
    SFSearchResult *_result;
    double _topicScore;
    double _mediatypeScore;
    double _tldScore;
    double _totalScore;
    double _serverScore;
    double _personalizationBorda;
    double _serverBorda;
    double _blendedBordaScore;
}

@property(nonatomic) double blendedBordaScore; // @synthesize blendedBordaScore=_blendedBordaScore;
@property(nonatomic) double serverBorda; // @synthesize serverBorda=_serverBorda;
@property(nonatomic) double personalizationBorda; // @synthesize personalizationBorda=_personalizationBorda;
@property(nonatomic) double serverScore; // @synthesize serverScore=_serverScore;
@property(nonatomic) double totalScore; // @synthesize totalScore=_totalScore;
@property(nonatomic) double tldScore; // @synthesize tldScore=_tldScore;
@property(nonatomic) double mediatypeScore; // @synthesize mediatypeScore=_mediatypeScore;
@property(nonatomic) double topicScore; // @synthesize topicScore=_topicScore;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

