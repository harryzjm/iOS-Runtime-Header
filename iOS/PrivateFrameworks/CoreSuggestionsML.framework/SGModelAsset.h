//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGModelAsset : NSObject
{
}

+ (id)asset;
+ (id)dictionaryWithPlistFilename:(id)arg1;
+ (id)nameDetectorRules;
+ (id)dpRecorderRules;
+ (id)signatureRules;
+ (id)metricsConfig;
+ (id)quickResponses;
+ (id)mappings;
+ (id)rules;
+ (id)_assetWithName:(id)arg1 andLoadBlock:(CDUnknownBlockType)arg2;
+ (void)_reset;
+ (void)_invokeOnUpdateBlock;
+ (void)registerOnUpdateBlock:(CDUnknownBlockType)arg1;

@end
