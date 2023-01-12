//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MALegacyProgressReporter
{
    double _lastProgressCallTime;
    _Bool _isCancelled;
    CDUnknownBlockType _progressBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (id)childProgressWithOffset:(double)arg1 scale:(double)arg2;
- (_Bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;

@end
