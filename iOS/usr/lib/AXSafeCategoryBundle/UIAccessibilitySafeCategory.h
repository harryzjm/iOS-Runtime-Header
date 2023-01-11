//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIAccessibilitySafeCategory : NSObject
{
}

+ (void)_addCategoryMethods:(struct objc_method **)arg1 count:(unsigned int)arg2 excluding:(SEL *)arg3 count:(unsigned int)arg4 toClass:(Class)arg5 isClass:(_Bool)arg6;
+ (id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(_Bool)arg2;
+ (id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(_Bool)arg2;
+ (void)_installSafeCategoryOnClassNamed:(id)arg1;
+ (id)_installLocalValidationMethodOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryValidationMethod;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)safeCategoryAddDependenciesToCollection:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;

@end

