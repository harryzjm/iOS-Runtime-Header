//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface HFEventBuilderItemProviderEventGroup : NSObject
{
    NSString *_comparisonKey;
    NSSet *_eventBuilders;
}

+ (id)eventGroupWithBuilders:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *eventBuilders; // @synthesize eventBuilders=_eventBuilders;
@property(retain, nonatomic) NSString *comparisonKey; // @synthesize comparisonKey=_comparisonKey;
- (id)initWithEventBuilders:(id)arg1;

@end
