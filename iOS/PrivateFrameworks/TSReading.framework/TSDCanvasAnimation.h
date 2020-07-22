//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/CAAnimationDelegate-Protocol.h>

@class CAMediaTimingFunction, NSDate, NSString, TSDInteractiveCanvasController, TSUNoCopyDictionary;

@interface TSDCanvasAnimation : NSObject <CAAnimationDelegate>
{
    NSString *_animationID;
    void *_context;
    id _delegate;
    SEL _willStartSelector;
    SEL _didStopSelector;
    double _duration;
    double _delay;
    NSDate *_startDate;
    CAMediaTimingFunction *_timingFunction;
    float _repeatCount;
    _Bool _repeatAutoreverses;
    TSUNoCopyDictionary *_animationDictionariesForLayers;
    CDUnknownBlockType _completionBlock;
    unsigned int _outstandingAnimationCount;
    _Bool _firstAnimationDidStart;
    _Bool _allAnimationsFinishedBeforeStopping;
    CDUnknownBlockType _filterBlock;
    _Bool _useRepFiltering;
    TSDInteractiveCanvasController *_interactiveCanvasController;
}

@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
@property(nonatomic) _Bool useRepFiltering; // @synthesize useRepFiltering=_useRepFiltering;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool repeatAutoreverses; // @synthesize repeatAutoreverses=_repeatAutoreverses;
@property(nonatomic) float repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) SEL didStopSelector; // @synthesize didStopSelector=_didStopSelector;
@property(nonatomic) SEL willStartSelector; // @synthesize willStartSelector=_willStartSelector;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) void *context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) NSString *animationID; // @synthesize animationID=_animationID;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSString *beginTimeMode;
@property(readonly, nonatomic) double beginTime;
- (void)dealloc;
- (id)initWithAnimationID:(id)arg1 interactiveCanvasController:(id)arg2 context:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

