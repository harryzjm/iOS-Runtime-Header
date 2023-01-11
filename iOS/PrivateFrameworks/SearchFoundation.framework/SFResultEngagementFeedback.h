//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>

@interface SFResultEngagementFeedback <NSCopying>
{
    _Bool _actionEngaged;
    _Bool _matchesUnengagedSuggestion;
    unsigned long long _triggerEvent;
    unsigned long long _destination;
    unsigned long long _actionTarget;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(nonatomic) _Bool matchesUnengagedSuggestion; // @synthesize matchesUnengagedSuggestion=_matchesUnengagedSuggestion;
@property(readonly, nonatomic) _Bool actionEngaged; // @synthesize actionEngaged=_actionEngaged;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 actionTarget:(unsigned long long)arg4;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3;
- (id)initWithResult:(id)arg1 actionEngaged:(_Bool)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4;

@end
