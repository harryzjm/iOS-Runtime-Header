//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SMUOBTextWelcomeController.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI30AnalyticsConsentViewController : SMUOBTextWelcomeController
{
    MISSING_TYPE *privacyPreferenceClient;
    MISSING_TYPE *version;
    MISSING_TYPE *isPurchaser;
    MISSING_TYPE *eventHub;
    MISSING_TYPE *metricPage;
    MISSING_TYPE *onConsent;
    MISSING_TYPE *onDismiss;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1;
- (void)didTapOptOutButton;
- (void)didTapOptInButton;
- (void)didTapLearnMoreButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

