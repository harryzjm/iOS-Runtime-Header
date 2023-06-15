//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationTipPresentationHandler : NSObject
{
    _Bool _isShowingTip;
    _Bool _tipPresentedInCurrentDictationSession;
    long long _dictationTipSignaled;
}

@property(nonatomic) _Bool tipPresentedInCurrentDictationSession; // @synthesize tipPresentedInCurrentDictationSession=_tipPresentedInCurrentDictationSession;
@property(nonatomic) long long dictationTipSignaled; // @synthesize dictationTipSignaled=_dictationTipSignaled;
@property(nonatomic) _Bool isShowingTip; // @synthesize isShowingTip=_isShowingTip;
- (long long)dictationTipDisplayCount:(long long)arg1;
- (_Bool)dictationCommandTipsEnabled;
- (_Bool)tipShownLastWeek;
- (void)resetDictationTipSignal;
- (void)resetHandler;
- (void)signalTipPresentedInCurrentDictationSession;
- (long long)getDictationTipSignaled;
- (_Bool)shouldSignalDictationTip:(long long)arg1;
- (_Bool)dictationTipShownOverLimit:(long long)arg1;
- (id)init;

@end

