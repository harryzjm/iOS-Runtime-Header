//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TUCallCenter;

@interface SUInstallationConstraintMonitorPhoneCalls
{
    TUCallCenter *_queue_callCenter;
    _Bool _queue_satisfied;
    _Bool _inSpringBoard;
}

- (void)_queue_noteOnExistingPhoneCallDidChange:(_Bool)arg1;
- (void)_callStatusChanged;
- (unsigned long long)unsatisfiedConstraints;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 callCenter:(id)arg3 inSpringBoard:(_Bool)arg4 onExistingPhoneCall:(_Bool)arg5;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

@end

