//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSAlignmentLayoutRule : NSObject
{
    NSArray *_alignedAnchors;
}

+ (id)alignmentWithAnchors:(id)arg1;
@property(readonly, copy) NSArray *alignedAnchors; // @synthesize alignedAnchors=_alignedAnchors;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

