//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKDiagnostics : NSObject
{
}

+ (void)saveTransitState:(id)arg1 forPaymentAppliction:(id)arg2;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (id)_allPasses;
+ (id)_secureElementData;
+ (id)generateUbiquityDiagnosticsFile:(_Bool)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)generateDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end

