//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDOMEvent-Protocol.h>

@class IKDOMNode, NSDate, NSString;

@interface IKDOMEvent <IKJSDOMEvent>
{
    _Bool _bubbles;
    _Bool _cancelable;
    _Bool _inUse;
    _Bool _defaultPrevented;
    NSString *_type;
    IKDOMNode *_target;
    NSDate *_timeStamp;
    NSString *_xmlAttribute;
    IKDOMNode *_currentTarget;
    long long _eventPhase;
    long long _dispatchState;
}

@property(nonatomic) _Bool defaultPrevented; // @synthesize defaultPrevented=_defaultPrevented;
@property(nonatomic) long long dispatchState; // @synthesize dispatchState=_dispatchState;
@property(nonatomic) long long eventPhase; // @synthesize eventPhase=_eventPhase;
@property(retain, nonatomic) IKDOMNode *currentTarget; // @synthesize currentTarget=_currentTarget;
@property(nonatomic, getter=isInUse) _Bool inUse; // @synthesize inUse=_inUse;
@property(readonly, retain, nonatomic) NSString *xmlAttribute; // @synthesize xmlAttribute=_xmlAttribute;
@property(readonly, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) _Bool cancelable; // @synthesize cancelable=_cancelable;
@property(readonly, nonatomic) _Bool bubbles; // @synthesize bubbles=_bubbles;
@property(retain, nonatomic) IKDOMNode *target; // @synthesize target=_target;
@property(readonly, retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)stopImmediatePropagation;
- (void)preventDefault;
- (void)stopPropagation;
- (_Bool)isImmediatePropagationStopped;
- (_Bool)isPropagationStopped;
- (void)updateDispatchStateWithCurrentTarget:(id)arg1 phase:(long long)arg2;
- (id)initWithType:(id)arg1 eventInit:(id)arg2;
- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(_Bool)arg4 isCancelable:(_Bool)arg5;

@end

