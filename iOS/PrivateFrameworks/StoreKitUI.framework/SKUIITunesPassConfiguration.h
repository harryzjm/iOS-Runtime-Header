//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIITunesPassConfiguration : NSObject
{
    NSString *_dialogLearnMoreButton;
    NSString *_dialogMessage;
    NSString *_dialogNotNowButton;
    NSString *_dialogTitle;
    NSString *_learnMoreAddPassButtonTitle;
    NSString *_learnMoreDoneButtonTitle;
    NSString *_learnMoreExplanation;
    NSString *_learnMoreTitle;
    NSString *_learnMoreViewPassButtonTitle;
    NSString *_lockupDescription;
    NSString *_lockupLearnMoreLinkTitle;
    NSString *_lockupTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *lockupTitle; // @synthesize lockupTitle=_lockupTitle;
@property(readonly, nonatomic) NSString *lockupLearnMoreLinkTitle; // @synthesize lockupLearnMoreLinkTitle=_lockupLearnMoreLinkTitle;
@property(readonly, nonatomic) NSString *lockupDescription; // @synthesize lockupDescription=_lockupDescription;
@property(readonly, nonatomic) NSString *learnMoreViewPassButtonTitle; // @synthesize learnMoreViewPassButtonTitle=_learnMoreViewPassButtonTitle;
@property(readonly, nonatomic) NSString *learnMoreTitle; // @synthesize learnMoreTitle=_learnMoreTitle;
@property(readonly, nonatomic) NSString *learnMoreExplanation; // @synthesize learnMoreExplanation=_learnMoreExplanation;
@property(readonly, nonatomic) NSString *learnMoreDoneButtonTitle; // @synthesize learnMoreDoneButtonTitle=_learnMoreDoneButtonTitle;
@property(readonly, nonatomic) NSString *learnMoreAddPassButtonTitle; // @synthesize learnMoreAddPassButtonTitle=_learnMoreAddPassButtonTitle;
- (id)learnMoreAlertView;
- (id)initWithITunesPassDictionary:(id)arg1 clientContext:(id)arg2;

@end

