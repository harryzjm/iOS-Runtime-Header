//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMRule, NSMutableDictionary;

@interface _PSFeaturizedBehaviorRule : NSObject
{
    BMRule *_rule;
    NSMutableDictionary *_features;
    double _score;
}

- (void).cxx_destruct;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSMutableDictionary *features; // @synthesize features=_features;
@property(retain, nonatomic) BMRule *rule; // @synthesize rule=_rule;
- (id)initWithRule:(id)arg1 score:(double)arg2 features:(id)arg3;

@end
