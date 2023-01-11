//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SXComponentLayoutRules, SXComponentTextRules;

@interface SXComponentClassification : NSObject
{
    SXComponentLayoutRules *_layoutRules;
    SXComponentTextRules *_textRules;
    NSArray *_defaultStyleIdentifiers;
}

+ (id)roleString;
+ (int)role;
+ (id)typeString;
+ (_Bool)shouldRegister;
+ (id)classificationForComponentWithType:(id)arg1 role:(id)arg2;
+ (id)classificationForComponentWithType:(id)arg1;
+ (id)classificationForComponentWithRole:(int)arg1;
+ (void)registerClassification;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *defaultStyleIdentifiers; // @synthesize defaultStyleIdentifiers=_defaultStyleIdentifiers;
- (void)setupStyleIdentifiers;
- (_Bool)isCollapsible;
- (_Bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (Class)componentModelClass;
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property(readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property(readonly, nonatomic) SXComponentTextRules *textRules; // @synthesize textRules=_textRules;
@property(readonly, nonatomic) SXComponentLayoutRules *layoutRules; // @synthesize layoutRules=_layoutRules;
- (_Bool)accessibilitySkippedDuringReadAll;
- (id)accessibilityCustomRotorMembership;
- (id)accessibilityContextualLabel;
- (id)init;

@end
