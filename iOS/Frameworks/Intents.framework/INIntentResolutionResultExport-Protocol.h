//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntentSlotDescription, NSArray, NSData, NSObject, NSString;

@protocol INIntentResolutionResultExport <NSObject, JSExport>
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(NSArray *)arg2;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(NSObject *)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(NSArray *)arg1;
+ (id)resolutionResultSuccessWithResolvedValue:(NSObject *)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1;
@property(nonatomic) unsigned long long unsupportedReason;
@property(retain, nonatomic) NSObject *itemToConfirm;
@property(retain, nonatomic) NSObject *incompleteValue;
@property(retain, nonatomic) NSObject *resolvedValue;
@property(retain, nonatomic) NSArray *neededParameterKeyPaths;
@property(retain, nonatomic) NSArray *incompleteParameterKeyPaths;
@property(retain, nonatomic) NSString *conflictingParameterKeyPath;
@property(retain, nonatomic) NSArray *alternatives;
@property(retain, nonatomic) NSArray *disambiguationItems;
- (NSData *)_dataForIntentSlotDescription:(INIntentSlotDescription *)arg1;
- (id)init;
@end

