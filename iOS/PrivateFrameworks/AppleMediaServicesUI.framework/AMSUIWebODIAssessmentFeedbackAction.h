//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebODIAssessmentFeedbackAction
{
    NSString *_cacheIdentifier;
    unsigned long long _outcome;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long outcome; // @synthesize outcome=_outcome;
@property(retain, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

