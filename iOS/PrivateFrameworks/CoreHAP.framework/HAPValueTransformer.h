//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HAPValueTransformer : HMFObject
{
}

+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
+ (Class)expectedClassForFormat:(unsigned long long)arg1;
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;

@end

