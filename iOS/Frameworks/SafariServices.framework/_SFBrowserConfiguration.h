//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _SFBrowserConfiguration : NSObject
{
    long long _configuration;
}

@property(readonly, nonatomic) _Bool usesExtraBarGradients;
@property(readonly, nonatomic) _Bool usesDarkTheme;
@property(readonly, nonatomic) unsigned long long toolbarTintStyle;
@property(readonly, nonatomic) unsigned long long navigationBarTintStyle;
@property(readonly, nonatomic) _Bool allowsReopeningClosedTabs;
@property(readonly, nonatomic) _Bool allowsPersistingTabState;
@property(readonly, nonatomic) _Bool allowsClosingLastTab;
@property(readonly, nonatomic) _Bool allowsSearchFeedback;
@property(readonly, nonatomic) _Bool allowsRestoringEducationTabs;
@property(readonly, nonatomic) _Bool usesPersistentDataStore;
@property(readonly, nonatomic) _Bool forcesDoNotTrack;
@property(readonly, nonatomic) _Bool allowsUserActivityFeedback;
@property(readonly, nonatomic) _Bool allowsSpeculativeLoading;
@property(readonly, nonatomic) _Bool allowsSiteSpecificSearch;
@property(readonly, nonatomic) _Bool allowsSearchSuggestions;
@property(readonly, nonatomic) _Bool allowsKeyboardCorrectionLearning;
@property(readonly, nonatomic) _Bool allowsAutoFill;
@property(readonly, nonatomic, getter=isPrivateBrowsingEnabled) _Bool privateBrowsingEnabled;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPrivateBrowsingEnabled:(_Bool)arg1;

@end

