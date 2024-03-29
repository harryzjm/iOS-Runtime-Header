//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface CKDAssetRecord : NSObject
{
    NSString *_recordType;
    CKRecordID *_recordID;
    NSMutableDictionary *_itemsByRecordKey;
    NSMutableDictionary *_rereferencedItemsByRecordKey;
    NSMutableDictionary *_sectionItemsByRecordKey;
    NSNumber *_sizeUpperBoundNumber;
    NSNumber *_rerefSizeUpperBoundNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber; // @synthesize rerefSizeUpperBoundNumber=_rerefSizeUpperBoundNumber;
@property(retain, nonatomic) NSNumber *sizeUpperBoundNumber; // @synthesize sizeUpperBoundNumber=_sizeUpperBoundNumber;
@property(retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey; // @synthesize sectionItemsByRecordKey=_sectionItemsByRecordKey;
@property(retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey; // @synthesize rereferencedItemsByRecordKey=_rereferencedItemsByRecordKey;
@property(retain, nonatomic) NSMutableDictionary *itemsByRecordKey; // @synthesize itemsByRecordKey=_itemsByRecordKey;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (_Bool)isEmptyOfRereferencesAssets;
- (_Bool)isEmpty;
- (_Bool)isAssetRecord;
- (_Bool)isPackageSectionRecord;
- (id)firstMMCSSectionItemError;
- (id)firstMMCSItemError;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)arg1;
- (id)allMMCSAndSectionItems;
- (id)allRecordKeys;
@property(readonly, nonatomic) NSArray *allMMCSSectionItems;
- (id)allRereferenceMMCSItems;
@property(readonly, nonatomic) NSArray *allMMCSItems;
@property(readonly) unsigned int rerefSizeUpperBound;
@property(readonly) unsigned int sizeUpperBound;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (void)addMMCSItem:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;

@end

