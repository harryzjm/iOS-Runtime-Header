//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDDocument, WDListDefinition;

__attribute__((visibility("hidden")))
@interface WDListDefinitionTable : NSObject
{
    WDDocument *mDocument;
    NSMutableArray *mListDefinitions;
    NSMutableDictionary *mListDefinitionMapById;
    NSMutableDictionary *mListDefinitionMapByStyleId;
    WDListDefinition *mNullListDefinition;
    WDListDefinition *mDefaultListDefinition;
}

- (void).cxx_destruct;
- (id)description;
- (id)resolvedDefinitionWithDefinitionId:(int)arg1;
- (id)definitionWithStyleId:(id)arg1;
- (id)definitionWithDefinitionId:(int)arg1;
- (id)addDefinitionWithDefinitionId:(int)arg1 styleId:(id)arg2;
- (id)definitions;
- (id)initWithDocument:(id)arg1;

@end

