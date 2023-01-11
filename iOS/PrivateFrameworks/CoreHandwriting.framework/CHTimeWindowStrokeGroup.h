//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHTimeWindowStrokeGroup
{
    double _startTimestamp;
    double _endTimestamp;
}

@property(readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 startTimestamp:(double)arg5 endTimestamp:(double)arg6;

@end
