//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSWPPlaceholderSmartField.h"

@class NSString, TSWPMergeFieldType;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField
{
    _Bool _requiresFollowingWhitespace;
    _Bool _hasCustomText;
    TSWPMergeFieldType *_fieldType;
    long long _category;
    NSString *_whitespace;
    NSString *_guid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *whitespace; // @synthesize whitespace=_whitespace;
@property(nonatomic) _Bool hasCustomText; // @synthesize hasCustomText=_hasCustomText;
@property(nonatomic) _Bool requiresFollowingWhitespace; // @synthesize requiresFollowingWhitespace=_requiresFollowingWhitespace;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) TSWPMergeFieldType *fieldType; // @synthesize fieldType=_fieldType;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)scriptTag;
- (unsigned short)smartFieldKind;
- (_Bool)allowsReplacing;
- (_Bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 category:(long long)arg2;

@end

