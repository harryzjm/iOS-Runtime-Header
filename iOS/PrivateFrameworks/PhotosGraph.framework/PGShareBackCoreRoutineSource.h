//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLSRoutineService;

@interface PGShareBackCoreRoutineSource
{
    CLSRoutineService *_routineService;
}

- (void).cxx_destruct;
- (_Bool)suggesterInput:(id)arg1 isCloseEnoughToLocation:(id)arg2 inDateInterval:(id)arg3;
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id *)arg4;
- (_Bool)prepareSourceWithGraph:(id)arg1;
- (id)initWithLoggingConnection:(id)arg1;

@end
