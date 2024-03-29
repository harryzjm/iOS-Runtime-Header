//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, UIDelayedAction;
@protocol UIDictationTipHandlerDelegate;

__attribute__((visibility("hidden")))
@interface UIDictationTipInsertionHandler : NSObject
{
    id <UIDictationTipHandlerDelegate> _delegate;
    NSMutableString *_insertionText;
    UIDelayedAction *_finalizeAction;
    long long _textRecorderStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long textRecorderStatus; // @synthesize textRecorderStatus=_textRecorderStatus;
@property(retain, nonatomic) UIDelayedAction *finalizeAction; // @synthesize finalizeAction=_finalizeAction;
@property(retain, nonatomic) NSMutableString *insertionText; // @synthesize insertionText=_insertionText;
@property(nonatomic) __weak id <UIDictationTipHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startRecodingText:(id)arg1;
- (void)resetHandler;
- (void)recordDictationTipText:(id)arg1;
- (void)finalizeRecordedText;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

