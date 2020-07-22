//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer
{
    NSArray *_valueTransformers;
}

@property(copy, nonatomic) NSArray *valueTransformers; // @synthesize valueTransformers=_valueTransformers;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

