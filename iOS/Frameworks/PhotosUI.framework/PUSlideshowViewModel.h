//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUSlideshowViewModel
{
    _Bool _wantsChromeVisible;
    long long _currentState;
}

@property(nonatomic, setter=setWantsChromeVisible:) _Bool wantsChromeVisible; // @synthesize wantsChromeVisible=_wantsChromeVisible;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)setWantsChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)currentChange;
- (id)newViewModelChange;

@end

