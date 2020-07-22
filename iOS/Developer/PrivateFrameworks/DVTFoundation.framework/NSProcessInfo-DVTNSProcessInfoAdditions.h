//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProcessInfo.h>

@interface NSProcessInfo (DVTNSProcessInfoAdditions)
- (id)dvt_activeSystemActivityTokensMatchingOptions:(unsigned long long)arg1;
- (id)dvt_beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)dvt_setUseCommandLineMessageTracerReportingOverride:(_Bool)arg1;
- (_Bool)dvt_shouldUseCommandLineMessageTracerReporting;
- (void)dvt_setDisableSCMOverride:(_Bool)arg1;
- (_Bool)dvt_shouldDisableSCM;
- (void)dvt_setDisallowSavingOverride:(_Bool)arg1;
- (_Bool)dvt_shouldDisallowSaving;
- (_Bool)dvt_isNonGraphicalProcess;
- (void)dvt_setIsNonGraphicalProcess:(_Bool)arg1;
- (long long)dvt_automaticTerminationDisablingCountForReason:(id)arg1;
- (id)dvt_automaticTerminationDisablingReasons;
- (void)_dvt_setSuddenTerminationDisablingCount:(long long)arg1 forReason:(id)arg2;
- (long long)dvt_suddenTerminationDisablingCountForReason:(id)arg1;
- (id)dvt_suddenTerminationDisablingReasons;
- (id)dvt_executablePath;
- (unsigned long long)dvt_numberOfAvailableCPUs;
@end
