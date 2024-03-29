//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject
{
    TSWPStorage *_storage;
}

+ (id)payloadWithStorage:(id)arg1;
- (void).cxx_destruct;
- (id)string;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 storage:(id)arg2;
- (id)initWithStorage:(id)arg1;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (_Bool)tst_dataObjectIsEqual:(id)arg1;
- (unsigned long long)tst_dataObjectHash;

@end

