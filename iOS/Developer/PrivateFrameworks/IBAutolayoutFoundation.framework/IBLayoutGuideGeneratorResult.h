//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface IBLayoutGuideGeneratorResult : NSObject
{
    long long _validGuides;
    NSArray *_layoutGuides;
    NSSet *_layoutGuideMatches;
    struct CGRect _targetRect;
}

- (void).cxx_destruct;
@property struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(retain, nonatomic) NSSet *layoutGuideMatches; // @synthesize layoutGuideMatches=_layoutGuideMatches;
@property(retain, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides=_layoutGuides;
@property long long validGuides; // @synthesize validGuides=_validGuides;

@end
