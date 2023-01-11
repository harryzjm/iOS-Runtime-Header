//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXHomeScreenCachedSuggestions, ATXInformationStore, NSDictionary, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_source;

@interface ATXHomeScreenSuggestionClientGuardedData : NSObject
{
    NSHashTable *observers;
    NSObject<OS_dispatch_source> *rotationSuppressionTimer;
    ATXHomeScreenCachedSuggestions *suppressedSuggestions;
    NSDictionary *currentSuggestionWidgetLayouts;
    NSDictionary *currentAppPredictionPanelLayouts;
    NSDictionary *currentStackSuggestions;
    NSMutableArray *currentFallbacks;
    NSString *currentBlendingCacheId;
    NSMutableArray *stacksAffectedByDebugRotation;
    ATXInformationStore *store;
}

- (void).cxx_destruct;

@end
