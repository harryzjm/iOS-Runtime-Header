//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SPUIPPTTypingHelper, SPUISearchViewController, UIApplication;

@interface SPUITestingHelper : NSObject
{
    SPUISearchViewController *_searchViewController;
    SPUIPPTTypingHelper *_typingHelper;
}

@property(retain) SPUIPPTTypingHelper *typingHelper; // @synthesize typingHelper=_typingHelper;
@property(retain) SPUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void).cxx_destruct;
- (void)setDefaultsForSearchVC;
- (void)searchForString:(id)arg1 testName:(id)arg2 event:(unsigned long long)arg3 sourcePreference:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchManyStringsForTestName:(id)arg1 options:(id)arg2 event:(unsigned long long)arg3 sourcePreference:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)scrollMainResultsForTest:(id)arg1 forQuery:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollForSectionHeader:(id)arg1 forSearchString:(id)arg2 testName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performCardScrollTest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performTest:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canPerformTest:(id)arg1;
@property(readonly) UIApplication *activeApp;
- (id)initWithSearchViewController:(id)arg1;

@end

