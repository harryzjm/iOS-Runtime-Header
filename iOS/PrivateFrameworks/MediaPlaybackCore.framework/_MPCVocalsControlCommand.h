//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCVocalsControlCommand
{
    _Bool _active;
    _Bool _continuous;
    _Bool _disabled;
    float _level;
    float _minLevel;
    float _maxLevel;
    long long _disabledReason;
}

@property(nonatomic) long long disabledReason; // @synthesize disabledReason=_disabledReason;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) float maxLevel; // @synthesize maxLevel=_maxLevel;
@property(nonatomic) float minLevel; // @synthesize minLevel=_minLevel;
@property(nonatomic) float level; // @synthesize level=_level;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)setVocalsLevel:(float)arg1;
- (id)activateVocalsControl:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

