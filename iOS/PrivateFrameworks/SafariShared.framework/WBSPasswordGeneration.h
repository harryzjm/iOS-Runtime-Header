//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WBSPasswordGeneration : NSObject
{
}

+ (_Bool)passwordGenerationIsDisallowedByRequirements:(id)arg1;
+ (_Bool)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
+ (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
+ (id)defaultRequirementsForURL:(id)arg1;
+ (id)defaultRequirementsForDomain:(id)arg1;
+ (id)generatedPasswordMatchingRequirements:(id)arg1;
+ (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2;

@end

