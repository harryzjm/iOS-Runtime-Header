//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject
{
    _Bool _shouldForceRefreshForAllUIs;
    NSMutableSet *_clientModelsThatUpdatedSuggestions;
    NSMutableDictionary *_registeredDelegatesForClientModels;
    NSMutableDictionary *_requestUUIDToClientModelCaches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *requestUUIDToClientModelCaches; // @synthesize requestUUIDToClientModelCaches=_requestUUIDToClientModelCaches;
@property(retain, nonatomic) NSMutableDictionary *registeredDelegatesForClientModels; // @synthesize registeredDelegatesForClientModels=_registeredDelegatesForClientModels;
@property(nonatomic) _Bool shouldForceRefreshForAllUIs; // @synthesize shouldForceRefreshForAllUIs=_shouldForceRefreshForAllUIs;
@property(retain, nonatomic) NSMutableSet *clientModelsThatUpdatedSuggestions; // @synthesize clientModelsThatUpdatedSuggestions=_clientModelsThatUpdatedSuggestions;
- (id)init;

@end
