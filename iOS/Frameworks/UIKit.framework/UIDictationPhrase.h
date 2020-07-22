//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UIDictationPhrase : NSObject
{
    NSString *_text;
    NSArray *_alternativeInterpretations;
}

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;
@property(readonly, nonatomic) NSArray *alternativeInterpretations; // @synthesize alternativeInterpretations=_alternativeInterpretations;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (void)dealloc;
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2;

@end

