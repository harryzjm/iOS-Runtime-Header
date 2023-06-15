//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TIKeyboardCandidate;

__attribute__((visibility("hidden")))
@interface _UIInlineTextCompletion : NSObject
{
    TIKeyboardCandidate *_completion;
    TIKeyboardCandidate *_source;
}

+ (id)inlineTextCompletion:(id)arg1 source:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TIKeyboardCandidate *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) TIKeyboardCandidate *completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *input;
@property(readonly, nonatomic) NSString *candidate;
- (id)initWithCompletion:(id)arg1 source:(id)arg2;

@end

