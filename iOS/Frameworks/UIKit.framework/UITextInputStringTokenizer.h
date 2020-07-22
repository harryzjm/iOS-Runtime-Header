//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UITextInputTokenizer-Protocol.h>

@class NSString, UIResponder;
@protocol UITextInput;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer>
{
    UIResponder<UITextInput> *_textInput;
}

- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (struct _NSRange)_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(_Bool)arg3;
- (long long)_indexForTextPosition:(id)arg1;
- (id)initWithTextInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

