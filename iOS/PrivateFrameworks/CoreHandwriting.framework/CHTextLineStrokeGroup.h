//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CHTextLineStrokeGroup
{
    struct CGVector _averageWritingOrientation;
    NSArray *_writingDirectionSortedStrokeIdentifiers;
    NSArray *_writingDirectionSortedSubstrokes;
    struct CGVector _averageStrokeDeviation;
    vector_5071ab7f _localStrokeWritingOrientations;
}

@property(readonly, nonatomic) vector_5071ab7f *localStrokeWritingOrientations; // @synthesize localStrokeWritingOrientations=_localStrokeWritingOrientations;
@property(readonly, nonatomic) struct CGVector averageStrokeDeviation; // @synthesize averageStrokeDeviation=_averageStrokeDeviation;
@property(readonly, retain, nonatomic) NSArray *writingDirectionSortedSubstrokes; // @synthesize writingDirectionSortedSubstrokes=_writingDirectionSortedSubstrokes;
@property(readonly, retain, nonatomic) NSArray *writingDirectionSortedStrokeIdentifiers; // @synthesize writingDirectionSortedStrokeIdentifiers=_writingDirectionSortedStrokeIdentifiers;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGVector)averageWritingOrientation;
- (struct CGVector)localWritingOrientationAtStrokeIndex:(long long)arg1;
- (void)dealloc;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector)arg7 averageStrokeDeviation:(struct CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(vector_5071ab7f *)arg10;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 writingDirectionSortedSubstrokes:(id)arg5 averageWritingOrientation:(struct CGVector)arg6 averageStrokeDeviation:(struct CGVector)arg7 writingDirectionSortedStrokeIdentifiers:(id)arg8 localStrokeWritingOrientations:(vector_5071ab7f *)arg9;

@end

