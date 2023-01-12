//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol UITextPasteConfigurationSupporting_Internal;

__attribute__((visibility("hidden")))
@interface UITextPasteController : NSObject
{
    NSMapTable *_sessions;
    id <UITextPasteConfigurationSupporting_Internal> _supportingView;
}

+ (id)combineAttributedStrings:(id)arg1 addingSeparation:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <UITextPasteConfigurationSupporting_Internal> supportingView; // @synthesize supportingView=_supportingView;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 forSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;
- (void)_transformTextPasteItem:(id)arg1;
- (id)_clampRange:(id)arg1;
- (_Bool)_pasteDelegateHandlesPasting;
- (void)_restorePasteResultForSession:(id)arg1;
- (void)_executePasteForSession:(id)arg1;
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2 delegate:(id)arg3 matchesTextStyles:(_Bool)arg4;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(_Bool)arg4 delegate:(id)arg5;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(_Bool)arg4;
- (id)initWithSupportingView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

