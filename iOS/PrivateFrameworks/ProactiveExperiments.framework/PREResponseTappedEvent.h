//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PREResponsesGeneratedEvent;

@interface PREResponseTappedEvent : NSObject
{
    _Bool _hasQuestionMark;
    int _inputMethod;
    PREResponsesGeneratedEvent *_responsesGeneratedEvent;
    NSString *_selectedResponse;
    NSNumber *_selectedPosition;
    unsigned long long _timeToTap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasQuestionMark; // @synthesize hasQuestionMark=_hasQuestionMark;
@property(nonatomic) int inputMethod; // @synthesize inputMethod=_inputMethod;
@property(nonatomic) unsigned long long timeToTap; // @synthesize timeToTap=_timeToTap;
@property(retain, nonatomic) NSNumber *selectedPosition; // @synthesize selectedPosition=_selectedPosition;
@property(retain, nonatomic) NSString *selectedResponse; // @synthesize selectedResponse=_selectedResponse;
@property(retain, nonatomic) PREResponsesGeneratedEvent *responsesGeneratedEvent; // @synthesize responsesGeneratedEvent=_responsesGeneratedEvent;

@end
