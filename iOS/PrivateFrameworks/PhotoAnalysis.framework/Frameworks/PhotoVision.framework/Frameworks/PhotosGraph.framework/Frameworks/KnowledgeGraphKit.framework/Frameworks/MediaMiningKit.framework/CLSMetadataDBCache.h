//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate;

@interface CLSMetadataDBCache
{
    NSPredicate *_predicateEntryIdentifierTemplate;
    NSPredicate *_predicateMetadataKeyTemplate;
}

- (void).cxx_destruct;
- (id)dataModelName;
- (void)setAttributes:(id)arg1 forIdentifier:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3;
- (id)valueForKey:(id)arg1 andIdentifier:(id)arg2;
- (id)attributesForIdentifier:(id)arg1;
- (id)init;

@end

