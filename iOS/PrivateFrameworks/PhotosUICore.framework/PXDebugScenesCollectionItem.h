//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PXDebugScenesCollectionItem : NSObject
{
    NSNumber *_sceneIdentifier;
    NSString *_keyword;
    NSArray *_synonyms;
    NSString *_synonymsString;
}

@property(copy, nonatomic) NSString *synonymsString; // @synthesize synonymsString=_synonymsString;
@property(copy, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSNumber *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void).cxx_destruct;
- (id)_synonymsStringWithSynonyms:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 keyword:(id)arg2 synonyms:(id)arg3;

@end

