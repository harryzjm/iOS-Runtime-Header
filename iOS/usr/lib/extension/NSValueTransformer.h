//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSValueTransformer : NSObject
{
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)valueTransformerNames;
+ (id)valueTransformerForName:(id)arg1;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end

