//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableString, NSString;

@interface PSIGroup
{
    NSMutableString *_contentString;
    unsigned long long _compressedRanges[2];
    struct _NSRange _tokenRanges[8];
    unsigned long long _tokenRangesCount;
    short _category;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
    struct __CFArray *_assetIds;
}

+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;
+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_627e0f85 *)arg2 count:(long long)arg3;
@property(retain, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) short category; // @synthesize category=_category;
@property(nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (unsigned long long)groupIdForAssetLookup;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (void)prepareForReuse;
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenRangesCount;
- (long long)compareToGroup:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_tokenRangesDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end
