//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXLayoutInstructions : NSObject
{
    NSArray *_instructions;
}

+ (id)defaultInstructions;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
- (id)description;
- (_Bool)areFulfilledForBlueprint:(id)arg1;
- (void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (id)initWithInstructions:(id)arg1;

@end
