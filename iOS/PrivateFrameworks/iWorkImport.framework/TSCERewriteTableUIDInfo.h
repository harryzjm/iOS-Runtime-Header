//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCERewriteTableUIDInfo : NSObject
{
    UUIDMap_b66c2694 _tableUIDMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)rollbackMappings:(id)arg1;
- (void)tableWasAdded:(const UUIDData_5fbc143e *)arg1;
- (id)extendMappingWithTableUIDs:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2;
- (void)saveToMessage:(struct RewriteTableUIDInfoArchive *)arg1;
- (id)initFromMessage:(const struct RewriteTableUIDInfoArchive *)arg1;
- (id)description;
- (vector_4dc5f307)originalTableUIDs;
- (const UUIDMap_b66c2694 *)tableUIDMap;
- (id)initWithTableUIDMap:(const UUIDMap_b66c2694 *)arg1;

@end

