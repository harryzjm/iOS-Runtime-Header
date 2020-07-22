//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIWordSearchOperationGetCandidates
{
    _Bool _predictionEnabled;
    _Bool _reanalysisMode;
    NSString *_inputString;
    TIWordSearchCandidateResultSet *_results;
    id _target;
    NSArray *_geometryModelData;
    SEL _action;
    TIWordSearch *_wordSearch;
    unsigned long long _autocapitalizationType;
}

@property(readonly, nonatomic) unsigned long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(retain) TIWordSearch *wordSearch; // @synthesize wordSearch=_wordSearch;
@property(readonly, nonatomic) _Bool reanalysisMode; // @synthesize reanalysisMode=_reanalysisMode;
@property(readonly, nonatomic) _Bool predictionEnabled; // @synthesize predictionEnabled=_predictionEnabled;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) NSArray *geometryModelData; // @synthesize geometryModelData=_geometryModelData;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) TIWordSearchCandidateResultSet *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;
- (void)perform;
- (void)checkForCachedResults;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(_Bool)arg3 reanalysisMode:(_Bool)arg4 autocapitalizationType:(unsigned long long)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8;

@end
