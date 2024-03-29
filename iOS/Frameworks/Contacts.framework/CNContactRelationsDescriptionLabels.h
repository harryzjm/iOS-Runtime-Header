//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactRelationsDescriptionLabels : NSObject
{
    NSArray *_preferredLanguages;
    NSArray *_standardLabels;
    NSArray *_standardLocaleSpecificLabels;
    NSArray *_extendedLabels;
    NSArray *_extendedLocaleSpecificLabels;
    NSDictionary *_localizedStringsByLabelKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *localizedStringsByLabelKey; // @synthesize localizedStringsByLabelKey=_localizedStringsByLabelKey;
@property(readonly, nonatomic) NSArray *extendedLocaleSpecificLabels; // @synthesize extendedLocaleSpecificLabels=_extendedLocaleSpecificLabels;
@property(readonly, nonatomic) NSArray *extendedLabels; // @synthesize extendedLabels=_extendedLabels;
@property(readonly, nonatomic) NSArray *standardLocaleSpecificLabels; // @synthesize standardLocaleSpecificLabels=_standardLocaleSpecificLabels;
@property(readonly, nonatomic) NSArray *standardLabels; // @synthesize standardLabels=_standardLabels;
@property(readonly, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
- (id)initWithPreferredLanguages:(id)arg1 standardLabels:(id)arg2 standardLocaleSpecificLabels:(id)arg3 extendedLabels:(id)arg4 extendedLocaleSpecificLabels:(id)arg5 localizedStringsByLabelKey:(id)arg6;

@end

