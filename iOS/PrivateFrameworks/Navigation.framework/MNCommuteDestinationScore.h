//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNCommuteDestination, MNCommuteDestinationSuggestion, NSDate, NSHashTable, NSString;

@interface MNCommuteDestinationScore : NSObject
{
    _Bool _destinationInvalid;
    int _score;
    NSDate *_lastUpdate;
    MNCommuteDestination *_destination;
    NSString *_descriptionExtras;
    NSHashTable *_observers;
}

+ (id)sessionStartDateOrNow;
+ (id)sessionStartDate;
+ (void)setSessionStartDate:(id)arg1;
+ (double)weight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *descriptionExtras; // @synthesize descriptionExtras=_descriptionExtras;
@property(nonatomic) __weak MNCommuteDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly, nonatomic) int score; // @synthesize score=_score;
@property(readonly, nonatomic) _Bool destinationInvalid; // @synthesize destinationInvalid=_destinationInvalid;
- (id)description;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) MNCommuteDestinationSuggestion *destinationSuggestion;
- (void)lastUpdateIsNow;
- (void)updateScoreIfPossible;
@property(readonly) double weightedScore;
- (id)initWithDestination:(id)arg1;
- (id)init;

@end
